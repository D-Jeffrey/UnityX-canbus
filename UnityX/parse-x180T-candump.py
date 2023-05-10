import argparse
import os
import sys
import signal
import time
import ruyaml as YAML

devices = {  0x0: 'Bus', 0x10: 'Controller',  0x1: 'BTController?', 0x3: 'Panel', 0xb: 'Outside Lights', 0xd: 'Ceiling Lights',
            0xF: 'Water Pump', 0x1C: 'Awning'}
cmds = {0:"--", 1:"stat", 2:"what", 3: "Answer", 4: "SET", 5: "DONE?", 6:"6", 7:"7", 8:"8", 9:"9", 10:"10", 11:"11", 12:"12", 13:"13", 14:"14", 15:"15"}

def signal_handler(signal, frame):
    global MyCANDev
    wrapup(MyCANDev.args)
    exit(0)

class CanDevice(dict):
    def __init__(self, devid, name, ctype = None, data = None):
        self.deviceid = devid
        self.name = name
        self.ctype = ctype
        self.data = data
        self.count = 0
    def __repr__(self) -> str:
        return format(self.deviceid, "02X") + f": {self.name} Lasttype:{self.ctype}     DATA: {self.data}"

class CanDataDev:
    def __init__(self, devid):
        self.deviceid = devid
        self.count = 1

class CanDataSet:
    def __init__(self, data):
        self.data = data
        self.deviceref = dict()
        self.timelast = None

    def addDevice(self, devid, attime):
        if devid < 0:
            return
        if devid in self.deviceref:
            self.deviceref[devid].count += 1
        else:
            self.deviceref[devid] = CanDataDev(devid)
        self.timelast = attime # just keep the last time of any device



class CanDevieState:
    def __init__(self, argv):
        self.Devices = dict()
        self.CanData = dict()
        self.args = argv
        
def loadTheConfig(configFilePath):
    """ if configFilePath is a valid file load a yaml/json config file """
    if os.path.isfile(configFilePath):
        with open(configFilePath, "r") as content:
            yaml = YAML.YAML(typ='safe')
            return yaml.load(content.read())
        
def readTheCan(timemark, arbitrationId, canData, argv):
    # print(f"a = {arbitrationId} d = {canData}")

    # standard or extended
    canfrom = ""
    cmd = ""
    can_from = "0"
    can_to = "0"
    can_toI = -1
    can_fromI = -1
    canto = "bus"
    cantype = ""
    arbid = int(arbitrationId, 16)
    filter = argv.filter
    negfilter = argv.negfilter
    surpresszero = argv.surpresszeros
    if surpresszero and (len(canData)== 0 or int(canData,16)==0):
        return
    printit = (len(filter) == 0 or filter == None)      # If blank show all
    status = "new"
    
    if len(arbitrationId)<=3:
        idBits = bin(arbid)[2:].zfill(12)    
    else:
        idBits = bin(arbid)[2:].zfill(28)
    can_startB = idBits[1:4]
    SDO = can_startB == "110" or can_startB == "101"
    NMT = can_startB == "111"
    PDO = not (SDO or NMT)
    can_fromI = int(idBits[4:9], 2)
    can_from = format(can_fromI, "02X")
    cantype = idBits[9:11]
    if len(arbitrationId)>3:
        can_toI = int(idBits[11:16], 2)
        canwhatB = idBits[16:24]
        canwhatH = format(int(canwhatB, 2), "02X")
        
        cmd = format(int(idBits[24:28], 2), "01X")
        can_to = format(can_toI, "02X")
        
    if can_fromI in devices:
        canfrom = devices[can_fromI]
        True
    else:
        canfrom = "?unknown " + str(can_from)
    if can_fromI in MyCANDev.Devices:
        if MyCANDev.Devices[can_fromI].data == canData:
            status = " data is same"
        else:
            if MyCANDev.Devices[can_fromI].data == None:
                status = "new"    
            else:
                cty = int(MyCANDev.Devices[can_fromI].ctype, 2)
                status = f"changed (for {cty}-{cmds[cty]} was {MyCANDev.Devices[can_fromI].data})"
    if can_toI >= 0:
        if can_toI in devices:
            # print (f"found {can_to} as  {devices[can_toI]}")
            canto = devices[can_toI]
        else:
            canto = "?unknown " + str(can_to)            
    printit = printit or (can_from in filter or can_to in filter)
    printit = printit and not (can_from in negfilter or can_to in negfilter)
    if not printit:
        # print (f"    skipping :  {can_from}  {can_to}")
        pass

    can_start = "  "
    if NMT:
        can_start = "N "
    if SDO:
        can_start = " S"

    printstr1 = f"{timemark:8.3f} {can_start}  {canfrom: <15} {cantype}-{cmds[int(cantype,2)]: <8}"
    printstr2 = ""
    
    if can_toI >= 0:
        printstr2 = f"{canwhatB}-{canwhatH}  {canto: <15} {cmd}-{cmds[int(cmd)]: <8}   "
    if not argv.change:
        status = ""
    if printit: 
        print (f"{printstr1: <45} {printstr2: <44} {canData} {status}")

    if can_fromI in MyCANDev.Devices:
        MyCANDev.Devices[can_fromI].ctype = cantype
        MyCANDev.Devices[can_fromI].data = canData
    else:
        # print ("Adding New {can_fromI}")
        MyCANDev.Devices[can_fromI] = CanDevice(can_fromI, canfrom, cantype, canData)
    if can_toI >= 0:
        if not can_toI in MyCANDev.Devices:
            MyCANDev.Devices[can_toI] = CanDevice(can_toI, canto, cantype, canData)
        MyCANDev.Devices[can_toI].count += 1
    MyCANDev.Devices[can_fromI].count += 1

    if not canData in MyCANDev.CanData:
        MyCANDev.CanData[canData] = CanDataSet(canData)
    MyCANDev.CanData[canData].addDevice(can_fromI, timemark)
    if not argv.dumptablefrom:
        MyCANDev.CanData[canData].addDevice(can_toI, timemark)
    
    
