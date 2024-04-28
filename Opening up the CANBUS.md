# Opening up the CANBUS… any guidance?

I have a GD 2022 Imagine 2670MK and I’m working on trying read/decode the CANbus and get inside it.  I have a goal of trying to get everything into Home Assistant.  Long term goal is to predict when I need to dump the black/gray tanks before they get too full for another day, add some additional lights, connect the Stereo, Sound bar, TV, get better reading from the battery, maybe figure out how to read the Solar charge (which does not have any smarts) and put everything onto one control console.
Then I got started and found many ways I could not move forward.  First, I don’t have the WiFiGateway to the OneControl that others have.  It is pure X180T controller which means the OneControl App via Bluetooth (yuck), I have the CANbus which drives the touch display.  And as @bob has noted, the CANbus is proprietary and is not RV-C.  But that seems to be my old way forward.  I’m a code breaker, so let’s see what we can decode.

The X180T has the marking that is as [EP-WROOM-32E esp32-wroom-32e_esp32-wroom-32ue_datasheet_en.pdf](https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32e_esp32-wroom-32ue_datasheet_en.pdf)
- 2.4 GHz Wi-Fi + Bluetooth® + Bluetooth LE module Built around ESP32 series of SoCs, Xtensa® dual-core 32¬bit LX6 microprocessor 4/8/16 MB flash available 26 GPIOs, rich set of peripherals On¬board PCB antenna or external antenna connector
-	Bluetooth is 4.2
- 	802.11b/g/n
- 	compatible with ISO 11898-1, i.e. CAN Specification 2.0

What I don’t understand is that Grand Design thru Winnebago parent company is a member of RV-C, so why would they stand there and ignore the spec when they are so in favour of engaging with their customers on other topics.  If they are not going to follow a standard then they could at least release their custom DBC or 

Here is what I have found, anyone else have any guidance or suggestions would be welcome, otherwise the journey is going to be load and tedious. 

Assumption: CANbus is 250kps (Confirmed)

I think the Arbitration id is a 12-bit value, with the first 7-bit being the device, then maybe 1 bit RTR and 4 bit command

In the extend Arbitration id, I see the device in bit 13-20 following by an operation command in the last 6 bit (0x44 is Operate, 0x45 is stop)

In my trailer so far I have mapped Outside Lights = 0xB, Ceiling Lights = 0xD, Water Pump = 0xF, Awning = 0x1C
