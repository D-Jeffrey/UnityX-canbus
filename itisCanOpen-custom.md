# CANopen Custom?

## WIP - Thinking out loud
After many hours of analysising and reading canbus dumps, I have figured a few things out

In the lippert X Unity (Grand Design) they use a `11-bit` address to identify the device which is talking (and talking too)

take the first 3 digits of the Arbitation id (Extended or otherwise) and you can determine the device it applies too by lookings at bit 0-11 bit. This is, using the first 3 bytes as `id RSH 3 AND 0x1F`

If the arbitration id is extend then is it a TO FROM (or maybe FROM TO)  The bits specific the to and from.  0x10 being the controler.

```
1A18502x = 0001 1010 0001 1000 0101 0000 0010
         From |----| |  |         |    | |  |
              Type   |--|         |    | |  |
                     ???  |------||    | |  |
                               To |----| |  |
                               Command   |--|

1D0      = 0001 1101 0000       
         From |----| |  |
              Type   |--|

```

Type | Meaning?
---  | ---
0 | Heartbeat - None
1 | Status

Command | Meaning?
--- | ---
1 | Status
2 | Set state
3 | Acknowledge?
4 | Operate/On/Go repeat ever 1/2 second while operating
5 | Stop?



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
RTR       =              1
Operand?  =                0001

8502 =  8502 for status
```
(ideas from https://en.wikipedia.org/wiki/CANopen)

## Device IDs (11-bits)
Grand Design 2022 Imagine 2670MK running a Lippert Unity X180T 

 ID  | Device | Statusing
 --- | --- | ---
 0x0 | Controler | Y
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
