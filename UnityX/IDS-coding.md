class DEVICE_TYPE
    {
         byte UNKNOWN = 0;
         byte GENERIC = 1;
         byte TABLET = 2;                       "Tablet"
         byte LATCHING_RELAY = 3;               "Latching Relay (type 1)"
         byte MOMENTARY_RELAY = 4;              "Momentary Relay (type 1)"
         byte LATCHING_H_BRIDGE = 5;            "Latching H-Bridge (type 1)"
         byte MOMENTARY_H_BRIDGE = 6;           "Momentary H-Bridge (type 1)"
         byte LEVELER_TYPE_1 = 7;               "Leveler Type 1"
         byte SWITCH = 8;                       "Switch"
         byte TOUCHSCREEN_SWITCH = 9;           "Touchscreen Switch"
         byte TANK_SENSOR = 10;                 "Tank Sensor"
         byte LEVELER_TYPE_2 = 11;              "Leveler Type 2"
         byte HOUR_METER = 12;                  "Hour Meter"
         byte RGB_LIGHT = 13;                   "RGB Light"
         byte REAL_TIME_CLOCK = 14;             "Clock"
         byte IR_REMOTE_CONTROL = 15;           "Infrared Remote Control"
         byte HVAC_CONTROL = 16;                "HVAC Control"
         byte LEVELER_TYPE_3 = 17;              "Leveler Type 3"
         byte CAN_TO_ETHERNET_GATEWAY = 18;     "CAN to Ethernet Gateway"
         byte IN_TRANSIT_POWER_DISCONNECT = 19; "In Transit Power Disconnect"
         byte DIMMABLE_LIGHT = 20;              "Dimmable Light"
         byte ONECONTROL_TOUCH_PAD = 21;        "OneControl Touch Pad"
         byte ANDROID_MOBILE_DEVICE = 22;       "Android Mobile Device"
         byte IOS_MOBILE_DEVICE = 23;           "iOS Mobile Device"
         byte GENERATOR_GENIE = 24;             "Generator Genie"
         byte TEMPERATURE_SENSOR = 25;          "Temperature Sensor"
         byte AC_POWER_MONITOR = 26;            "AC Power Monitor"
         byte DC_POWER_MONITOR = 27;            "DC Power Monitor"
         byte SETEC_POWER_MANAGER = 28;         "Power Manager"
         byte ONECONTROL_CLOUD_GATEWAY = 29;    "OneControl Cloud Gateway"
         byte LATCHING_RELAY_TYPE_2 = 30;       "Latching Relay (type 2)"
         byte MOMENTARY_RELAY_TYPE_2 = 31;      "Momentary Relay (type 2)"
         byte LATCHING_H_BRIDGE_TYPE_2 = 32;    "Latching H-Bridge (type 2)"
         byte MOMENTARY_H_BRIDGE_TYPE_2 = 33;   "Momentary H-Bridge (type 2)"
         byte ONECONTROL_APPLICATION = 34;      "OneControl App"
         byte CONFIGURATOR_APPLICATION = 35;    "Configurator App"
         byte BLUETOOTH_GATEWAY = 36;           "Bluetooth Gateway"
         byte MAXX_FAN = 37;                    "MaxxFan"
         byte RAIN_SENSOR = 38;                 "Rain Sensor"
}

        FUNCTION_CLASS UNKNOWN = new FUNCTION_CLASS(nameof(UNKNOWN), ICON.UNKNOWN, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)0
            });
        FUNCTION_CLASS MISCELLANEOUS = new FUNCTION_CLASS("Miscellaneous", ICON.UNKNOWN, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)0
            });
        FUNCTION_CLASS AWNING = new FUNCTION_CLASS("Awning", ICON.AWNING, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS BED_LIFT = new FUNCTION_CLASS("Bed Lift", ICON.BED_LIFT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS LOCK = new FUNCTION_CLASS("Lock", ICON.LOCK, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS ELECTRIC_WATER_HEATER = new FUNCTION_CLASS("Electric Water Heater", ICON.ELECTRIC_WATER_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS GAS_WATER_HEATER = new FUNCTION_CLASS("Gas Water Heater", ICON.GAS_WATER_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS GENERATOR = new FUNCTION_CLASS("Generator", ICON.GENERATOR, new DEVICE_TYPE[4]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2,
              (DEVICE_TYPE)(byte)24
            });
        FUNCTION_CLASS LANDING_GEAR = new FUNCTION_CLASS("Landing Gear", ICON.LANDING_GEAR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS LEVELER = new FUNCTION_CLASS("Leveler", ICON.LEVELER, new DEVICE_TYPE[2]
            {
              (DEVICE_TYPE)(byte)7, # LEVELER_TYPE_1
              (DEVICE_TYPE)(byte)17 # LEVELER_TYPE_3
            });
        FUNCTION_CLASS LIGHT = new FUNCTION_CLASS("Light", ICON.LIGHT, new DEVICE_TYPE[5]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30, # LATCHING_RELAY_TYPE_2
              (DEVICE_TYPE)(byte)13, # RGB_LIGHT
              (DEVICE_TYPE)(byte)20 # DIMMABLE_LIGHT
            });
        FUNCTION_CLASS PUMP = new FUNCTION_CLASS("Pump", ICON.WATER_PUMP, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS SLIDE = new FUNCTION_CLASS("Slide", ICON.SLIDE, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS TANK = new FUNCTION_CLASS("Tank", ICON.TANK_SENSOR, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)10 # TANK_SENSOR
            });
        FUNCTION_CLASS TV_LIFT = new FUNCTION_CLASS("TV Lift", ICON.TV_LIFT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS VENT = new FUNCTION_CLASS("Vent", ICON.VENT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS VENT_COVER = new FUNCTION_CLASS("Vent Cover", ICON.VENT_COVER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS WATER_TANK_HEATER = new FUNCTION_CLASS("Water Tank Heater", ICON.WATER_TANK_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS LEVELER_2 = new FUNCTION_CLASS("Leveler", ICON.JACKS, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)11 # LEVELER_TYPE_2
            });
        FUNCTION_CLASS HOUR_METER = new FUNCTION_CLASS("Hour Meter", ICON.HOUR_METER, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)12 # HOUR_METER
            });
        FUNCTION_CLASS REAL_TIME_CLOCK = new FUNCTION_CLASS("Clock", ICON.CLOCK, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)14
            });
        FUNCTION_CLASS IR_REMOTE_CONTROL = new FUNCTION_CLASS("Infrared Remote Control", ICON.IR_REMOTE_CONTROL, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)15
            });
        FUNCTION_CLASS HVAC_CONTROL = new FUNCTION_CLASS("HVAC Control", ICON.HVAC_CONTROL, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)16
            });
        FUNCTION_CLASS LP_TANK_VALVE = new FUNCTION_CLASS("LP Tank Valve", ICON.LP_TANK_VALVE, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });
        FUNCTION_CLASS NETWORK_BRIDGE = new FUNCTION_CLASS("Network Bridge", ICON.NETWORK_BRIDGE, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)18
            });
        FUNCTION_CLASS IPDM = new FUNCTION_CLASS("In Transit Power Disconnect", ICON.IPDM, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)19
            });
        FUNCTION_CLASS STABILIZER = new FUNCTION_CLASS("Stabilizer", ICON.STABILIZER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS TEMPERATURE_SENSOR = new FUNCTION_CLASS("Temperature Sensor", ICON.THERMOMETER, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)25
            });
        FUNCTION_CLASS POWER = new FUNCTION_CLASS("Power", ICON.POWER_MONITOR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)26, # TEMPERATURE_SENSOR
              (DEVICE_TYPE)(byte)27, # AC_POWER_MONITOR
              (DEVICE_TYPE)(byte)28  # DC_POWER_MONITOR
            });
        FUNCTION_CLASS DOOR = new FUNCTION_CLASS("Door", ICON.DOOR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)6, # MOMENTARY_H_BRIDGE
              (DEVICE_TYPE)(byte)33 # MOMENTARY_H_BRIDGE_TYPE_2
            });
        FUNCTION_CLASS FAN = new FUNCTION_CLASS("Fan", ICON.FAN, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8, # Switch
              (DEVICE_TYPE)(byte)3, # LATCHING_RELAY
              (DEVICE_TYPE)(byte)30 # LATCHING_RELAY_TYPE_2
            });