header = f"{'  secs': <8} bit {'FROM': <15} {'type-': <15}  {'what':<11} {'TO': <13}  {'cmd-': <12}      Data"
headln = f"{'-'     :-<8} --- {'-'   :-<15} {'-'    :-<15}  {'-':-<11} {'-':-<13}  {'-':-<12}      {'-':-<12}"

    
def parse_console(argv):
    starttime = 0
    print (header)
    print (headln)
    try:
        for linein in sys.stdin:
            line = linein.strip().split(' ')
            if len(line) == 3:
                timeval = float(line[0].replace('(','').replace(')',''))
                if starttime == 0:
                    starttime = timeval
                timeval = timeval - starttime
                (arbitrationid, data) = line[2].split('#')
                
                readTheCan(timeval, arbitrationid, data, argv)
            else:
                print(f"!!Bad:{linein}")
    except BrokenPipeError:
        pass
    
def parse_file(argv):
    starttime = 0
    if argv.candumpFile and os.path.isfile(argv.candumpFile):
        with open(argv.candumpFile, "r") as file:
            print (header)
            print (headln)
            for linein in file:
                line = linein.strip().split(' ')
                if len(line) == 3:
                    timeval = float(line[0].replace('(','').replace(')',''))
                    if starttime == 0:
                        starttime = timeval
                    timeval = timeval - starttime
                    (arbitrationid, data) = line[2].split('#')
                    readTheCan(timeval, arbitrationid, data, argv)
                    
                else:
                    print(f"!!Bad:{linein}")
    else:
        print(f"The candump path {argv.candumpFile} does exist or cannot be read")

def wrapup(args):
    global MyCANDev
    skipped = 0
    columns = 4 
    dcolumns = 8
    if args.dumptablefrom:
        args.dumptable = True
    if args.nocolumns:
        columns = 1
        dcolumns = 1
    args.dumptable = args.dumptable or args.surpressincremental or args.surpresszeros or args.surpresssingles or args.onlyssingles
    
    if args.negfilter:
        negfilter = args.negfilter
    else:
        negfilter = []
    if args.filter:
        for d in dict(sorted(MyCANDev.Devices.items())):
            if format(d,"02X") in args.filter:
                pass
            else:
                negfilter.append(d)
    if args.surpressincremental:
        
        skipdata = {}
        delta = 0
        previous = -1
        # timeprev = -2
        # timedelta = -1
        for d in dict(sorted(MyCANDev.CanData.items())):
            if (len(d) >0):
                datapack = int(d,16)
                # timelst = MyCANDev.CanData[d].timelast
                if delta == datapack - previous:
                    skipdata[previousd] = 1
                    skipdata[d] = 1
                delta = datapack - previous
                previous = datapack
                previousd = d
                # timedelta = timelst - timeprev
                # timeprev = timelst
                
    if args.dumptable:
        print (" -*-" * 13 + "Table dump (number of instances): " + " -*-" * 13)
        for d in dict(sorted(MyCANDev.CanData.items())):
            if (args.surpressincremental and d in skipdata):
                skipped += 1
                pass
            else:
                x = ""
                counts = 0
                instances = 0
                for i in dict(sorted(MyCANDev.CanData[d].deviceref.items())):
                    if i in negfilter:
                        skipped += 1
                    else:
                        x = x + format(i,"02X") + f":{MyCANDev.Devices[i].name:} ({str(MyCANDev.CanData[d].deviceref[i].count)})  "
                        counts += MyCANDev.CanData[d].deviceref[i].count
                        instances += 1
                if args.surpresssingles and (counts == 1 or (counts / instances) == 1) :
                    pass
                else:
                    if x != "":
                        if args.onlyssingles:
                            if (counts == 1 or (counts / instances) == 1) :
                                print (f" {d} {x}")
                        else:
                            print (f" {d} {x}")
        if args.surpressincremental:
            if skipped:
                print (f"*** Skipped {skipped} data elements")
    if args.crossdump:
        print (" -" * 22 + "Cross-Table ID to data (instances)" + " -" * 22)
        for id in dict(sorted(MyCANDev.Devices.items())):
            if not id in negfilter:
                dataline = []
                i = 0
                for d in dict(sorted(MyCANDev.CanData.items())):
                    if (id in MyCANDev.CanData[d].deviceref):
                        x = f"    {d} ({str(MyCANDev.CanData[d].deviceref[id].count)})"
                        dataline.append(x)
                        i += MyCANDev.CanData[d].deviceref[id].count
                print (format(id, "02X") + f" {MyCANDev.Devices[id].name: <15}   (total:{i})")
                x = ""
                for i in range(len(dataline)):
                    x = x + f"{dataline[i]: <26}" + "    "
                    if i % columns ==0:
                        print (x)
                        x = ""
                print (x)
    x = ""
    i = 0
    if args.dumpsumary or not args.dumptable:
        print (" -" * 25 + "Summary (instances)" + " -" * 25)
    for id in dict(sorted(MyCANDev.Devices.items())):
        if args.dumpsumary:
            x = x + format(id, "02X") + f" {MyCANDev.Devices[id].name: <15} ({MyCANDev.Devices[id].count: < 7})      " 
            i += 1
        else:
            if not args.dumptable:
                if id in devices:
                    x = x + format(id, "02X") + f" {devices[id]: <15}     " 
                    i += 1
        if ((i % columns ==0 and args.dumpsumary) or (i % dcolumns ==0 and not args.dumpsumary and not args.dumptable)):
            print (x)
            x = ""
    print (x)

