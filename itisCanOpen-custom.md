# CANopen Custom?

After many hours of analysising and reading canbus dumps, I have figured a few things out

In the lippert (Grand Design) they user a `11-bit` address to identify the device which is talking

If the Device ID is 10 then it is a SDO type command
with the last two hex digits of a extend id are

last 4 digits | meaning
--- | ---
8502 | Are upi there 55, response is negative bits AA
8511  | device status
8542 | Prepare??
8543 | ready??
8544 | Operate which will repeat ever 1/2 second while operating
8545 | stop operation

### examples
```
Arbitation id : 01718502
0171 = 0000 0001 0111 0001
Device id =   01 011 
RTR       =         1
Operand?  =           0001

8502 =  8502 for status

```
(ideas from https://en.wikipedia.org/wiki/CANopen)

## Device IDs (11-bits)
Grand Design 2022 Imagine 2670MK running a Lippert Unity X180T 

 ID  | Device | Statusing
 --- | --- | ---
 0x8 | ? | Y
 0x9 | ? | N
 0xA | ? | N
 0xB | Outside lights | Y
 0xC | ? | Y
 0xD | Ceiling Lights | Y
 0xE | ? | Y
 0xF | Water Pump | Y
 0x1C | Awning | Y
 0X1D | ? | N
 0x1E | ? | N
 0x1F | ? | N
 0X21 | ? | Y
 0X30 | ? | ?
 0x34 | ? | Y
 0x38 | ? | Y
 0x58 | ? | Y
 0x5E | ? | Y
 0x62 | ? | Y