class FUNCTION_NAME {
        DIAGNOSTIC_TOOL = 1;
        MYRV_TABLET = 2;
        GAS_WATER_HEATER = 3;
        ELECTRIC_WATER_HEATER = 4;
        WATER_PUMP = 5;
        BATH_VENT = 6;
        LIGHT = 7;
        FLOOD_LIGHT = 8;
        WORK_LIGHT = 9;
        FRONT_BEDROOM_CEILING_LIGHT = 10;
        FRONT_BEDROOM_OVERHEAD_LIGHT = 11;
        FRONT_BEDROOM_VANITY_LIGHT = 12;
        FRONT_BEDROOM_SCONCE_LIGHT = 13;
        FRONT_BEDROOM_LOFT_LIGHT = 14;
        REAR_BEDROOM_CEILING_LIGHT = 15;
        REAR_BEDROOM_OVERHEAD_LIGHT = 16;
        REAR_BEDROOM_VANITY_LIGHT = 17;
        REAR_BEDROOM_SCONCE_LIGHT = 18;
        REAR_BEDROOM_LOFT_LIGHT = 19;
        LOFT_LIGHT = 20;
        FRONT_HALL_LIGHT = 21;
        REAR_HALL_LIGHT = 22;
        FRONT_BATHROOM_LIGHT = 23;
        FRONT_BATHROOM_VANITY_LIGHT = 24;
        FRONT_BATHROOM_CEILING_LIGHT = 25;
        FRONT_BATHROOM_SHOWER_LIGHT = 26;
        FRONT_BATHROOM_SCONCE_LIGHT = 27;
        REAR_BATHROOM_VANITY_LIGHT = 28;
        REAR_BATHROOM_CEILING_LIGHT = 29;
        REAR_BATHROOM_SHOWER_LIGHT = 30;
        REAR_BATHROOM_SCONCE_LIGHT = 31;
        KITCHEN_CEILING_LIGHT = 32;
        KITCHEN_SCONCE_LIGHT = 33;
        KITCHEN_PENDANTS_LIGHT = 34;
        KITCHEN_RANGE_LIGHT = 35;
        KITCHEN_COUNTER_LIGHT = 36;
        KITCHEN_BAR_LIGHT = 37;
        KITCHEN_ISLAND_LIGHT = 38;
        KITCHEN_CHANDELIER_LIGHT = 39;
        KITCHEN_UNDER_CABINET_LIGHT = 40;
        LIVING_ROOM_CEILING_LIGHT = 41;
        LIVING_ROOM_SCONCE_LIGHT = 42;
        LIVING_ROOM_PENDANTS_LIGHT = 43;
        LIVING_ROOM_BAR_LIGHT = 44;
        GARAGE_CEILING_LIGHT = 45;
        GARAGE_CABINET_LIGHT = 46;
        SECURITY_LIGHT = 47;
        PORCH_LIGHT = 48;
        AWNING_LIGHT = 49;
        BATHROOM_LIGHT = 50;
        BATHROOM_VANITY_LIGHT = 51;
        BATHROOM_CEILING_LIGHT = 52;
        BATHROOM_SHOWER_LIGHT = 53;
        BATHROOM_SCONCE_LIGHT = 54;
        HALL_LIGHT = 55;
        BUNK_ROOM_LIGHT = 56;
        BEDROOM_LIGHT = 57;
        LIVING_ROOM_LIGHT = 58;
        KITCHEN_LIGHT = 59;
        LOUNGE_LIGHT = 60;
        CEILING_LIGHT = 61;
        ENTRY_LIGHT = 62;
        BED_CEILING_LIGHT = 63;
        BEDROOM_LAV_LIGHT = 64;
        SHOWER_LIGHT = 65;
        GALLEY_LIGHT = 66;
        FRESH_TANK = 67;
        GREY_TANK = 68;
        BLACK_TANK = 69;
        FUEL_TANK = 70;
        GENERATOR_FUEL_TANK = 71;
        AUXILLIARY_FUEL_TANK = 72;
        FRONT_BATH_GREY_TANK = 73;
        FRONT_BATH_FRESH_TANK = 74;
        FRONT_BATH_BLACK_TANK = 75;
        REAR_BATH_GREY_TANK = 76;
        REAR_BATH_FRESH_TANK = 77;
        REAR_BATH_BLACK_TANK = 78;
        MAIN_BATH_GREY_TANK = 79;
        MAIN_BATH_FRESH_TANK = 80;
        MAIN_BATH_BLACK_TANK = 81;
        GALLEY_GREY_TANK = 82;
        GALLEY_FRESH_TANK = 83;
        GALLEY_BLACK_TANK = 84;
        KITCHEN_GREY_TANK = 85;
        KITCHEN_FRESH_TANK = 86;
        KITCHEN_BLACK_TANK = 87;
        LANDING_GEAR = 88;
        FRONT_STABILIZER = 89;
        REAR_STABILIZER = 90;
        TV_LIFT = 91;
        BED_LIFT = 92;
        BATH_VENT_COVER = 93;
        DOOR_LOCK = 94;
        GENERATOR = 95;
        SLIDE = 96;
        MAIN_SLIDE = 97;
        BEDROOM_SLIDE = 98;
        GALLEY_SLIDE = 99;
        KITCHEN_SLIDE = 100;
        CLOSET_SLIDE = 101;
        OPTIONAL_SLIDE = 102;
        DOOR_SIDE_SLIDE = 103;
        OFF_DOOR_SLIDE = 104;
        AWNING = 105;
        LEVEL_UP_LEVELER = 106;
        WATER_TANK_HEATER = 107;
        MYRV_TOUCHSCREEN = 108;
        LEVELER = 109;
        VENT_COVER = 110;
        FRONT_BEDROOM_VENT_COVER = 111;
        BEDROOM_VENT_COVER = 112;
        FRONT_BATHROOM_VENT_COVER = 113;
        MAIN_BATHROOM_VENT_COVER = 114;
        REAR_BATHROOM_VENT_COVER = 115;
        KITCHEN_VENT_COVER = 116;
        LIVING_ROOM_VENT_COVER = 117;
        FOUR_LEG_TRUCK_CAMPLER_LEVELER = 118;
        SIX_LEG_HALL_EFFECT_EJ_LEVELER = 119;
        PATIO_LIGHT = 120;
        HUTCH_LIGHT = 121;
        SCARE_LIGHT = 122;
        DINETTE_LIGHT = 123;
        BAR_LIGHT = 124;
        OVERHEAD_LIGHT = 125;
        OVERHEAD_BAR_LIGHT = 126;
        FOYER_LIGHT = 127;
        RAMP_DOOR_LIGHT = 128;
        ENTERTAINMENT_LIGHT = 129;
        REAR_ENTRY_DOOR_LIGHT = 130;
        CEILING_FAN_LIGHT = 131;
        OVERHEAD_FAN_LIGHT = 132;
        BUNK_SLIDE = 133;
        BED_SLIDE = 134;
        WARDROBE_SLIDE = 135;
        ENTERTAINMENT_SLIDE = 136;
        SOFA_SLIDE = 137;
        PATIO_AWNING = 138;
        REAR_AWNING = 139;
        SIDE_AWNING = 140;
        JACKS = 141;
        LEVELER_2 = 142;
        EXTERIOR_LIGHT = 143;
        LOWER_ACCENT_LIGHT = 144;
        UPPER_ACCENT_LIGHT = 145;
        DS_SECURITY_LIGHT = 146;
        ODS_SECURITY_LIGHT = 147;
        SLIDE_IN_SLIDE = 148;
        HITCH_LIGHT = 149;
        CLOCK = 150;
        TV = 151;
        DVD = 152;
        BLU_RAY = 153;
        VCR = 154;
        PVR = 155;
        CABLE = 156;
        SATELLITE = 157;
        AUDIO = 158;
        CD_PLAYER = 159;
        TUNER = 160;
        RADIO = 161;
        SPEAKERS = 162;
        GAME = 163;
        CLOCK_RADIO = 164;
        AUX = 165;
        CLIMATE_ZONE = 166;
        FIREPLACE = 167;
        THERMOSTAT = 168;
        FRONT_CAP_LIGHT = 169;
        STEP_LIGHT = 170;
        DS_FLOOD_LIGHT = 171;
        INTERIOR_LIGHT = 172;
        FRESH_TANK_HEATER = 173;
        GREY_TANK_HEATER = 174;
        BLACK_TANK_HEATER = 175;
        LP_TANK = 176;
        STALL_LIGHT = 177;
        MAIN_LIGHT = 178;
        BATH_LIGHT = 179;
        BUNK_LIGHT = 180;
        BED_LIGHT = 181;
        CABINET_LIGHT = 182;
        NETWORK_BRIDGE = 183;
        ETHERNET_BRIDGE = 184;
        WIFI_BRIDGE = 185;
        IN_TRANSIT_POWER_DISCONNECT = 186;
        LEVEL_UP_UNITY = 187;
        TT_LEVELER = 188;
        TRAVEL_TRAILER_LEVELER = 189;
        FIFTH_WHEEL_LEVELER = 190;
        FUEL_PUMP = 191;
        MAIN_CLIMATE_ZONE = 192;
        BEDROOM_CLIMATE_ZONE = 193;
        GARAGE_CLIMATE_ZONE = 194;
        COMPARTMENT_LIGHT = 195;
        TRUNK_LIGHT = 196;
        BAR_TV = 197;
        BATHROOM_TV = 198;
        BEDROOM_TV = 199;
        BUNK_ROOM_TV = 200;
        EXTERIOR_TV = 201;
        FRONT_BATHROOM_TV = 202;
        FRONT_BEDROOM_TV = 203;
        GARAGE_TV = 204;
        KITCHEN_TV = 205;
        LIVING_ROOM_TV = 206;
        LOFT_TV = 207;
        LOUNGE_TV = 208;
        MAIN_TV = 209;
        PATIO_TV = 210;
        REAR_BATHROOM_TV = 211;
        REAR_BEDROOM_TV = 212;
        BATHROOM_DOOR_LOCK = 213;
        BEDROOM_DOOR_LOCK = 214;
        FRONT_DOOR_LOCK = 215;
        GARAGE_DOOR_LOCK = 216;
        MAIN_DOOR_LOCK = 217;
        PATIO_DOOR_LOCK = 218;
        REAR_DOOR_LOCK = 219;
        ACCENT_LIGHT = 220;
        BATHROOM_ACCENT_LIGHT = 221;
        BEDROOM_ACCENT_LIGHT = 222;
        FRONT_BEDROOM_ACCENT_LIGHT = 223;
        GARAGE_ACCENT_LIGHT = 224;
        KITCHEN_ACCENT_LIGHT = 225;
        PATIO_ACCENT_LIGHT = 226;
        REAR_BEDROOM_ACCENT_LIGHT = 227;
        BEDROOM_RADIO = 228;
        BUNK_ROOM_RADIO = 229;
        EXTERIOR_RADIO = 230;
        FRONT_BEDROOM_RADIO = 231;
        GARAGE_RADIO = 232;
        KITCHEN_RADIO = 233;
        LIVING_ROOM_RADIO = 234;
        LOFT_RADIO = 235;
        PATIO_RADIO = 236;
        REAR_BEDROOM_RADIO = 237;
        BEDROOM_ENTERTAINMENT_SYSTEM = 238;
        BUNK_ROOM_ENTERTAINMENT_SYSTEM = 239;
        ENTERTAINMENT_SYSTEM = 240;
        EXTERIOR_ENTERTAINMENT_SYSTEM = 241;
        FRONT_BEDROOM_ENTERTAINMENT_SYSTEM = 242;
        GARAGE_ENTERTAINMENT_SYSTEM = 243;
        KITCHEN_ENTERTAINMENT_SYSTEM = 244;
        LIVING_ROOM_ENTERTAINMENT_SYSTEM = 245;
        LOFT_ENTERTAINMENT_SYSTEM = 246;
        MAIN_ENTERTAINMENT_SYSTEM = 247;
        PATIO_ENTERTAINMENT_SYSTEM = 248;
        REAR_BEDROOM_ENTERTAINMENT_SYSTEM = 249;
        LEFT_STABILIZER = 250;
        RIGHT_STABILIZER = 251;
        STABILIZER = 252;
        SOLAR = 253;
        SOLAR_POWER = 254;
        BATTERY = 255;
        MAIN_BATTERY = 256;
        AUX_BATTERY = 257;
        SHORE_POWER = 258;
        AC_POWER = 259;
        AC_MAINS = 260;
        AUX_POWER = 261;
        OUTPUTS = 262;
        RAMP_DOOR = 263;
        FAN = 264;
        BATH_FAN = 265;
        REAR_FAN = 266;
        FRONT_FAN = 267;
        KITCHEN_FAN = 268;
        CEILING_FAN = 269;
        TANK_HEATER = 270;
        FRONT_CEILING_LIGHT = 271;
        REAR_CEILING_LIGHT = 272;
        CARGO_LIGHT = 273;
        FASCIA_LIGHT = 274;
        SLIDE_CEILING_LIGHT = 275;
        SLIDE_OVERHEAD_LIGHT = 276;
        DECOR_LIGHT = 277;
        READING_LIGHT = 278;
        FRONT_READING_LIGHT = 279;
        REAR_READING_LIGHT = 280;
        LIVING_ROOM_CLIMATE_ZONE = 281;
        FRONT_LIVING_ROOM_CLIMATE_ZONE = 282;
        REAR_LIVING_ROOM_CLIMATE_ZONE = 283;
        FRONT_BEDROOM_CLIMATE_ZONE = 284;
        REAR_BEDROOM_CLIMATE_ZONE = 285;
        BED_TILT = 286;
        FRONT_BED_TILT = 287;
        REAR_BED_TILT = 288;
        MENS_LIGHT = 289;
        WOMENS_LIGHT = 290;
        SERVICE_LIGHT = 291;
        ODS_FLOOD_LIGHT = 292;
        UNDERBODY_ACCENT_LIGHT = 293;
        SPEAKER_LIGHT = 294;

}

    float nearZero = 1.52587890625E-05;

    public sealed class PID
    {
        
        PID UNKNOWN = new PID((ushort)0, nameof(UNKNOWN), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        PID PRODUCTION_BYTES = new PID((ushort)1, nameof(PRODUCTION_BYTES), new PID.Formatter(PID.FORMAT.UINT48, "${0:X8}"));
        PID CAN_ADAPTER_MAC = new PID((ushort)2, nameof(CAN_ADAPTER_MAC), new PID.Formatter(PID.FORMAT.MAC6));
        PID IDS_CAN_CIRCUIT_ID = new PID((ushort)3, nameof(IDS_CAN_CIRCUIT_ID), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        PID IDS_CAN_FUNCTION_NAME = new PID((ushort)4, nameof(IDS_CAN_FUNCTION_NAME), new PID.Formatter(PID.FORMAT.UINT16, "${0:X4}"));
        PID IDS_CAN_FUNCTION_INSTANCE = new PID((ushort)5, nameof(IDS_CAN_FUNCTION_INSTANCE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID IDS_CAN_NUM_DEVICES_ON_NETWORK = new PID((ushort)6, nameof(IDS_CAN_NUM_DEVICES_ON_NETWORK), new PID.Formatter(PID.FORMAT.UINT48));
        PID IDS_CAN_MAX_NETWORK_HEARTBEAT_TIME = new PID((ushort)7, nameof(IDS_CAN_MAX_NETWORK_HEARTBEAT_TIME), new PID.Formatter(PID.FORMAT.UINT48));
        PID SERIAL_NUMBER = new PID((ushort)8, nameof(SERIAL_NUMBER), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        PID CAN_BYTES_TX = new PID((ushort)9, nameof(CAN_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_BYTES_RX = new PID((ushort)10, nameof(CAN_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_MESSAGES_TX = new PID((ushort)11, nameof(CAN_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_MESSAGES_RX = new PID((ushort)12, nameof(CAN_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)13, nameof(CAN_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)14, nameof(CAN_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_TX_MAX_BYTES_QUEUED = new PID((ushort)15, nameof(CAN_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID CAN_RX_MAX_BYTES_QUEUED = new PID((ushort)16, nameof(CAN_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_BYTES_TX = new PID((ushort)17, nameof(UART_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_BYTES_RX = new PID((ushort)18, nameof(UART_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_MESSAGES_TX = new PID((ushort)19, nameof(UART_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_MESSAGES_RX = new PID((ushort)20, nameof(UART_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)21, nameof(UART_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)22, nameof(UART_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_TX_MAX_BYTES_QUEUED = new PID((ushort)23, nameof(UART_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID UART_RX_MAX_BYTES_QUEUED = new PID((ushort)24, nameof(UART_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_BYTES_TX = new PID((ushort)25, nameof(WIFI_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_BYTES_RX = new PID((ushort)26, nameof(WIFI_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_MESSAGES_TX = new PID((ushort)27, nameof(WIFI_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_MESSAGES_RX = new PID((ushort)28, nameof(WIFI_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)29, nameof(WIFI_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)30, nameof(WIFI_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_TX_MAX_BYTES_QUEUED = new PID((ushort)31, nameof(WIFI_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_RX_MAX_BYTES_QUEUED = new PID((ushort)32, nameof(WIFI_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID WIFI_RSSI = new PID((ushort)33, nameof(WIFI_RSSI), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} dBm", nearZero));
        PID RF_BYTES_TX = new PID((ushort)34, nameof(RF_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_BYTES_RX = new PID((ushort)35, nameof(RF_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_MESSAGES_TX = new PID((ushort)36, nameof(RF_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_MESSAGES_RX = new PID((ushort)37, nameof(RF_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)38, nameof(RF_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)39, nameof(RF_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_TX_MAX_BYTES_QUEUED = new PID((ushort)40, nameof(RF_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_RX_MAX_BYTES_QUEUED = new PID((ushort)41, nameof(RF_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID RF_RSSI = new PID((ushort)42, nameof(RF_RSSI), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} dBm", nearZero));
        PID BATTERY_VOLTAGE = new PID((ushort)43, nameof(BATTERY_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", nearZero));
        PID REGULATOR_VOLTAGE = new PID((ushort)44, nameof(REGULATOR_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", nearZero));
        PID NUM_TILT_SENSOR_AXES = new PID((ushort)45, nameof(NUM_TILT_SENSOR_AXES), new PID.Formatter(PID.FORMAT.UINT32, "{0:#,###0}"));
        PID TILT_AXIS_1_ANGLE = new PID((ushort)46, nameof(TILT_AXIS_1_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_2_ANGLE = new PID((ushort)47, nameof(TILT_AXIS_2_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_3_ANGLE = new PID((ushort)48, nameof(TILT_AXIS_3_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_4_ANGLE = new PID((ushort)49, nameof(TILT_AXIS_4_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_5_ANGLE = new PID((ushort)50, nameof(TILT_AXIS_5_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_6_ANGLE = new PID((ushort)51, nameof(TILT_AXIS_6_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_7_ANGLE = new PID((ushort)52, nameof(TILT_AXIS_7_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID TILT_AXIS_8_ANGLE = new PID((ushort)53, nameof(TILT_AXIS_8_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}°", nearZero));
        PID IDS_CAN_FIXED_ADDRESS = new PID((ushort)54, nameof(IDS_CAN_FIXED_ADDRESS), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID FUSE_SETTING_1 = new PID((ushort)55, nameof(FUSE_SETTING_1), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_2 = new PID((ushort)56, nameof(FUSE_SETTING_2), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_3 = new PID((ushort)57, nameof(FUSE_SETTING_3), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_4 = new PID((ushort)58, nameof(FUSE_SETTING_4), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_5 = new PID((ushort)59, nameof(FUSE_SETTING_5), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_6 = new PID((ushort)60, nameof(FUSE_SETTING_6), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_7 = new PID((ushort)61, nameof(FUSE_SETTING_7), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_8 = new PID((ushort)62, nameof(FUSE_SETTING_8), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_9 = new PID((ushort)63, nameof(FUSE_SETTING_9), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_10 = new PID((ushort)64, nameof(FUSE_SETTING_10), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_11 = new PID((ushort)65, nameof(FUSE_SETTING_11), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_12 = new PID((ushort)66, nameof(FUSE_SETTING_12), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_13 = new PID((ushort)67, nameof(FUSE_SETTING_13), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_14 = new PID((ushort)68, nameof(FUSE_SETTING_14), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_15 = new PID((ushort)69, nameof(FUSE_SETTING_15), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID FUSE_SETTING_16 = new PID((ushort)70, nameof(FUSE_SETTING_16), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_1 = new PID((ushort)71, nameof(MANUFACTURING_PID_1), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_2 = new PID((ushort)72, nameof(MANUFACTURING_PID_2), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_3 = new PID((ushort)73, nameof(MANUFACTURING_PID_3), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_4 = new PID((ushort)74, nameof(MANUFACTURING_PID_4), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_5 = new PID((ushort)75, nameof(MANUFACTURING_PID_5), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_6 = new PID((ushort)76, nameof(MANUFACTURING_PID_6), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_7 = new PID((ushort)77, nameof(MANUFACTURING_PID_7), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_8 = new PID((ushort)78, nameof(MANUFACTURING_PID_8), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_9 = new PID((ushort)79, nameof(MANUFACTURING_PID_9), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_10 = new PID((ushort)80, nameof(MANUFACTURING_PID_10), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_11 = new PID((ushort)81, nameof(MANUFACTURING_PID_11), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_12 = new PID((ushort)82, nameof(MANUFACTURING_PID_12), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_13 = new PID((ushort)83, nameof(MANUFACTURING_PID_13), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_14 = new PID((ushort)84, nameof(MANUFACTURING_PID_14), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_15 = new PID((ushort)85, nameof(MANUFACTURING_PID_15), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_16 = new PID((ushort)86, nameof(MANUFACTURING_PID_16), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_17 = new PID((ushort)87, nameof(MANUFACTURING_PID_17), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_18 = new PID((ushort)88, nameof(MANUFACTURING_PID_18), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_19 = new PID((ushort)89, nameof(MANUFACTURING_PID_19), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_20 = new PID((ushort)90, nameof(MANUFACTURING_PID_20), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_21 = new PID((ushort)91, nameof(MANUFACTURING_PID_21), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_22 = new PID((ushort)92, nameof(MANUFACTURING_PID_22), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_23 = new PID((ushort)93, nameof(MANUFACTURING_PID_23), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_24 = new PID((ushort)94, nameof(MANUFACTURING_PID_24), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_25 = new PID((ushort)95, nameof(MANUFACTURING_PID_25), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_26 = new PID((ushort)96, nameof(MANUFACTURING_PID_26), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_27 = new PID((ushort)97, nameof(MANUFACTURING_PID_27), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_28 = new PID((ushort)98, nameof(MANUFACTURING_PID_28), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_29 = new PID((ushort)99, nameof(MANUFACTURING_PID_29), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_30 = new PID((ushort)100, nameof(MANUFACTURING_PID_30), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_31 = new PID((ushort)101, nameof(MANUFACTURING_PID_31), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID MANUFACTURING_PID_32 = new PID((ushort)102, nameof(MANUFACTURING_PID_32), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID METERED_TIME_SEC = new PID((ushort)103, nameof(METERED_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        PID MAINTENANCE_PERIOD_SEC = new PID((ushort)104, nameof(MAINTENANCE_PERIOD_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        PID LAST_MAINTENANCE_TIME_SEC = new PID((ushort)105, nameof(LAST_MAINTENANCE_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        PID TIME_ZONE = new PID((ushort)106, nameof(TIME_ZONE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_SEC = new PID((ushort)107, nameof(RTC_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_MIN = new PID((ushort)108, nameof(RTC_TIME_MIN), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_HOUR = new PID((ushort)109, nameof(RTC_TIME_HOUR), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_DAY = new PID((ushort)110, nameof(RTC_TIME_DAY), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_MONTH = new PID((ushort)111, nameof(RTC_TIME_MONTH), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID RTC_TIME_YEAR = new PID((ushort)112, nameof(RTC_TIME_YEAR), new PID.Formatter(PID.FORMAT.UINT16, "${0:X4}"));
        PID RTC_EPOCH_SEC = new PID((ushort)113, nameof(RTC_EPOCH_SEC), new PID.Formatter(PID.FORMAT.DATE_TIME_EPOCH));
        PID RTC_SET_TIME_SEC = new PID((ushort)114, nameof(RTC_SET_TIME_SEC), new PID.Formatter(PID.FORMAT.DATE_TIME_EPOCH));
        PID BLE_DEVICE_NAME_1 = new PID((ushort)115, nameof(BLE_DEVICE_NAME_1), new PID.Formatter(PID.FORMAT.CHAR6));
        PID BLE_DEVICE_NAME_2 = new PID((ushort)116, nameof(BLE_DEVICE_NAME_2), new PID.Formatter(PID.FORMAT.CHAR6));
        PID BLE_DEVICE_NAME_3 = new PID((ushort)117, nameof(BLE_DEVICE_NAME_3), new PID.Formatter(PID.FORMAT.CHAR6));
        PID BLE_PIN = new PID((ushort)118, nameof(BLE_PIN), new PID.Formatter(PID.FORMAT.CHAR6));
        PID SYSTEM_UPTIME_MS = new PID((ushort)119, nameof(SYSTEM_UPTIME_MS), new PID.Formatter(PID.FORMAT.UINT48, "{0:0.###} sec", 0.001));
        PID ETH_ADAPTER_MAC = new PID((ushort)120, nameof(ETH_ADAPTER_MAC), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        PID ETH_BYTES_TX = new PID((ushort)121, nameof(ETH_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_BYTES_RX = new PID((ushort)122, nameof(ETH_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_MESSAGES_TX = new PID((ushort)123, nameof(ETH_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_MESSAGES_RX = new PID((ushort)124, nameof(ETH_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)125, nameof(ETH_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)126, nameof(ETH_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_DISCARDED = new PID((ushort)sbyte.MaxValue, nameof(ETH_PACKETS_TX_DISCARDED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_DISCARDED = new PID((ushort)128, nameof(ETH_PACKETS_RX_DISCARDED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_ERROR = new PID((ushort)129, nameof(ETH_PACKETS_TX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_ERROR = new PID((ushort)130, nameof(ETH_PACKETS_RX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_OVERFLOW = new PID((ushort)131, nameof(ETH_PACKETS_TX_OVERFLOW), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_LATE_COLLISION = new PID((ushort)132, nameof(ETH_PACKETS_TX_LATE_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_EXCESS_COLLISION = new PID((ushort)133, nameof(ETH_PACKETS_TX_EXCESS_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_TX_UNDERFLOW = new PID((ushort)134, nameof(ETH_PACKETS_TX_UNDERFLOW), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_ALIGN_ERR = new PID((ushort)135, nameof(ETH_PACKETS_RX_ALIGN_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_CRC_ERR = new PID((ushort)136, nameof(ETH_PACKETS_RX_CRC_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_TRUNC_ERR = new PID((ushort)137, nameof(ETH_PACKETS_RX_TRUNC_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_LEN_ERR = new PID((ushort)138, nameof(ETH_PACKETS_RX_LEN_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID ETH_PACKETS_RX_COLLISION = new PID((ushort)139, nameof(ETH_PACKETS_RX_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID IP_ADDRESS = new PID((ushort)140, nameof(IP_ADDRESS), new PID.Formatter(PID.FORMAT.IPV6));
        PID IP_SUBNETMASK = new PID((ushort)141, nameof(IP_SUBNETMASK), new PID.Formatter(PID.FORMAT.IPV6));
        PID IP_GATEWAY = new PID((ushort)142, nameof(IP_GATEWAY), new PID.Formatter(PID.FORMAT.IPV6));
        PID TCP_NUM_CONNECTIONS = new PID((ushort)143, nameof(TCP_NUM_CONNECTIONS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID AUX_BATTERY_VOLTAGE = new PID((ushort)144, nameof(AUX_BATTERY_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", nearZero));
        PID RGB_LIGHTING_GANG_ENABLE = new PID((ushort)145, nameof(RGB_LIGHTING_GANG_ENABLE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID INPUT_SWITCH_TYPE = new PID((ushort)146, nameof(INPUT_SWITCH_TYPE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID DOOR_LOCK_STATE = new PID((ushort)147, nameof(DOOR_LOCK_STATE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID GENERATOR_QUIET_HOURS_START_TIME = new PID((ushort)148, nameof(GENERATOR_QUIET_HOURS_START_TIME), new PID.Formatter(PID.FORMAT.UINT16, "{0:0.###} hrs", 1.0 / 60.0));
        PID GENERATOR_QUIET_HOURS_END_TIME = new PID((ushort)149, nameof(GENERATOR_QUIET_HOURS_END_TIME), new PID.Formatter(PID.FORMAT.UINT16, "{0:0.###} hrs", 1.0 / 60.0));
        PID GENERATOR_AUTO_START_LOW_VOLTAGE = new PID((ushort)150, nameof(GENERATOR_AUTO_START_LOW_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", nearZero));
        PID GENERATOR_AUTO_START_HI_TEMP_C = new PID((ushort)151, nameof(GENERATOR_AUTO_START_HI_TEMP_C), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} °C", nearZero));
        PID GENERATOR_AUTO_RUN_DURATION_MINUTES = new PID((ushort)152, nameof(GENERATOR_AUTO_RUN_DURATION_MINUTES), new PID.Formatter(PID.FORMAT.UINT16, "{0:#,###0} minutes"));
        PID GENERATOR_AUTO_RUN_MIN_OFF_TIME_MINUTES = new PID((ushort)153, nameof(GENERATOR_AUTO_RUN_MIN_OFF_TIME_MINUTES), new PID.Formatter(PID.FORMAT.UINT16, "{0:#,###0} minutes"));
        PID SOFTWARE_BUILD_DATE_TIME = new PID((ushort)154, nameof(SOFTWARE_BUILD_DATE_TIME), new PID.Formatter(PID.FORMAT.DATE_TIME));
        PID GENERATOR_QUIET_HOURS_ENABLED = new PID((ushort)155, nameof(GENERATOR_QUIET_HOURS_ENABLED), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID SHORE_POWER_AMP_RATING = new PID((ushort)156, nameof(SHORE_POWER_AMP_RATING), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", nearZero));
        PID BATTERY_CAPACITY_AMP_HOURS = new PID((ushort)157, nameof(BATTERY_CAPACITY_AMP_HOURS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} Amp-Hours", nearZero));
        PID PCB_ASSEMBLY_PART_NUMBER = new PID((ushort)158, nameof(PCB_ASSEMBLY_PART_NUMBER), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        PID UNLOCK_PIN = new PID((ushort)159, nameof(UNLOCK_PIN), new PID.Formatter(PID.FORMAT.UINT48));
        PID UNLOCK_PIN_MODE = new PID((ushort)160, nameof(UNLOCK_PIN_MODE), new PID.Formatter(PID.FORMAT.UINT48));
        PID SIMULATE_ON_OFF_STYLE_LIGHT = new PID((ushort)161, nameof(SIMULATE_ON_OFF_STYLE_LIGHT), new PID.Formatter(PID.FORMAT.UINT48));
        PID FAN_SPEED_CONTROL_TYPE = new PID((ushort)162, nameof(FAN_SPEED_CONTROL_TYPE), new PID.Formatter(PID.FORMAT.UINT48));
        PID HVAC_CONTROL_TYPE = new PID((ushort)163, nameof(HVAC_CONTROL_TYPE), new PID.Formatter(PID.FORMAT.UINT48));
        PID SOFTWARE_FUSE_RATING_AMPS = new PID((ushort)164, nameof(SOFTWARE_FUSE_RATING_AMPS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", nearZero));
        PID SOFTWARE_FUSE_MAX_RATING_AMPS = new PID((ushort)165, nameof(SOFTWARE_FUSE_MAX_RATING_AMPS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", nearZero));
        PID CUMMINS_ONAN_GENERATOR_FAULT_CODE = new PID((ushort)166, nameof(CUMMINS_ONAN_GENERATOR_FAULT_CODE), new PID.Formatter(PID.FORMAT.UINT48));
        PID MOTOR_1_CURRENT_AMPS = new PID((ushort)167, nameof(MOTOR_1_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_2_CURRENT_AMPS = new PID((ushort)168, nameof(MOTOR_2_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_3_CURRENT_AMPS = new PID((ushort)169, nameof(MOTOR_3_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_4_CURRENT_AMPS = new PID((ushort)170, nameof(MOTOR_4_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_5_CURRENT_AMPS = new PID((ushort)171, nameof(MOTOR_5_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_6_CURRENT_AMPS = new PID((ushort)172, nameof(MOTOR_6_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_7_CURRENT_AMPS = new PID((ushort)173, nameof(MOTOR_7_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_8_CURRENT_AMPS = new PID((ushort)174, nameof(MOTOR_8_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_9_CURRENT_AMPS = new PID((ushort)175, nameof(MOTOR_9_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_10_CURRENT_AMPS = new PID((ushort)176, nameof(MOTOR_10_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_11_CURRENT_AMPS = new PID((ushort)177, nameof(MOTOR_11_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_12_CURRENT_AMPS = new PID((ushort)178, nameof(MOTOR_12_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_13_CURRENT_AMPS = new PID((ushort)179, nameof(MOTOR_13_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_14_CURRENT_AMPS = new PID((ushort)180, nameof(MOTOR_14_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_15_CURRENT_AMPS = new PID((ushort)181, nameof(MOTOR_15_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID MOTOR_16_CURRENT_AMPS = new PID((ushort)182, nameof(MOTOR_16_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", nearZero));
        PID DEVICE_TYPE = new PID((ushort)183, nameof(DEVICE_TYPE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        PID IN_MOTION_LOCKOUT_BEHAVIOR = new PID((ushort)184, nameof(IN_MOTION_LOCKOUT_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));
        PID RVC_DETECTED_NODES = new PID((ushort)185, nameof(RVC_DETECTED_NODES), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_LOST_NODES = new PID((ushort)186, nameof(RVC_LOST_NODES), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_BYTES_TX = new PID((ushort)187, nameof(RVC_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_BYTES_RX = new PID((ushort)188, nameof(RVC_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_MESSAGES_TX = new PID((ushort)189, nameof(RVC_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_MESSAGES_RX = new PID((ushort)190, nameof(RVC_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_TX_BUFFERS_FREE = new PID((ushort)191, nameof(RVC_TX_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_TX_BUFFERS_USED = new PID((ushort)192, nameof(RVC_TX_BUFFERS_USED), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_RX_BUFFERS_FREE = new PID((ushort)193, nameof(RVC_RX_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_RX_BUFFERS_USED = new PID((ushort)194, nameof(RVC_RX_BUFFERS_USED), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_TX_OUT_OF_BUFFERS_COUNT = new PID((ushort)195, nameof(RVC_TX_OUT_OF_BUFFERS_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_RX_OUT_OF_BUFFERS_COUNT = new PID((ushort)196, nameof(RVC_RX_OUT_OF_BUFFERS_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_TX_FAILURE_COUNT = new PID((ushort)197, nameof(RVC_TX_FAILURE_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_DEFAULT_SRC_ADDR = new PID((ushort)198, nameof(RVC_DEFAULT_SRC_ADDR), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_DYNAMIC_ADDR = new PID((ushort)199, nameof(RVC_DYNAMIC_ADDR), new PID.Formatter(PID.FORMAT.UINT48));
        PID RVC_MAKE = new PID((ushort)200, nameof(RVC_MAKE), new PID.Formatter(PID.FORMAT.CHAR6));
        PID RVC_MODEL_1 = new PID((ushort)201, nameof(RVC_MODEL_1), new PID.Formatter(PID.FORMAT.CHAR6));
        PID RVC_MODEL_2 = new PID((ushort)202, nameof(RVC_MODEL_2), new PID.Formatter(PID.FORMAT.CHAR6));
        PID RVC_MODEL_3 = new PID((ushort)203, nameof(RVC_MODEL_3), new PID.Formatter(PID.FORMAT.CHAR6));
        PID RVC_SERIAL = new PID((ushort)204, nameof(RVC_SERIAL), new PID.Formatter(PID.FORMAT.CHAR6));
        PID RVC_ID_NUMBER = new PID((ushort)205, nameof(RVC_ID_NUMBER), new PID.Formatter(PID.FORMAT.CHAR6));
        PID CLOUD_GATEWAY_ASSET_ID_PART_1 = new PID((ushort)206, nameof(CLOUD_GATEWAY_ASSET_ID_PART_1), new PID.Formatter(PID.FORMAT.CHAR6));
        PID CLOUD_GATEWAY_ASSET_ID_PART_2 = new PID((ushort)207, nameof(CLOUD_GATEWAY_ASSET_ID_PART_2), new PID.Formatter(PID.FORMAT.CHAR6));
        PID CLOUD_GATEWAY_ASSET_ID_PART_3 = new PID((ushort)208, nameof(CLOUD_GATEWAY_ASSET_ID_PART_3), new PID.Formatter(PID.FORMAT.CHAR6));
        PID HVAC_ZONE_CAPABILITIES = new PID((ushort)209, nameof(HVAC_ZONE_CAPABILITIES), new PID.Formatter(PID.FORMAT.UINT8));
        PID IGNITION_BEHAVIOR = new PID((ushort)210, nameof(IGNITION_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));
        PID BLE_NUMBER_OF_FORWARDED_CAN_DEVICES = new PID((ushort)211, nameof(BLE_NUMBER_OF_FORWARDED_CAN_DEVICES), new PID.Formatter(PID.FORMAT.UINT48));
        PID BLE_NUMBER_OF_CONNECTS = new PID((ushort)212, nameof(BLE_NUMBER_OF_CONNECTS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_NUMBER_OF_DISCONNECTS = new PID((ushort)213, nameof(BLE_NUMBER_OF_DISCONNECTS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_TOTAL_TRAFFIC = new PID((ushort)214, nameof(BLE_TOTAL_TRAFFIC), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_WRITES_FROM_PHONE = new PID((ushort)215, nameof(BLE_WRITES_FROM_PHONE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_NOTIFICATIONS_TO_PHONE_SUCCESSFUL = new PID((ushort)216, nameof(BLE_NOTIFICATIONS_TO_PHONE_SUCCESSFUL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_NOTIFICATIONS_TO_PHONE_FAILURE = new PID((ushort)217, nameof(BLE_NOTIFICATIONS_TO_PHONE_FAILURE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_MTU_SIZE_CENTRAL = new PID((ushort)218, nameof(BLE_MTU_SIZE_CENTRAL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_MTU_SIZE_PERIPHERAL = new PID((ushort)219, nameof(BLE_MTU_SIZE_PERIPHERAL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_DATA_LENGTH_TIME = new PID((ushort)220, nameof(BLE_DATA_LENGTH_TIME), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_SECURITY_UNLOCKED = new PID((ushort)221, nameof(BLE_SECURITY_UNLOCKED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_CLIENT_CONNECTED = new PID((ushort)222, nameof(BLE_CLIENT_CONNECTED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_CCCD_WRITTEN = new PID((ushort)223, nameof(BLE_CCCD_WRITTEN), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_NUM_BUFFERS_FREE = new PID((ushort)224, nameof(BLE_NUM_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_LAST_TX_ERROR = new PID((ushort)225, nameof(BLE_LAST_TX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_CONNECTED_DEVICE_RSSI = new PID((ushort)226, nameof(BLE_CONNECTED_DEVICE_RSSI), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_DEAD_CLIENT_COUNTER = new PID((ushort)227, nameof(BLE_DEAD_CLIENT_COUNTER), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_LAST_DISCONNECT_REASON = new PID((ushort)228, nameof(BLE_LAST_DISCONNECT_REASON), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_SPI_RX_MSGS_DROPPED = new PID((ushort)229, nameof(BLE_SPI_RX_MSGS_DROPPED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID BLE_SPI_TX_MSGS_DROPPED = new PID((ushort)230, nameof(BLE_SPI_TX_MSGS_DROPPED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        PID LOW_VOLTAGE_BEHAVIOR = new PID((ushort)231, nameof(LOW_VOLTAGE_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));


    given value
         PID.FORMAT.DATE_TIME:
                    int year = 2000 + (int)(byte)(value >> 40);
                    int month = (int)(byte)(value >> 32);
                    int day = (int)(byte)(value >> 24);
                    int hour = (int)(byte)(value >> 16);
                    int minute = (int)(byte)(value >> 8);
                    int second = (int)(byte)value;
                    return new DateTime(year, month, day, hour, minute, second).ToString();