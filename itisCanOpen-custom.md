# CANopen Custom?

## WIP - Thinking out loud
After many hours of analysising and reading canbus dumps, I have figured a few things out

In the lippert X Unity (Grand Design) they use a `11-bit` address to identify the device which is talking (and talking too)

take the first 3 digits of the Arbitation id (Extended or otherwise) and you can determine the device it applies too by lookings at bit 0-11 bit. This is, using the first 3 bytes as `id RSH 3 AND 0x1F`

bits `4:8` are `FROM`, bits `12:16` are `TO`   bits `24:27` are `command`
bits `9:11` maybe a `command`, `12:23` are `?unknown?` 

If the arbitration id is extend then is it a TO FROM (or maybe FROM TO)  The bits specific the to and from.  0x10 being the controler.

```
           0123 4567 8901 2345 6789 0123 4567
1A18502x = 0001 1010 0001 1000 0101 0000 0010
| NMT/SDO  0XXX |----|| | |    ||      | |  |
         From   XXXX X| | |    ||      | |  |
              Type    XXX |    ||      | |  |
                      To  XXXX X|      | |  |
                             ???|------| |  |
                                Command  |--|


1D0      = 0001 1101 0000       
  NMT/SDO  XXXX-|  |----|| |
         From   XXXX X| |
              Type    XXX

```

NMT/SDO| Value | Meaning?
-----  |----   | ----
NMT    | 111   | Network management is used to initialize the network and to monitor nodes.
SDO Rx | 110   | Service Data Object. A CAN telegram with a protocol for communication with data in the object directory (typically parameter data).
SDO Tx | 101   | Service Data Object. A CAN telegram with a protocol for communication with data in the object directory (typically parameter data).
PDO    | 000   | Process Data Object. A CAN telegram for the transfer of process data (e.g. I/O data) (most data)
Type | Meaning?
---  | ---
0 | Heartbeat - None
1 | Status

Command | Meaning?
--- | ---
1 | Status
2 | what is your state
3 | Acknowledge?
4 | SET/Operate/On/Go repeat ever 1/2 second while operating
5 | Done/Stop?


If the Device ID is 10 some type of command with the associated data with the last two hex digits of a extend id are:

last 4 digits | meaning
--- | ---
8502 | Are you there 55, response is negative bits AA
8511  | device status
8542 | Prepare??
8543 | ready??
8544 | Operate which will repeat ever 1/2 second while operating
8545 | stop operation


### examples
```
Arbitation id : 01718502
0171      = 0000 0001 0111 0001
Device id = 0000 0001 011- ---- 
RTR?      =              1
Operand?  =                0001

8502 =  8502 for status
```
(ideas from https://en.wikipedia.org/wiki/CANopen)

## Device IDs (11-bits)
Grand Design 2022 Imagine 2670MK running a Lippert Unity X180T 

 ID  | Device | Statusing
 --- | --- | ---
 0x10 | Controller | Y
 0x1 | ? | Y
 0x2 | ? | N
 0x3 | ? | N
 0x4 | ? | N
 0x5 | ? | N
 0x6 | ? | N
 0x7 | ? | N 
 0x8 | ? | Y
 0x9 | ? | N
 0xA | ? | N
 0xB | Outside lights | Y
 0xC | ? | Y
 0xD | Ceiling Lights | Y
 0xE | ? | Y
 0xF | Water Pump | Y
 0x11 | ? | N
 0x14 | ? | Y
 0x18 | ? | N
 0x1C | Awning | Y
 0X1D | ? | N
 0x1E | ? | Y
 0x1F | ? | N
 

References: https://en.wikipedia.org/wiki/CAN_bus

## Results

Still very early stages but decoding is proceeding... See [candump_all.log-parse](https://github.com/D-Jeffrey/lippert-canbus/blob/main/candump_all.log-parse)

Using UnityX.parse-x180T-candump, some of the result is as following:
```
   0.495  S  BTController?   10-what                                                       00 
   0.509 N   Bus             00---                                                         FF0005D30F509F00 
   0.524     BTController?   10-what                                                       00 
   0.559  S  Bus             00---                                                         00 
...
   3.793     ?unknown 02     11-Answer                                                     00A32C2100002011 
   3.793     Panel           10-what          01110100-74  Water Pump      4-SET           0004 
   3.796     ?unknown 15     10-what                                                       00A32C2100603111 
...
   4.171     ?unknown 1E     11-Answer                                                     81FF018B0000 
   4.303     Panel           10-what          01110100-74  Water Pump      5-DONE?         0004 
   4.304     ?unknown 1B     10-what          11010100-D4  Controller      5-DONE?         000400 
...
         

```
