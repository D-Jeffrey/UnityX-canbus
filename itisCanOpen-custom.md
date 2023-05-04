# CANopen Custom?

## WIP - Thinking out loud
After many hours of analysising and reading canbus dumps, I have figured a few things out

In the lippert X Unity (Grand Design) they use a `11-bit` address to identify the device which is talking (and talking too)

take the first 3 digits of the Arbitation id (Extended or otherwise) and you can determine the device it applies too by lookings at bit 0-11 bit. This is, using the first 3 bytes as `id RSH 3 AND 0x1F`

bits `7:12` are `FROM`, bits `16:21` are `TO`

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

Still very early stages but decoding is proceeding...

Using UnityX.parse-x180T-candump, some of the result is as following:
```
 196.622 from: ?unknown 16     --                                             `81FF01700000` changed (for -- was 81FF01680000)
 196.652 from: Panel           what       04 to: Ceiling Lights  SET          `0004` changed (for Answer was )` 
 196.664 from: ?unknown 1E     stat                                           `C0FF00000000` changed (for stat was 00000000)
 ...
 197.146 from: ?unknown 1A     what                                           `C0FF00000000` changed (for -- was 00000000)
 197.151 from: ?unknown 17     what                                           `80FF00240000` changed (for what was 00000000)
 197.162 from: Panel           what       01 to: Outside Lights  stat         `002B` changed (for stat was 00A32C2100604211)` 
 197.162 from: Panel           what       04 to: Ceiling Lights  DONE         `0004` changed (for what was 002B)` 
 197.163 from: ?unknown 17     --         11 to: Controller      stat         `002B0D7600` changed (for what was 80FF00240000)` 
 197.163 from: ?unknown 1A     --         14 to: Controller      DONE         `000400` changed (for what was C0FF00000000)` 
 197.256 from: ?unknown 12     what                                           `80FF00010000` changed (for Answer was 00000000)
 ...
 226.636 from: ?unknown 15     what                                           `81FF00A40000` changed (for what was 81FF00A00000)
 226.682 from: Panel           what       04 to: Outside Lights  SET          `0004` changed (for what was 002B)` 
 226.687 from: ?unknown 15     what                                           `81FF00A80000` changed (for what was 81FF00A40000)
 ...
 227.178 from: ?unknown 1A     what                                           `C0FF00000000` changed (for -- was 00000000)
 227.192 from: Panel           what       04 to: Outside Lights  DONE         `0004` changed (for stat was 00A32C2100604211)` 
 227.193 from: ?unknown 17     --         14 to: Controller      DONE         `000400` changed (for what was 80FF00280000)` 
 227.209 from: ?unknown 17     what                                           `80FF00290000` changed (for -- was 000400)
 ...
 228.222 from: Panel           what       04 to: Outside Lights  SET          `0004` changed (for stat was 00A32C2100604211)` 
 ...
 257.812 from: Panel           what       34 to: Awning          SET          `0004` changed (for stat was 02140000001B3004)` 
 ...
 258.322 from: Panel           what       34 to: Awning          SET          `0004` changed (for Answer was )` 
 ...
 258.842 from: Panel           what       34 to: Awning          SET          `0004` changed (for Answer was )` 
 ...
 259.352 from: Panel           what       34 to: Awning          SET          `0004` changed (for Answer was )` 
 ...
 259.862 from: Panel           what       34 to: Awning          SET          `0004` changed (for stat was 00A32C2100604211)` 
 ...
 260.371 from: ?unknown 11     stat                                           `C0FF00000000` changed (for stat was 00000000)
 260.372 from: Panel           what       34 to: Awning          DONE         `0004`  data is same` 
 260.373 from: ?unknown 18     what       14 to: Controller      DONE         `000400` changed (for what was 00000000)` 
 260.375 from: Bus             what       31 to: ?unknown 05     stat         `002B` changed (for -- was 00B8012400000100)` 
 260.376 from: Outside Lights  what       11 to: Bus             stat         `002B0D7BB9` changed (for what was 002B0D467F)` 
 ...
 527.863 from: Panel           what       14 to: Water Pump      SET          `0004` changed (for stat was 00A32C2100604211)` 
 ...


```