def main():
    """Entrypoint.
    Get the config and run the app
    """
    parser = argparse.ArgumentParser()
    group = parser.add_mutually_exclusive_group()
    group.add_argument("-i", "--candump", dest="candumpFile",
                        help="filepath to candump file in pure log format (not ASC)")
    group.add_argument("-pipe", "--candumppipe", dest="canpipe", action='store_true', 
                        help="pipe candump in pure log format to this script")
    parser.add_argument("-f", "--filter", dest="filter", nargs='+', default="", 
                        help="limit to only this ids (from or to) as HEX such as: 1E  They can be space seperated multiple values")
    parser.add_argument("-n", "--negfilter", dest="negfilter", nargs='+', default="", 
                        help="remove this ids (from or to) as HEX such as: 1e  They can be space seperated multiple values")
    parser.add_argument("-t", "--table", dest="dumptable", action='store_true', default = False,
                        help="dump a table of the data value counts and ids that used them")
    parser.add_argument("-tf", "--tableonlyfrom", dest="dumptablefrom", action='store_true', default = False,
                        help="when building the a table of the data values only counts From (not To) and ids that used them")
    parser.add_argument("-ct", "--crosstable", dest="crossdump", action='store_true', default = False,
                        help="dump a table of id with count of data response")
    parser.add_argument("-qz", "--quietzero", dest="surpresszeros", action='store_true', default = False,
                        help="Skip lines which are all zero in the data (implies table)")
    parser.add_argument("-q1", "--quietone", dest="surpresssingles", action='store_true', default = False,
                        help="Skip data in the table where their is only one instance (implies table)")
    parser.add_argument("-qi", "--quietinc", dest="surpressincremental", action='store_true', default = False,
                        help="Skip data in the table if they appear as incremental (implies table)")
    parser.add_argument("-ch", "--change", dest="change", action='store_true', default = False,
                        help="Do not list the change information")
    parser.add_argument("-col1", "--nocolumns", dest="nocolumns", action='store_true', default = False,
                        help="Do not list the change information")
    
    parser.add_argument("-o1", "--onlyone", dest="onlyssingles", action='store_true', default = False,
                        help="Show the items in the table which only appear once (implies table)")

    parser.add_argument("-s", "--summary", dest="dumpsumary", action='store_true', default = False,
                        help="print a summary of the device types and the count (counting one each for From & To)")

    args = parser.parse_args()
    # devices = []
    #c = loadTheConfig("devices.yaml")
    #if "devices" in c:
    #    devices.extend(c["devices"])
    global MyCANDev
    MyCANDev = CanDevieState(args)
    for id in devices:
        MyCANDev.Devices[id] = CanDevice(id, devices[id])
    args.filter
    if args.filter:
        for a in range(len(args.filter)):
            args.filter[a] = args.filter[a].upper().zfill(2)
    if args.negfilter:
        for a in range(len(args.negfilter)):
            args.negfilter[a] = args.negfilter[a].upper().zfill(2)
    
    if args.canpipe:
        #signal.signal(signal.SIGINT, signal_handler)
        #signal.signal(signal.SIGTERM, signal_handler)
        parse_console(args)
    else:
        parse_file(args)    
    
    wrapup(args)

    
        
    
if __name__ == "__main__":
    main()