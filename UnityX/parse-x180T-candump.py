import argparse
import os
import sys
import ruyaml as YAML

devices = {  0x0: 'Bus', 0x10: 'Controller',  0x1: 'Panel', 0xb: 'Outside Lights', 0xd: 'Ceiling Lights',
            0xF: 'Water Pump', 0x1C: 'Awning'}
cmds = {0:"--", 1:"stat", 2:"what", 3: "Answer", 4: "SET", 5: "DONE?"}
 
class CanDevice:
    def __init__(self, devid, name, ctype = None, data = None):
        self.deviceid = devid
        self.name = name
        self.ctype = ctype
        self.data = data

    def __repr__(self) -> str:
        return format(self.deviceid, "02X") + f": {self.name} Lasttype:{self.ctype}     DATA: {self.data}"
        
        

class CanDevieState:
    def __init__(self):
        self.Devices = dict()

        
def loadTheConfig(configFilePath):
    """ if configFilePath is a valid file load a yaml/json config file """
    if os.path.isfile(configFilePath):
        with open(configFilePath, "r") as content:
            yaml = YAML.YAML(typ='safe')
            return yaml.load(content.read())
        
def readTheCan(timemark, arbitrationId, canData):
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
    p = True
    status = "new"
    
    if len(arbitrationId)<=3:
        idBits = bin(arbid)[2:].zfill(16)    
        # print (f"bits = {idBits}")
        
    else:
        idBits = bin(arbid)[2:].zfill(32)
    
    # print (f"bits = {idBits}")
    
    can_fromI = int(idBits[7:12], 2)
    can_from = format(can_fromI, "02X")
    cantype = format(int(idBits[13:15], 2), "01X")
    if len(arbitrationId)>3:
        canwhat = format(int(idBits[22:28], 2), "02X")
        can_toI = int(idBits[16:21], 2)
        can_to = format(can_toI, "02X")
        cmd = format(int(idBits[29:32], 2), "01X")

    if can_fromI in devices:
        canfrom = devices[can_fromI]
        p = True
    else:
        canfrom = "?unknown " + str(can_from)
    if can_fromI in MyCANDev.Devices:
        if MyCANDev.Devices[can_fromI].data == canData:
            status = " data is same"
        else:
            if MyCANDev.Devices[can_fromI].data == None:
                status = "new"    
            else:
                status = f"changed (for {cmds[int(MyCANDev.Devices[can_fromI].ctype)]} was {MyCANDev.Devices[can_fromI].data})"
    if can_toI >= 0:
        if can_toI in devices:
            # print (f"found {can_to} as  {devices[can_toI]}")
            canto = devices[can_toI]
            p = True
        else:
            canto = "?unknown " + str(can_to)            
        if p: 
            print (f"{timemark:8.3f} from: {canfrom: <15} {cmds[int(cantype)]: <10} {canwhat} to: {canto: <15} {cmds[int(cmd)]: <10}   `{canData}` {status}` ")
    else:
        if p: 
            print (f"{timemark:8.3f} from: {canfrom: <15} {cmds[int(cantype)]: <10}                                     `{canData}` {status}")
    if can_fromI in MyCANDev.Devices:
        MyCANDev.Devices[can_fromI].ctype = cantype
        MyCANDev.Devices[can_fromI].data = canData
    else:
        # print ("Adding New {can_fromI}")
        MyCANDev.Devices[can_fromI] = CanDevice(can_fromI, canfrom, cantype, canData)

def parse_file(candumpFilePath):
    starttime = 0
    if os.path.isfile(candumpFilePath):
        with open(candumpFilePath, "r") as file:
            for line in file:
                line = line.strip().split(' ')
                if len(line) == 3:
                    line[0] = line[0].replace('(','').replace(')','')
                    timeval = float(line[0])
                    if starttime == 0:
                        starttime = timeval
                    timeval = timeval - starttime
                    (arbitrationid, data) = line[2].split('#')
                    readTheCan(timeval, arbitrationid, data)
                    
                else:
                    print(f"!!Bad:{line}")
    else:
        print(f"The candump path {candumpFilePath} does exist or cannot be read")

def main():
    """Entrypoint.
    Get the config and run the app
    """
    parser = argparse.ArgumentParser()
    parser.add_argument("-i", "--candump", dest="candumpFile",
                        help="filepath to candump file in pure log format (not ASC)")

    args = parser.parse_args()
    # devices = []
    #c = loadTheConfig("devices.yaml")
    #if "devices" in c:
    #    devices.extend(c["devices"])
    global MyCANDev
    MyCANDev = CanDevieState()
    for id in devices:
        MyCANDev.Devices[id] = CanDevice(id, devices[id])
    
    
    parse_file(args.candumpFile)    
    print (devices)
    # print (MyCANDev.Devices)
    
        
    
if __name__ == "__main__":
    main()