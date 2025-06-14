// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.DEVICE_TYPE
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class DEVICE_TYPE
    {
        private static readonly DEVICE_TYPE[] Table = new DEVICE_TYPE[256];
        private static readonly System.Collections.Generic.List<DEVICE_TYPE> List = new System.Collections.Generic.List<DEVICE_TYPE>();
        public const byte UNKNOWN = 0;
        public const byte GENERIC = 1;
        public const byte TABLET = 2;
        public const byte LATCHING_RELAY = 3;
        public const byte MOMENTARY_RELAY = 4;
        public const byte LATCHING_H_BRIDGE = 5;
        public const byte MOMENTARY_H_BRIDGE = 6;
        public const byte LEVELER_TYPE_1 = 7;
        public const byte SWITCH = 8;
        public const byte TOUCHSCREEN_SWITCH = 9;
        public const byte TANK_SENSOR = 10;
        public const byte LEVELER_TYPE_2 = 11;
        public const byte HOUR_METER = 12;
        public const byte RGB_LIGHT = 13;
        public const byte REAL_TIME_CLOCK = 14;
        public const byte IR_REMOTE_CONTROL = 15;
        public const byte HVAC_CONTROL = 16;
        public const byte LEVELER_TYPE_3 = 17;
        public const byte CAN_TO_ETHERNET_GATEWAY = 18;
        public const byte IN_TRANSIT_POWER_DISCONNECT = 19;
        public const byte DIMMABLE_LIGHT = 20;
        public const byte ONECONTROL_TOUCH_PAD = 21;
        public const byte ANDROID_MOBILE_DEVICE = 22;
        public const byte IOS_MOBILE_DEVICE = 23;
        public const byte GENERATOR_GENIE = 24;
        public const byte TEMPERATURE_SENSOR = 25;
        public const byte AC_POWER_MONITOR = 26;
        public const byte DC_POWER_MONITOR = 27;
        public const byte SETEC_POWER_MANAGER = 28;
        public const byte ONECONTROL_CLOUD_GATEWAY = 29;
        public const byte LATCHING_RELAY_TYPE_2 = 30;
        public const byte MOMENTARY_RELAY_TYPE_2 = 31;
        public const byte LATCHING_H_BRIDGE_TYPE_2 = 32;
        public const byte MOMENTARY_H_BRIDGE_TYPE_2 = 33;
        public const byte ONECONTROL_APPLICATION = 34;
        public const byte CONFIGURATOR_APPLICATION = 35;
        public const byte BLUETOOTH_GATEWAY = 36;
        public const byte MAXX_FAN = 37;
        public const byte RAIN_SENSOR = 38;
        public readonly byte Value;
        public readonly string Name;
        public readonly ICON Icon;

        public static IEnumerable<DEVICE_TYPE> GetEnumerator() = > (IEnumerable<DEVICE_TYPE>) DEVICE_TYPE.List;

        static DEVICE_TYPE()
        {
            DEVICE_TYPE deviceType1 = new DEVICE_TYPE((byte)0, nameof(UNKNOWN), ICON.UNKNOWN);
            DEVICE_TYPE deviceType2 = new DEVICE_TYPE((byte)1, "Generic Device", ICON.GENERIC);
            DEVICE_TYPE deviceType3 = new DEVICE_TYPE((byte)2, "Tablet", ICON.TABLET);
            DEVICE_TYPE deviceType4 = new DEVICE_TYPE((byte)3, "Latching Relay (type 1)", ICON.LATCHING_RELAY);
            DEVICE_TYPE deviceType5 = new DEVICE_TYPE((byte)4, "Momentary Relay (type 1)", ICON.MOMENTARY_RELAY);
            DEVICE_TYPE deviceType6 = new DEVICE_TYPE((byte)5, "Latching H-Bridge (type 1)", ICON.LATCHING_H_BRIDGE);
            DEVICE_TYPE deviceType7 = new DEVICE_TYPE((byte)6, "Momentary H-Bridge (type 1)", ICON.MOMENTARY_H_BRIDGE);
            DEVICE_TYPE deviceType8 = new DEVICE_TYPE((byte)7, "Leveler Type 1", ICON.LEVELER);
            DEVICE_TYPE deviceType9 = new DEVICE_TYPE((byte)8, "Switch", ICON.SWITCH);
            DEVICE_TYPE deviceType10 = new DEVICE_TYPE((byte)9, "Touchscreen Switch", ICON.TOUCHSCREEN_SWITCH);
            DEVICE_TYPE deviceType11 = new DEVICE_TYPE((byte)10, "Tank Sensor", ICON.TANK_SENSOR);
            DEVICE_TYPE deviceType12 = new DEVICE_TYPE((byte)11, "Leveler Type 2", ICON.JACKS);
            DEVICE_TYPE deviceType13 = new DEVICE_TYPE((byte)12, "Hour Meter", ICON.HOUR_METER);
            DEVICE_TYPE deviceType14 = new DEVICE_TYPE((byte)13, "RGB Light", ICON.RGB_LIGHT);
            DEVICE_TYPE deviceType15 = new DEVICE_TYPE((byte)14, "Clock", ICON.CLOCK);
            DEVICE_TYPE deviceType16 = new DEVICE_TYPE((byte)15, "Infrared Remote Control", ICON.IR_REMOTE_CONTROL);
            DEVICE_TYPE deviceType17 = new DEVICE_TYPE((byte)16, "HVAC Control", ICON.HVAC_CONTROL);
            DEVICE_TYPE deviceType18 = new DEVICE_TYPE((byte)17, "Leveler Type 3", ICON.LEVELER);
            DEVICE_TYPE deviceType19 = new DEVICE_TYPE((byte)18, "CAN to Ethernet Gateway", ICON.NETWORK_BRIDGE);
            DEVICE_TYPE deviceType20 = new DEVICE_TYPE((byte)19, "In Transit Power Disconnect", ICON.IPDM);
            DEVICE_TYPE deviceType21 = new DEVICE_TYPE((byte)20, "Dimmable Light", ICON.DIMMABLE_LIGHT);
            DEVICE_TYPE deviceType22 = new DEVICE_TYPE((byte)21, "OneControl Touch Pad", ICON.OCTP);
            DEVICE_TYPE deviceType23 = new DEVICE_TYPE((byte)22, "Android Mobile Device", ICON.ANDROID);
            DEVICE_TYPE deviceType24 = new DEVICE_TYPE((byte)23, "iOS Mobile Device", ICON.IOS);
            DEVICE_TYPE deviceType25 = new DEVICE_TYPE((byte)24, "Generator Genie", ICON.GENERATOR);
            DEVICE_TYPE deviceType26 = new DEVICE_TYPE((byte)25, "Temperature Sensor", ICON.THERMOMETER);
            DEVICE_TYPE deviceType27 = new DEVICE_TYPE((byte)26, "AC Power Monitor", ICON.POWER_MONITOR);
            DEVICE_TYPE deviceType28 = new DEVICE_TYPE((byte)27, "DC Power Monitor", ICON.POWER_MONITOR);
            DEVICE_TYPE deviceType29 = new DEVICE_TYPE((byte)28, "Power Manager", ICON.POWER_MANAGER);
            DEVICE_TYPE deviceType30 = new DEVICE_TYPE((byte)29, "OneControl Cloud Gateway", ICON.CLOUD);
            DEVICE_TYPE deviceType31 = new DEVICE_TYPE((byte)30, "Latching Relay (type 2)", ICON.LATCHING_RELAY);
            DEVICE_TYPE deviceType32 = new DEVICE_TYPE((byte)31, "Momentary Relay (type 2)", ICON.MOMENTARY_RELAY);
            DEVICE_TYPE deviceType33 = new DEVICE_TYPE((byte)32, "Latching H-Bridge (type 2)", ICON.LATCHING_H_BRIDGE);
            DEVICE_TYPE deviceType34 = new DEVICE_TYPE((byte)33, "Momentary H-Bridge (type 2)", ICON.MOMENTARY_H_BRIDGE);
            DEVICE_TYPE deviceType35 = new DEVICE_TYPE((byte)34, "OneControl App", ICON.DIAGNOSTIC_TOOL);
            DEVICE_TYPE deviceType36 = new DEVICE_TYPE((byte)35, "Configurator App", ICON.DIAGNOSTIC_TOOL);
            DEVICE_TYPE deviceType37 = new DEVICE_TYPE((byte)36, "Bluetooth Gateway", ICON.BLUETOOTH);
            DEVICE_TYPE deviceType38 = new DEVICE_TYPE((byte)37, "MaxxFan", ICON.VENT_COVER);
            DEVICE_TYPE deviceType39 = new DEVICE_TYPE((byte)38, "Rain Sensor", ICON.RAIN_SENSOR);
        }

        private DEVICE_TYPE(byte value)
            : this(value, "UNKNOWN_" + value.ToString("X2"), ICON.UNKNOWN)
        {
        }

        private DEVICE_TYPE(byte value, string name, ICON icon)
        {
            this.Name = name.Trim();
            this.Value = value;
            this.Icon = icon;
            DEVICE_TYPE.List.Add(this);
            DEVICE_TYPE.Table[(int)value] = this;
        }

        public bool IsValid = > this != null && this.Value > (byte)0;

        public static implicit operator byte(DEVICE_TYPE msg) = > msg.Value;

        public static implicit operator DEVICE_TYPE(byte value)
        {
            DEVICE_TYPE deviceType = DEVICE_TYPE.Table[(int)value];
            if (deviceType != null)
                return deviceType;
            return value == (byte)0 ? (DEVICE_TYPE)(byte)0 : new DEVICE_TYPE(value);
        }

        public override string ToString() = > this.Name;
    }
}




// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.DEVICE_TYPE
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class DEVICE_TYPE
    {
        private static readonly DEVICE_TYPE[] Table = new DEVICE_TYPE[256];
        private static readonly System.Collections.Generic.List<DEVICE_TYPE> List = new System.Collections.Generic.List<DEVICE_TYPE>();
        public const byte UNKNOWN = 0;
        public const byte GENERIC = 1;
        public const byte TABLET = 2;
        public const byte LATCHING_RELAY = 3;
        public const byte MOMENTARY_RELAY = 4;
        public const byte LATCHING_H_BRIDGE = 5;
        public const byte MOMENTARY_H_BRIDGE = 6;
        public const byte LEVELER_TYPE_1 = 7;
        public const byte SWITCH = 8;
        public const byte TOUCHSCREEN_SWITCH = 9;
        public const byte TANK_SENSOR = 10;
        public const byte LEVELER_TYPE_2 = 11;
        public const byte HOUR_METER = 12;
        public const byte RGB_LIGHT = 13;
        public const byte REAL_TIME_CLOCK = 14;
        public const byte IR_REMOTE_CONTROL = 15;
        public const byte HVAC_CONTROL = 16;
        public const byte LEVELER_TYPE_3 = 17;
        public const byte CAN_TO_ETHERNET_GATEWAY = 18;
        public const byte IN_TRANSIT_POWER_DISCONNECT = 19;
        public const byte DIMMABLE_LIGHT = 20;
        public const byte ONECONTROL_TOUCH_PAD = 21;
        public const byte ANDROID_MOBILE_DEVICE = 22;
        public const byte IOS_MOBILE_DEVICE = 23;
        public const byte GENERATOR_GENIE = 24;
        public const byte TEMPERATURE_SENSOR = 25;
        public const byte AC_POWER_MONITOR = 26;
        public const byte DC_POWER_MONITOR = 27;
        public const byte SETEC_POWER_MANAGER = 28;
        public const byte ONECONTROL_CLOUD_GATEWAY = 29;
        public const byte LATCHING_RELAY_TYPE_2 = 30;
        public const byte MOMENTARY_RELAY_TYPE_2 = 31;
        public const byte LATCHING_H_BRIDGE_TYPE_2 = 32;
        public const byte MOMENTARY_H_BRIDGE_TYPE_2 = 33;
        public const byte ONECONTROL_APPLICATION = 34;
        public const byte CONFIGURATOR_APPLICATION = 35;
        public const byte BLUETOOTH_GATEWAY = 36;
        public const byte MAXX_FAN = 37;
        public const byte RAIN_SENSOR = 38;
        public readonly byte Value;
        public readonly string Name;
        public readonly ICON Icon;

        public static IEnumerable<DEVICE_TYPE> GetEnumerator() = > (IEnumerable<DEVICE_TYPE>) DEVICE_TYPE.List;

        static DEVICE_TYPE()
        {
            DEVICE_TYPE deviceType1 = new DEVICE_TYPE((byte)0, nameof(UNKNOWN), ICON.UNKNOWN);
            DEVICE_TYPE deviceType2 = new DEVICE_TYPE((byte)1, "Generic Device", ICON.GENERIC);
            DEVICE_TYPE deviceType3 = new DEVICE_TYPE((byte)2, "Tablet", ICON.TABLET);
            DEVICE_TYPE deviceType4 = new DEVICE_TYPE((byte)3, "Latching Relay (type 1)", ICON.LATCHING_RELAY);
            DEVICE_TYPE deviceType5 = new DEVICE_TYPE((byte)4, "Momentary Relay (type 1)", ICON.MOMENTARY_RELAY);
            DEVICE_TYPE deviceType6 = new DEVICE_TYPE((byte)5, "Latching H-Bridge (type 1)", ICON.LATCHING_H_BRIDGE);
            DEVICE_TYPE deviceType7 = new DEVICE_TYPE((byte)6, "Momentary H-Bridge (type 1)", ICON.MOMENTARY_H_BRIDGE);
            DEVICE_TYPE deviceType8 = new DEVICE_TYPE((byte)7, "Leveler Type 1", ICON.LEVELER);
            DEVICE_TYPE deviceType9 = new DEVICE_TYPE((byte)8, "Switch", ICON.SWITCH);
            DEVICE_TYPE deviceType10 = new DEVICE_TYPE((byte)9, "Touchscreen Switch", ICON.TOUCHSCREEN_SWITCH);
            DEVICE_TYPE deviceType11 = new DEVICE_TYPE((byte)10, "Tank Sensor", ICON.TANK_SENSOR);
            DEVICE_TYPE deviceType12 = new DEVICE_TYPE((byte)11, "Leveler Type 2", ICON.JACKS);
            DEVICE_TYPE deviceType13 = new DEVICE_TYPE((byte)12, "Hour Meter", ICON.HOUR_METER);
            DEVICE_TYPE deviceType14 = new DEVICE_TYPE((byte)13, "RGB Light", ICON.RGB_LIGHT);
            DEVICE_TYPE deviceType15 = new DEVICE_TYPE((byte)14, "Clock", ICON.CLOCK);
            DEVICE_TYPE deviceType16 = new DEVICE_TYPE((byte)15, "Infrared Remote Control", ICON.IR_REMOTE_CONTROL);
            DEVICE_TYPE deviceType17 = new DEVICE_TYPE((byte)16, "HVAC Control", ICON.HVAC_CONTROL);
            DEVICE_TYPE deviceType18 = new DEVICE_TYPE((byte)17, "Leveler Type 3", ICON.LEVELER);
            DEVICE_TYPE deviceType19 = new DEVICE_TYPE((byte)18, "CAN to Ethernet Gateway", ICON.NETWORK_BRIDGE);
            DEVICE_TYPE deviceType20 = new DEVICE_TYPE((byte)19, "In Transit Power Disconnect", ICON.IPDM);
            DEVICE_TYPE deviceType21 = new DEVICE_TYPE((byte)20, "Dimmable Light", ICON.DIMMABLE_LIGHT);
            DEVICE_TYPE deviceType22 = new DEVICE_TYPE((byte)21, "OneControl Touch Pad", ICON.OCTP);
            DEVICE_TYPE deviceType23 = new DEVICE_TYPE((byte)22, "Android Mobile Device", ICON.ANDROID);
            DEVICE_TYPE deviceType24 = new DEVICE_TYPE((byte)23, "iOS Mobile Device", ICON.IOS);
            DEVICE_TYPE deviceType25 = new DEVICE_TYPE((byte)24, "Generator Genie", ICON.GENERATOR);
            DEVICE_TYPE deviceType26 = new DEVICE_TYPE((byte)25, "Temperature Sensor", ICON.THERMOMETER);
            DEVICE_TYPE deviceType27 = new DEVICE_TYPE((byte)26, "AC Power Monitor", ICON.POWER_MONITOR);
            DEVICE_TYPE deviceType28 = new DEVICE_TYPE((byte)27, "DC Power Monitor", ICON.POWER_MONITOR);
            DEVICE_TYPE deviceType29 = new DEVICE_TYPE((byte)28, "Power Manager", ICON.POWER_MANAGER);
            DEVICE_TYPE deviceType30 = new DEVICE_TYPE((byte)29, "OneControl Cloud Gateway", ICON.CLOUD);
            DEVICE_TYPE deviceType31 = new DEVICE_TYPE((byte)30, "Latching Relay (type 2)", ICON.LATCHING_RELAY);
            DEVICE_TYPE deviceType32 = new DEVICE_TYPE((byte)31, "Momentary Relay (type 2)", ICON.MOMENTARY_RELAY);
            DEVICE_TYPE deviceType33 = new DEVICE_TYPE((byte)32, "Latching H-Bridge (type 2)", ICON.LATCHING_H_BRIDGE);
            DEVICE_TYPE deviceType34 = new DEVICE_TYPE((byte)33, "Momentary H-Bridge (type 2)", ICON.MOMENTARY_H_BRIDGE);
            DEVICE_TYPE deviceType35 = new DEVICE_TYPE((byte)34, "OneControl App", ICON.DIAGNOSTIC_TOOL);
            DEVICE_TYPE deviceType36 = new DEVICE_TYPE((byte)35, "Configurator App", ICON.DIAGNOSTIC_TOOL);
            DEVICE_TYPE deviceType37 = new DEVICE_TYPE((byte)36, "Bluetooth Gateway", ICON.BLUETOOTH);
            DEVICE_TYPE deviceType38 = new DEVICE_TYPE((byte)37, "MaxxFan", ICON.VENT_COVER);
            DEVICE_TYPE deviceType39 = new DEVICE_TYPE((byte)38, "Rain Sensor", ICON.RAIN_SENSOR);
        }

        private DEVICE_TYPE(byte value)
            : this(value, "UNKNOWN_" + value.ToString("X2"), ICON.UNKNOWN)
        {
        }

        private DEVICE_TYPE(byte value, string name, ICON icon)
        {
            this.Name = name.Trim();
            this.Value = value;
            this.Icon = icon;
            DEVICE_TYPE.List.Add(this);
            DEVICE_TYPE.Table[(int)value] = this;
        }

        public bool IsValid = > this != null && this.Value > (byte)0;

        public static implicit operator byte(DEVICE_TYPE msg) = > msg.Value;

        public static implicit operator DEVICE_TYPE(byte value)
        {
            DEVICE_TYPE deviceType = DEVICE_TYPE.Table[(int)value];
            if (deviceType != null)
                return deviceType;
            return value == (byte)0 ? (DEVICE_TYPE)(byte)0 : new DEVICE_TYPE(value);
        }

        public override string ToString() = > this.Name;
    }
}


// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.FUNCTION_CLASS
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System;
using System.Collections.Generic;
using System.Linq;

namespace IDS.Core.IDS_CAN
{
    public sealed class FUNCTION_CLASS
    {
        private static readonly List<FUNCTION_CLASS> ObjList = new List<FUNCTION_CLASS>();
        public static FUNCTION_CLASS UNKNOWN = new FUNCTION_CLASS(nameof(UNKNOWN), ICON.UNKNOWN, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)0
            });
        public static FUNCTION_CLASS MISCELLANEOUS = new FUNCTION_CLASS("Miscellaneous", ICON.UNKNOWN, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)0
            });
        public static FUNCTION_CLASS AWNING = new FUNCTION_CLASS("Awning", ICON.AWNING, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS BED_LIFT = new FUNCTION_CLASS("Bed Lift", ICON.BED_LIFT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS LOCK = new FUNCTION_CLASS("Lock", ICON.LOCK, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS ELECTRIC_WATER_HEATER = new FUNCTION_CLASS("Electric Water Heater", ICON.ELECTRIC_WATER_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS GAS_WATER_HEATER = new FUNCTION_CLASS("Gas Water Heater", ICON.GAS_WATER_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS GENERATOR = new FUNCTION_CLASS("Generator", ICON.GENERATOR, new DEVICE_TYPE[4]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33,
              (DEVICE_TYPE)(byte)24
            });
        public static FUNCTION_CLASS LANDING_GEAR = new FUNCTION_CLASS("Landing Gear", ICON.LANDING_GEAR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS LEVELER = new FUNCTION_CLASS("Leveler", ICON.LEVELER, new DEVICE_TYPE[2]
            {
              (DEVICE_TYPE)(byte)7,
              (DEVICE_TYPE)(byte)17
            });
        public static FUNCTION_CLASS LIGHT = new FUNCTION_CLASS("Light", ICON.LIGHT, new DEVICE_TYPE[5]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30,
              (DEVICE_TYPE)(byte)13,
              (DEVICE_TYPE)(byte)20
            });
        public static FUNCTION_CLASS PUMP = new FUNCTION_CLASS("Pump", ICON.WATER_PUMP, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS SLIDE = new FUNCTION_CLASS("Slide", ICON.SLIDE, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS TANK = new FUNCTION_CLASS("Tank", ICON.TANK_SENSOR, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)10
            });
        public static FUNCTION_CLASS TV_LIFT = new FUNCTION_CLASS("TV Lift", ICON.TV_LIFT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS VENT = new FUNCTION_CLASS("Vent", ICON.VENT, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS VENT_COVER = new FUNCTION_CLASS("Vent Cover", ICON.VENT_COVER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS WATER_TANK_HEATER = new FUNCTION_CLASS("Water Tank Heater", ICON.WATER_TANK_HEATER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS LEVELER_2 = new FUNCTION_CLASS("Leveler", ICON.JACKS, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)11
            });
        public static FUNCTION_CLASS HOUR_METER = new FUNCTION_CLASS("Hour Meter", ICON.HOUR_METER, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)12
            });
        public static FUNCTION_CLASS REAL_TIME_CLOCK = new FUNCTION_CLASS("Clock", ICON.CLOCK, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)14
            });
        public static FUNCTION_CLASS IR_REMOTE_CONTROL = new FUNCTION_CLASS("Infrared Remote Control", ICON.IR_REMOTE_CONTROL, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)15
            });
        public static FUNCTION_CLASS HVAC_CONTROL = new FUNCTION_CLASS("HVAC Control", ICON.HVAC_CONTROL, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)16
            });
        public static FUNCTION_CLASS LP_TANK_VALVE = new FUNCTION_CLASS("LP Tank Valve", ICON.LP_TANK_VALVE, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public static FUNCTION_CLASS NETWORK_BRIDGE = new FUNCTION_CLASS("Network Bridge", ICON.NETWORK_BRIDGE, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)18
            });
        public static FUNCTION_CLASS IPDM = new FUNCTION_CLASS("In Transit Power Disconnect", ICON.IPDM, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)19
            });
        public static FUNCTION_CLASS STABILIZER = new FUNCTION_CLASS("Stabilizer", ICON.STABILIZER, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS TEMPERATURE_SENSOR = new FUNCTION_CLASS("Temperature Sensor", ICON.THERMOMETER, new DEVICE_TYPE[1]
            {
              (DEVICE_TYPE)(byte)25
            });
        public static FUNCTION_CLASS POWER = new FUNCTION_CLASS("Power", ICON.POWER_MONITOR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)26,
              (DEVICE_TYPE)(byte)27,
              (DEVICE_TYPE)(byte)28
            });
        public static FUNCTION_CLASS DOOR = new FUNCTION_CLASS("Door", ICON.DOOR, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)6,
              (DEVICE_TYPE)(byte)33
            });
        public static FUNCTION_CLASS FAN = new FUNCTION_CLASS("Fan", ICON.FAN, new DEVICE_TYPE[3]
            {
              (DEVICE_TYPE)(byte)8,
              (DEVICE_TYPE)(byte)3,
              (DEVICE_TYPE)(byte)30
            });
        public readonly string Name;
        public readonly ICON Icon;
        private readonly object CriticalSection = new object();
        private readonly DEVICE_TYPE[] DeviceList;
        private readonly string UpperName;
        private List<FUNCTION_NAME> NameList;

        public static IEnumerable<FUNCTION_CLASS> GetEnumerator() = > (IEnumerable<FUNCTION_CLASS>) FUNCTION_CLASS.ObjList;

        private FUNCTION_CLASS(string name)
            : this(name, ICON.UNKNOWN, new DEVICE_TYPE[1]
                {
                  (DEVICE_TYPE)(byte)0
                })
        {
        }

        private FUNCTION_CLASS(string name, ICON icon, DEVICE_TYPE[] devices)
        {
            this.Name = name.Trim();
            this.UpperName = this.Name.ToUpper();
            this.DeviceList = devices;
            this.Icon = icon;
            FUNCTION_CLASS.ObjList.Add(this);
            FUNCTION_CLASS.ObjList.Sort((Comparison<FUNCTION_CLASS>) ((first, second) = > first == FUNCTION_CLASS.UNKNOWN ? 1 : first.Name.CompareTo(second.Name)));
        }

        public IEnumerable<DEVICE_TYPE> Devices = > (IEnumerable<DEVICE_TYPE>) this.DeviceList;

        public IEnumerable<FUNCTION_NAME> FunctionNames
        {
            get
            {
                if (this.NameList == null)
                {
                    lock(this.CriticalSection)
                    {
                        if (this.NameList == null)
                        {
                            this.NameList = new List<FUNCTION_NAME>();
                            foreach(FUNCTION_NAME functionName in FUNCTION_NAME.GetEnumerator())
                            {
                                if (functionName != FUNCTION_NAME.UNKNOWN && functionName.FunctionClasses.Contains<FUNCTION_CLASS>(this))
                                    this.NameList.Add(functionName);
                            }
                            this.NameList.Sort((Comparison<FUNCTION_NAME>) ((first, second) = > first == FUNCTION_NAME.UNKNOWN ? 1 : first.Name.CompareTo(second.Name)));
                        }
                    }
                }
                return (IEnumerable<FUNCTION_NAME>) this.NameList;
            }
        }

        public static FUNCTION_CLASS FromName(string name, DEVICE_TYPE type)
        {
            FUNCTION_CLASS functionClass1 = FUNCTION_CLASS.UNKNOWN;
            name = name.ToUpper().Trim();
            foreach(FUNCTION_CLASS functionClass2 in FUNCTION_CLASS.ObjList)
            {
                if (functionClass2.UpperName == name)
                {
                    if (functionClass1 == FUNCTION_CLASS.UNKNOWN)
                        functionClass1 = functionClass2;
                    else if (functionClass2.Devices.Contains<DEVICE_TYPE>(type))
                        functionClass1 = functionClass2;
                }
            }
            return functionClass1;
        }

        public override string ToString() = > this.Name;
    }
}


// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.FUNCTION_NAME
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class FUNCTION_NAME
    {
        private static readonly Dictionary<ushort, FUNCTION_NAME> Lookup = new Dictionary<ushort, FUNCTION_NAME>();
        private static readonly List<FUNCTION_NAME> NameList = new List<FUNCTION_NAME>();
        public static readonly FUNCTION_NAME UNKNOWN = new FUNCTION_NAME((ushort)0, new FUNCTION_CLASS[1]
            {
              FUNCTION_CLASS.UNKNOWN
            }, nameof(UNKNOWN), ICON.UNKNOWN);
        public const ushort DIAGNOSTIC_TOOL = 1;
        public const ushort MYRV_TABLET = 2;
        public const ushort GAS_WATER_HEATER = 3;
        public const ushort ELECTRIC_WATER_HEATER = 4;
        public const ushort WATER_PUMP = 5;
        public const ushort BATH_VENT = 6;
        public const ushort LIGHT = 7;
        public const ushort FLOOD_LIGHT = 8;
        public const ushort WORK_LIGHT = 9;
        public const ushort FRONT_BEDROOM_CEILING_LIGHT = 10;
        public const ushort FRONT_BEDROOM_OVERHEAD_LIGHT = 11;
        public const ushort FRONT_BEDROOM_VANITY_LIGHT = 12;
        public const ushort FRONT_BEDROOM_SCONCE_LIGHT = 13;
        public const ushort FRONT_BEDROOM_LOFT_LIGHT = 14;
        public const ushort REAR_BEDROOM_CEILING_LIGHT = 15;
        public const ushort REAR_BEDROOM_OVERHEAD_LIGHT = 16;
        public const ushort REAR_BEDROOM_VANITY_LIGHT = 17;
        public const ushort REAR_BEDROOM_SCONCE_LIGHT = 18;
        public const ushort REAR_BEDROOM_LOFT_LIGHT = 19;
        public const ushort LOFT_LIGHT = 20;
        public const ushort FRONT_HALL_LIGHT = 21;
        public const ushort REAR_HALL_LIGHT = 22;
        public const ushort FRONT_BATHROOM_LIGHT = 23;
        public const ushort FRONT_BATHROOM_VANITY_LIGHT = 24;
        public const ushort FRONT_BATHROOM_CEILING_LIGHT = 25;
        public const ushort FRONT_BATHROOM_SHOWER_LIGHT = 26;
        public const ushort FRONT_BATHROOM_SCONCE_LIGHT = 27;
        public const ushort REAR_BATHROOM_VANITY_LIGHT = 28;
        public const ushort REAR_BATHROOM_CEILING_LIGHT = 29;
        public const ushort REAR_BATHROOM_SHOWER_LIGHT = 30;
        public const ushort REAR_BATHROOM_SCONCE_LIGHT = 31;
        public const ushort KITCHEN_CEILING_LIGHT = 32;
        public const ushort KITCHEN_SCONCE_LIGHT = 33;
        public const ushort KITCHEN_PENDANTS_LIGHT = 34;
        public const ushort KITCHEN_RANGE_LIGHT = 35;
        public const ushort KITCHEN_COUNTER_LIGHT = 36;
        public const ushort KITCHEN_BAR_LIGHT = 37;
        public const ushort KITCHEN_ISLAND_LIGHT = 38;
        public const ushort KITCHEN_CHANDELIER_LIGHT = 39;
        public const ushort KITCHEN_UNDER_CABINET_LIGHT = 40;
        public const ushort LIVING_ROOM_CEILING_LIGHT = 41;
        public const ushort LIVING_ROOM_SCONCE_LIGHT = 42;
        public const ushort LIVING_ROOM_PENDANTS_LIGHT = 43;
        public const ushort LIVING_ROOM_BAR_LIGHT = 44;
        public const ushort GARAGE_CEILING_LIGHT = 45;
        public const ushort GARAGE_CABINET_LIGHT = 46;
        public const ushort SECURITY_LIGHT = 47;
        public const ushort PORCH_LIGHT = 48;
        public const ushort AWNING_LIGHT = 49;
        public const ushort BATHROOM_LIGHT = 50;
        public const ushort BATHROOM_VANITY_LIGHT = 51;
        public const ushort BATHROOM_CEILING_LIGHT = 52;
        public const ushort BATHROOM_SHOWER_LIGHT = 53;
        public const ushort BATHROOM_SCONCE_LIGHT = 54;
        public const ushort HALL_LIGHT = 55;
        public const ushort BUNK_ROOM_LIGHT = 56;
        public const ushort BEDROOM_LIGHT = 57;
        public const ushort LIVING_ROOM_LIGHT = 58;
        public const ushort KITCHEN_LIGHT = 59;
        public const ushort LOUNGE_LIGHT = 60;
        public const ushort CEILING_LIGHT = 61;
        public const ushort ENTRY_LIGHT = 62;
        public const ushort BED_CEILING_LIGHT = 63;
        public const ushort BEDROOM_LAV_LIGHT = 64;
        public const ushort SHOWER_LIGHT = 65;
        public const ushort GALLEY_LIGHT = 66;
        public const ushort FRESH_TANK = 67;
        public const ushort GREY_TANK = 68;
        public const ushort BLACK_TANK = 69;
        public const ushort FUEL_TANK = 70;
        public const ushort GENERATOR_FUEL_TANK = 71;
        public const ushort AUXILLIARY_FUEL_TANK = 72;
        public const ushort FRONT_BATH_GREY_TANK = 73;
        public const ushort FRONT_BATH_FRESH_TANK = 74;
        public const ushort FRONT_BATH_BLACK_TANK = 75;
        public const ushort REAR_BATH_GREY_TANK = 76;
        public const ushort REAR_BATH_FRESH_TANK = 77;
        public const ushort REAR_BATH_BLACK_TANK = 78;
        public const ushort MAIN_BATH_GREY_TANK = 79;
        public const ushort MAIN_BATH_FRESH_TANK = 80;
        public const ushort MAIN_BATH_BLACK_TANK = 81;
        public const ushort GALLEY_GREY_TANK = 82;
        public const ushort GALLEY_FRESH_TANK = 83;
        public const ushort GALLEY_BLACK_TANK = 84;
        public const ushort KITCHEN_GREY_TANK = 85;
        public const ushort KITCHEN_FRESH_TANK = 86;
        public const ushort KITCHEN_BLACK_TANK = 87;
        public const ushort LANDING_GEAR = 88;
        public const ushort FRONT_STABILIZER = 89;
        public const ushort REAR_STABILIZER = 90;
        public const ushort TV_LIFT = 91;
        public const ushort BED_LIFT = 92;
        public const ushort BATH_VENT_COVER = 93;
        public const ushort DOOR_LOCK = 94;
        public const ushort GENERATOR = 95;
        public const ushort SLIDE = 96;
        public const ushort MAIN_SLIDE = 97;
        public const ushort BEDROOM_SLIDE = 98;
        public const ushort GALLEY_SLIDE = 99;
        public const ushort KITCHEN_SLIDE = 100;
        public const ushort CLOSET_SLIDE = 101;
        public const ushort OPTIONAL_SLIDE = 102;
        public const ushort DOOR_SIDE_SLIDE = 103;
        public const ushort OFF_DOOR_SLIDE = 104;
        public const ushort AWNING = 105;
        public const ushort LEVEL_UP_LEVELER = 106;
        public const ushort WATER_TANK_HEATER = 107;
        public const ushort MYRV_TOUCHSCREEN = 108;
        public const ushort LEVELER = 109;
        public const ushort VENT_COVER = 110;
        public const ushort FRONT_BEDROOM_VENT_COVER = 111;
        public const ushort BEDROOM_VENT_COVER = 112;
        public const ushort FRONT_BATHROOM_VENT_COVER = 113;
        public const ushort MAIN_BATHROOM_VENT_COVER = 114;
        public const ushort REAR_BATHROOM_VENT_COVER = 115;
        public const ushort KITCHEN_VENT_COVER = 116;
        public const ushort LIVING_ROOM_VENT_COVER = 117;
        public const ushort FOUR_LEG_TRUCK_CAMPLER_LEVELER = 118;
        public const ushort SIX_LEG_HALL_EFFECT_EJ_LEVELER = 119;
        public const ushort PATIO_LIGHT = 120;
        public const ushort HUTCH_LIGHT = 121;
        public const ushort SCARE_LIGHT = 122;
        public const ushort DINETTE_LIGHT = 123;
        public const ushort BAR_LIGHT = 124;
        public const ushort OVERHEAD_LIGHT = 125;
        public const ushort OVERHEAD_BAR_LIGHT = 126;
        public const ushort FOYER_LIGHT = 127;
        public const ushort RAMP_DOOR_LIGHT = 128;
        public const ushort ENTERTAINMENT_LIGHT = 129;
        public const ushort REAR_ENTRY_DOOR_LIGHT = 130;
        public const ushort CEILING_FAN_LIGHT = 131;
        public const ushort OVERHEAD_FAN_LIGHT = 132;
        public const ushort BUNK_SLIDE = 133;
        public const ushort BED_SLIDE = 134;
        public const ushort WARDROBE_SLIDE = 135;
        public const ushort ENTERTAINMENT_SLIDE = 136;
        public const ushort SOFA_SLIDE = 137;
        public const ushort PATIO_AWNING = 138;
        public const ushort REAR_AWNING = 139;
        public const ushort SIDE_AWNING = 140;
        public const ushort JACKS = 141;
        public const ushort LEVELER_2 = 142;
        public const ushort EXTERIOR_LIGHT = 143;
        public const ushort LOWER_ACCENT_LIGHT = 144;
        public const ushort UPPER_ACCENT_LIGHT = 145;
        public const ushort DS_SECURITY_LIGHT = 146;
        public const ushort ODS_SECURITY_LIGHT = 147;
        public const ushort SLIDE_IN_SLIDE = 148;
        public const ushort HITCH_LIGHT = 149;
        public const ushort CLOCK = 150;
        public const ushort TV = 151;
        public const ushort DVD = 152;
        public const ushort BLU_RAY = 153;
        public const ushort VCR = 154;
        public const ushort PVR = 155;
        public const ushort CABLE = 156;
        public const ushort SATELLITE = 157;
        public const ushort AUDIO = 158;
        public const ushort CD_PLAYER = 159;
        public const ushort TUNER = 160;
        public const ushort RADIO = 161;
        public const ushort SPEAKERS = 162;
        public const ushort GAME = 163;
        public const ushort CLOCK_RADIO = 164;
        public const ushort AUX = 165;
        public const ushort CLIMATE_ZONE = 166;
        public const ushort FIREPLACE = 167;
        public const ushort THERMOSTAT = 168;
        public const ushort FRONT_CAP_LIGHT = 169;
        public const ushort STEP_LIGHT = 170;
        public const ushort DS_FLOOD_LIGHT = 171;
        public const ushort INTERIOR_LIGHT = 172;
        public const ushort FRESH_TANK_HEATER = 173;
        public const ushort GREY_TANK_HEATER = 174;
        public const ushort BLACK_TANK_HEATER = 175;
        public const ushort LP_TANK = 176;
        public const ushort STALL_LIGHT = 177;
        public const ushort MAIN_LIGHT = 178;
        public const ushort BATH_LIGHT = 179;
        public const ushort BUNK_LIGHT = 180;
        public const ushort BED_LIGHT = 181;
        public const ushort CABINET_LIGHT = 182;
        public const ushort NETWORK_BRIDGE = 183;
        public const ushort ETHERNET_BRIDGE = 184;
        public const ushort WIFI_BRIDGE = 185;
        public const ushort IN_TRANSIT_POWER_DISCONNECT = 186;
        public const ushort LEVEL_UP_UNITY = 187;
        public const ushort TT_LEVELER = 188;
        public const ushort TRAVEL_TRAILER_LEVELER = 189;
        public const ushort FIFTH_WHEEL_LEVELER = 190;
        public const ushort FUEL_PUMP = 191;
        public const ushort MAIN_CLIMATE_ZONE = 192;
        public const ushort BEDROOM_CLIMATE_ZONE = 193;
        public const ushort GARAGE_CLIMATE_ZONE = 194;
        public const ushort COMPARTMENT_LIGHT = 195;
        public const ushort TRUNK_LIGHT = 196;
        public const ushort BAR_TV = 197;
        public const ushort BATHROOM_TV = 198;
        public const ushort BEDROOM_TV = 199;
        public const ushort BUNK_ROOM_TV = 200;
        public const ushort EXTERIOR_TV = 201;
        public const ushort FRONT_BATHROOM_TV = 202;
        public const ushort FRONT_BEDROOM_TV = 203;
        public const ushort GARAGE_TV = 204;
        public const ushort KITCHEN_TV = 205;
        public const ushort LIVING_ROOM_TV = 206;
        public const ushort LOFT_TV = 207;
        public const ushort LOUNGE_TV = 208;
        public const ushort MAIN_TV = 209;
        public const ushort PATIO_TV = 210;
        public const ushort REAR_BATHROOM_TV = 211;
        public const ushort REAR_BEDROOM_TV = 212;
        public const ushort BATHROOM_DOOR_LOCK = 213;
        public const ushort BEDROOM_DOOR_LOCK = 214;
        public const ushort FRONT_DOOR_LOCK = 215;
        public const ushort GARAGE_DOOR_LOCK = 216;
        public const ushort MAIN_DOOR_LOCK = 217;
        public const ushort PATIO_DOOR_LOCK = 218;
        public const ushort REAR_DOOR_LOCK = 219;
        public const ushort ACCENT_LIGHT = 220;
        public const ushort BATHROOM_ACCENT_LIGHT = 221;
        public const ushort BEDROOM_ACCENT_LIGHT = 222;
        public const ushort FRONT_BEDROOM_ACCENT_LIGHT = 223;
        public const ushort GARAGE_ACCENT_LIGHT = 224;
        public const ushort KITCHEN_ACCENT_LIGHT = 225;
        public const ushort PATIO_ACCENT_LIGHT = 226;
        public const ushort REAR_BEDROOM_ACCENT_LIGHT = 227;
        public const ushort BEDROOM_RADIO = 228;
        public const ushort BUNK_ROOM_RADIO = 229;
        public const ushort EXTERIOR_RADIO = 230;
        public const ushort FRONT_BEDROOM_RADIO = 231;
        public const ushort GARAGE_RADIO = 232;
        public const ushort KITCHEN_RADIO = 233;
        public const ushort LIVING_ROOM_RADIO = 234;
        public const ushort LOFT_RADIO = 235;
        public const ushort PATIO_RADIO = 236;
        public const ushort REAR_BEDROOM_RADIO = 237;
        public const ushort BEDROOM_ENTERTAINMENT_SYSTEM = 238;
        public const ushort BUNK_ROOM_ENTERTAINMENT_SYSTEM = 239;
        public const ushort ENTERTAINMENT_SYSTEM = 240;
        public const ushort EXTERIOR_ENTERTAINMENT_SYSTEM = 241;
        public const ushort FRONT_BEDROOM_ENTERTAINMENT_SYSTEM = 242;
        public const ushort GARAGE_ENTERTAINMENT_SYSTEM = 243;
        public const ushort KITCHEN_ENTERTAINMENT_SYSTEM = 244;
        public const ushort LIVING_ROOM_ENTERTAINMENT_SYSTEM = 245;
        public const ushort LOFT_ENTERTAINMENT_SYSTEM = 246;
        public const ushort MAIN_ENTERTAINMENT_SYSTEM = 247;
        public const ushort PATIO_ENTERTAINMENT_SYSTEM = 248;
        public const ushort REAR_BEDROOM_ENTERTAINMENT_SYSTEM = 249;
        public const ushort LEFT_STABILIZER = 250;
        public const ushort RIGHT_STABILIZER = 251;
        public const ushort STABILIZER = 252;
        public const ushort SOLAR = 253;
        public const ushort SOLAR_POWER = 254;
        public const ushort BATTERY = 255;
        public const ushort MAIN_BATTERY = 256;
        public const ushort AUX_BATTERY = 257;
        public const ushort SHORE_POWER = 258;
        public const ushort AC_POWER = 259;
        public const ushort AC_MAINS = 260;
        public const ushort AUX_POWER = 261;
        public const ushort OUTPUTS = 262;
        public const ushort RAMP_DOOR = 263;
        public const ushort FAN = 264;
        public const ushort BATH_FAN = 265;
        public const ushort REAR_FAN = 266;
        public const ushort FRONT_FAN = 267;
        public const ushort KITCHEN_FAN = 268;
        public const ushort CEILING_FAN = 269;
        public const ushort TANK_HEATER = 270;
        public const ushort FRONT_CEILING_LIGHT = 271;
        public const ushort REAR_CEILING_LIGHT = 272;
        public const ushort CARGO_LIGHT = 273;
        public const ushort FASCIA_LIGHT = 274;
        public const ushort SLIDE_CEILING_LIGHT = 275;
        public const ushort SLIDE_OVERHEAD_LIGHT = 276;
        public const ushort DECOR_LIGHT = 277;
        public const ushort READING_LIGHT = 278;
        public const ushort FRONT_READING_LIGHT = 279;
        public const ushort REAR_READING_LIGHT = 280;
        public const ushort LIVING_ROOM_CLIMATE_ZONE = 281;
        public const ushort FRONT_LIVING_ROOM_CLIMATE_ZONE = 282;
        public const ushort REAR_LIVING_ROOM_CLIMATE_ZONE = 283;
        public const ushort FRONT_BEDROOM_CLIMATE_ZONE = 284;
        public const ushort REAR_BEDROOM_CLIMATE_ZONE = 285;
        public const ushort BED_TILT = 286;
        public const ushort FRONT_BED_TILT = 287;
        public const ushort REAR_BED_TILT = 288;
        public const ushort MENS_LIGHT = 289;
        public const ushort WOMENS_LIGHT = 290;
        public const ushort SERVICE_LIGHT = 291;
        public const ushort ODS_FLOOD_LIGHT = 292;
        public const ushort UNDERBODY_ACCENT_LIGHT = 293;
        public const ushort SPEAKER_LIGHT = 294;
        public readonly ushort Value;
        private readonly FUNCTION_CLASS[] FunctionClassList;
        public readonly string Name;
        public readonly ICON Icon;

        public static IEnumerable<FUNCTION_NAME> GetEnumerator() = > (IEnumerable<FUNCTION_NAME>) FUNCTION_NAME.NameList;

        static FUNCTION_NAME()
        {
            FUNCTION_NAME functionName1 = new FUNCTION_NAME((ushort)1, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.MISCELLANEOUS
                }, "Diagnostic Tool", ICON.DIAGNOSTIC_TOOL);
            FUNCTION_NAME functionName2 = new FUNCTION_NAME((ushort)2, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.MISCELLANEOUS
                }, "MyRV Tablet", ICON.TABLET);
            FUNCTION_NAME functionName3 = new FUNCTION_NAME((ushort)3, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.GAS_WATER_HEATER
                }, "Gas Water Heater", ICON.GAS_WATER_HEATER);
            FUNCTION_NAME functionName4 = new FUNCTION_NAME((ushort)4, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.ELECTRIC_WATER_HEATER
                }, "Electric Water Heater", ICON.ELECTRIC_WATER_HEATER);
            FUNCTION_NAME functionName5 = new FUNCTION_NAME((ushort)5, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.PUMP
                }, "Water Pump", ICON.WATER_PUMP);
            FUNCTION_NAME functionName6 = new FUNCTION_NAME((ushort)6, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT
                }, "Bath Vent", ICON.VENT);
            FUNCTION_NAME functionName7 = new FUNCTION_NAME((ushort)7, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Light", ICON.LIGHT);
            FUNCTION_NAME functionName8 = new FUNCTION_NAME((ushort)8, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Flood Light", ICON.LIGHT);
            FUNCTION_NAME functionName9 = new FUNCTION_NAME((ushort)9, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Work Light", ICON.LIGHT);
            FUNCTION_NAME functionName10 = new FUNCTION_NAME((ushort)10, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName11 = new FUNCTION_NAME((ushort)11, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Overhead Light", ICON.LIGHT);
            FUNCTION_NAME functionName12 = new FUNCTION_NAME((ushort)12, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Vanity Light", ICON.LIGHT);
            FUNCTION_NAME functionName13 = new FUNCTION_NAME((ushort)13, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName14 = new FUNCTION_NAME((ushort)14, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Loft Light", ICON.LIGHT);
            FUNCTION_NAME functionName15 = new FUNCTION_NAME((ushort)15, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName16 = new FUNCTION_NAME((ushort)16, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Overhead Light", ICON.LIGHT);
            FUNCTION_NAME functionName17 = new FUNCTION_NAME((ushort)17, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Vanity Light", ICON.LIGHT);
            FUNCTION_NAME functionName18 = new FUNCTION_NAME((ushort)18, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName19 = new FUNCTION_NAME((ushort)19, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Loft Light", ICON.LIGHT);
            FUNCTION_NAME functionName20 = new FUNCTION_NAME((ushort)20, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Loft Light", ICON.LIGHT);
            FUNCTION_NAME functionName21 = new FUNCTION_NAME((ushort)21, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Hall Light", ICON.LIGHT);
            FUNCTION_NAME functionName22 = new FUNCTION_NAME((ushort)22, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Hall Light", ICON.LIGHT);
            FUNCTION_NAME functionName23 = new FUNCTION_NAME((ushort)23, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bathroom Light", ICON.LIGHT);
            FUNCTION_NAME functionName24 = new FUNCTION_NAME((ushort)24, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bathroom Vanity Light", ICON.LIGHT);
            FUNCTION_NAME functionName25 = new FUNCTION_NAME((ushort)25, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bathroom Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName26 = new FUNCTION_NAME((ushort)26, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bathroom Shower Light", ICON.LIGHT);
            FUNCTION_NAME functionName27 = new FUNCTION_NAME((ushort)27, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bathroom Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName28 = new FUNCTION_NAME((ushort)28, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bathroom Vanity Light", ICON.LIGHT);
            FUNCTION_NAME functionName29 = new FUNCTION_NAME((ushort)29, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bathroom Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName30 = new FUNCTION_NAME((ushort)30, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bathroom Shower Light", ICON.LIGHT);
            FUNCTION_NAME functionName31 = new FUNCTION_NAME((ushort)31, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bathroom Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName32 = new FUNCTION_NAME((ushort)32, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName33 = new FUNCTION_NAME((ushort)33, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName34 = new FUNCTION_NAME((ushort)34, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Pendants Light", ICON.LIGHT);
            FUNCTION_NAME functionName35 = new FUNCTION_NAME((ushort)35, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Range Light", ICON.LIGHT);
            FUNCTION_NAME functionName36 = new FUNCTION_NAME((ushort)36, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Counter Light", ICON.LIGHT);
            FUNCTION_NAME functionName37 = new FUNCTION_NAME((ushort)37, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Bar Light", ICON.LIGHT);
            FUNCTION_NAME functionName38 = new FUNCTION_NAME((ushort)38, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Island Light", ICON.LIGHT);
            FUNCTION_NAME functionName39 = new FUNCTION_NAME((ushort)39, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Chandelier Light", ICON.LIGHT);
            FUNCTION_NAME functionName40 = new FUNCTION_NAME((ushort)40, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Under Cabinet Light", ICON.LIGHT);
            FUNCTION_NAME functionName41 = new FUNCTION_NAME((ushort)41, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Living Room Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName42 = new FUNCTION_NAME((ushort)42, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Living Room Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName43 = new FUNCTION_NAME((ushort)43, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Living Room Pendants Light", ICON.LIGHT);
            FUNCTION_NAME functionName44 = new FUNCTION_NAME((ushort)44, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Living Room Bar Light", ICON.LIGHT);
            FUNCTION_NAME functionName45 = new FUNCTION_NAME((ushort)45, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Garage Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName46 = new FUNCTION_NAME((ushort)46, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Garage Cabinet Light", ICON.LIGHT);
            FUNCTION_NAME functionName47 = new FUNCTION_NAME((ushort)47, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Security Light", ICON.LIGHT);
            FUNCTION_NAME functionName48 = new FUNCTION_NAME((ushort)48, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Porch Light", ICON.LIGHT);
            FUNCTION_NAME functionName49 = new FUNCTION_NAME((ushort)49, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Awning Light", ICON.LIGHT);
            FUNCTION_NAME functionName50 = new FUNCTION_NAME((ushort)50, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Light", ICON.LIGHT);
            FUNCTION_NAME functionName51 = new FUNCTION_NAME((ushort)51, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Vanity Light", ICON.LIGHT);
            FUNCTION_NAME functionName52 = new FUNCTION_NAME((ushort)52, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName53 = new FUNCTION_NAME((ushort)53, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Shower Light", ICON.LIGHT);
            FUNCTION_NAME functionName54 = new FUNCTION_NAME((ushort)54, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Sconce Light", ICON.LIGHT);
            FUNCTION_NAME functionName55 = new FUNCTION_NAME((ushort)55, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Hall Light", ICON.LIGHT);
            FUNCTION_NAME functionName56 = new FUNCTION_NAME((ushort)56, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bunk Room Light", ICON.LIGHT);
            FUNCTION_NAME functionName57 = new FUNCTION_NAME((ushort)57, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bedroom Light", ICON.LIGHT);
            FUNCTION_NAME functionName58 = new FUNCTION_NAME((ushort)58, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Living Room Light", ICON.LIGHT);
            FUNCTION_NAME functionName59 = new FUNCTION_NAME((ushort)59, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Light", ICON.LIGHT);
            FUNCTION_NAME functionName60 = new FUNCTION_NAME((ushort)60, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Lounge Light", ICON.LIGHT);
            FUNCTION_NAME functionName61 = new FUNCTION_NAME((ushort)61, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName62 = new FUNCTION_NAME((ushort)62, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Entry Light", ICON.LIGHT);
            FUNCTION_NAME functionName63 = new FUNCTION_NAME((ushort)63, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bed Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName64 = new FUNCTION_NAME((ushort)64, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bedroom Lav Light", ICON.LIGHT);
            FUNCTION_NAME functionName65 = new FUNCTION_NAME((ushort)65, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Shower Light", ICON.LIGHT);
            FUNCTION_NAME functionName66 = new FUNCTION_NAME((ushort)66, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Galley Light", ICON.LIGHT);
            FUNCTION_NAME functionName67 = new FUNCTION_NAME((ushort)67, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName68 = new FUNCTION_NAME((ushort)68, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName69 = new FUNCTION_NAME((ushort)69, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName70 = new FUNCTION_NAME((ushort)70, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Fuel Tank", ICON.FUEL_TANK);
            FUNCTION_NAME functionName71 = new FUNCTION_NAME((ushort)71, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Generator Fuel Tank", ICON.FUEL_TANK);
            FUNCTION_NAME functionName72 = new FUNCTION_NAME((ushort)72, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Auxilliary Fuel Tank", ICON.FUEL_TANK);
            FUNCTION_NAME functionName73 = new FUNCTION_NAME((ushort)73, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Front Bath Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName74 = new FUNCTION_NAME((ushort)74, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Front Bath Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName75 = new FUNCTION_NAME((ushort)75, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Front Bath Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName76 = new FUNCTION_NAME((ushort)76, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Rear Bath Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName77 = new FUNCTION_NAME((ushort)77, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Rear Bath Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName78 = new FUNCTION_NAME((ushort)78, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Rear Bath Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName79 = new FUNCTION_NAME((ushort)79, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Main Bath Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName80 = new FUNCTION_NAME((ushort)80, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Main Bath Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName81 = new FUNCTION_NAME((ushort)81, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Main Bath Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName82 = new FUNCTION_NAME((ushort)82, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Galley Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName83 = new FUNCTION_NAME((ushort)83, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Galley Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName84 = new FUNCTION_NAME((ushort)84, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Galley Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName85 = new FUNCTION_NAME((ushort)85, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Kitchen Grey Tank", ICON.GREY_WATER_TANK);
            FUNCTION_NAME functionName86 = new FUNCTION_NAME((ushort)86, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Kitchen Fresh Tank", ICON.FRESH_WATER_TANK);
            FUNCTION_NAME functionName87 = new FUNCTION_NAME((ushort)87, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TANK
                }, "Kitchen Black Tank", ICON.BLACK_WATER_TANK);
            FUNCTION_NAME functionName88 = new FUNCTION_NAME((ushort)88, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LANDING_GEAR
                }, "Landing Gear", ICON.LANDING_GEAR);
            FUNCTION_NAME functionName89 = new FUNCTION_NAME((ushort)89, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.STABILIZER
                }, "Front Stabilizer", ICON.STABILIZER);
            FUNCTION_NAME functionName90 = new FUNCTION_NAME((ushort)90, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.STABILIZER
                }, "Rear Stabilizer", ICON.STABILIZER);
            FUNCTION_NAME functionName91 = new FUNCTION_NAME((ushort)91, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.TV_LIFT
                }, "TV Lift", ICON.TV_LIFT);
            FUNCTION_NAME functionName92 = new FUNCTION_NAME((ushort)92, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.BED_LIFT
                }, "Bed Lift", ICON.BED_LIFT);
            FUNCTION_NAME functionName93 = new FUNCTION_NAME((ushort)93, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Bath Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName94 = new FUNCTION_NAME((ushort)94, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName95 = new FUNCTION_NAME((ushort)95, new FUNCTION_CLASS[2]
                {
                  FUNCTION_CLASS.GENERATOR,
                  FUNCTION_CLASS.HOUR_METER
                }, "Generator", ICON.GENERATOR);
            FUNCTION_NAME functionName96 = new FUNCTION_NAME((ushort)96, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Slide", ICON.SLIDE);
            FUNCTION_NAME functionName97 = new FUNCTION_NAME((ushort)97, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Main Slide", ICON.SLIDE);
            FUNCTION_NAME functionName98 = new FUNCTION_NAME((ushort)98, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Bedroom Slide", ICON.SLIDE);
            FUNCTION_NAME functionName99 = new FUNCTION_NAME((ushort)99, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Galley Slide", ICON.SLIDE);
            FUNCTION_NAME functionName100 = new FUNCTION_NAME((ushort)100, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Kitchen Slide", ICON.SLIDE);
            FUNCTION_NAME functionName101 = new FUNCTION_NAME((ushort)101, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Closet Slide", ICON.SLIDE);
            FUNCTION_NAME functionName102 = new FUNCTION_NAME((ushort)102, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Optional Slide", ICON.SLIDE);
            FUNCTION_NAME functionName103 = new FUNCTION_NAME((ushort)103, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Door Side Slide", ICON.SLIDE);
            FUNCTION_NAME functionName104 = new FUNCTION_NAME((ushort)104, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Off-Door Slide", ICON.SLIDE);
            FUNCTION_NAME functionName105 = new FUNCTION_NAME((ushort)105, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.AWNING
                }, "Awning", ICON.AWNING);
            FUNCTION_NAME functionName106 = new FUNCTION_NAME((ushort)106, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "Level Up Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName107 = new FUNCTION_NAME((ushort)107, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.WATER_TANK_HEATER
                }, "Water Tank Heater", ICON.WATER_TANK_HEATER);
            FUNCTION_NAME functionName108 = new FUNCTION_NAME((ushort)108, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.MISCELLANEOUS
                }, "MyRV Touchscreen", ICON.TOUCHSCREEN_SWITCH);
            FUNCTION_NAME functionName109 = new FUNCTION_NAME((ushort)109, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName110 = new FUNCTION_NAME((ushort)110, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName111 = new FUNCTION_NAME((ushort)111, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Front Bedroom Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName112 = new FUNCTION_NAME((ushort)112, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Bedroom Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName113 = new FUNCTION_NAME((ushort)113, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Front Bath Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName114 = new FUNCTION_NAME((ushort)114, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Main Bath Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName115 = new FUNCTION_NAME((ushort)115, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Rear Bath Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName116 = new FUNCTION_NAME((ushort)116, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Kitchen Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName117 = new FUNCTION_NAME((ushort)117, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.VENT_COVER
                }, "Living Room Vent Cover", ICON.VENT_COVER);
            FUNCTION_NAME functionName118 = new FUNCTION_NAME((ushort)118, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "4-Leg Truck Camper Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName119 = new FUNCTION_NAME((ushort)119, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "6-Leg Hall Effect EJ Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName120 = new FUNCTION_NAME((ushort)120, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Patio Light", ICON.LIGHT);
            FUNCTION_NAME functionName121 = new FUNCTION_NAME((ushort)121, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Hutch Light", ICON.LIGHT);
            FUNCTION_NAME functionName122 = new FUNCTION_NAME((ushort)122, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Scare Light", ICON.LIGHT);
            FUNCTION_NAME functionName123 = new FUNCTION_NAME((ushort)123, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Dinette Light", ICON.LIGHT);
            FUNCTION_NAME functionName124 = new FUNCTION_NAME((ushort)124, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bar Light", ICON.LIGHT);
            FUNCTION_NAME functionName125 = new FUNCTION_NAME((ushort)125, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Overhead Light", ICON.LIGHT);
            FUNCTION_NAME functionName126 = new FUNCTION_NAME((ushort)126, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Overhead Bar Light", ICON.LIGHT);
            FUNCTION_NAME functionName127 = new FUNCTION_NAME((ushort)sbyte.MaxValue, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Foyer Light", ICON.LIGHT);
            FUNCTION_NAME functionName128 = new FUNCTION_NAME((ushort)128, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Ramp Door Light", ICON.LIGHT);
            FUNCTION_NAME functionName129 = new FUNCTION_NAME((ushort)129, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Entertainment Light", ICON.LIGHT);
            FUNCTION_NAME functionName130 = new FUNCTION_NAME((ushort)130, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Entry Door Light", ICON.LIGHT);
            FUNCTION_NAME functionName131 = new FUNCTION_NAME((ushort)131, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Ceiling Fan Light", ICON.LIGHT);
            FUNCTION_NAME functionName132 = new FUNCTION_NAME((ushort)132, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Overhead Fan Light", ICON.LIGHT);
            FUNCTION_NAME functionName133 = new FUNCTION_NAME((ushort)133, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Bunk Slide", ICON.SLIDE);
            FUNCTION_NAME functionName134 = new FUNCTION_NAME((ushort)134, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Bed Slide", ICON.SLIDE);
            FUNCTION_NAME functionName135 = new FUNCTION_NAME((ushort)135, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Wardrobe Slide", ICON.SLIDE);
            FUNCTION_NAME functionName136 = new FUNCTION_NAME((ushort)136, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Entertainment Slide", ICON.SLIDE);
            FUNCTION_NAME functionName137 = new FUNCTION_NAME((ushort)137, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Sofa Slide", ICON.SLIDE);
            FUNCTION_NAME functionName138 = new FUNCTION_NAME((ushort)138, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.AWNING
                }, "Patio Awning", ICON.AWNING);
            FUNCTION_NAME functionName139 = new FUNCTION_NAME((ushort)139, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.AWNING
                }, "Rear Awning", ICON.AWNING);
            FUNCTION_NAME functionName140 = new FUNCTION_NAME((ushort)140, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.AWNING
                }, "Side Awning", ICON.AWNING);
            FUNCTION_NAME functionName141 = new FUNCTION_NAME((ushort)141, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER_2
                }, "Jacks", ICON.JACKS);
            FUNCTION_NAME functionName142 = new FUNCTION_NAME((ushort)142, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER_2
                }, "Leveler", ICON.JACKS);
            FUNCTION_NAME functionName143 = new FUNCTION_NAME((ushort)143, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Exterior Light", ICON.LIGHT);
            FUNCTION_NAME functionName144 = new FUNCTION_NAME((ushort)144, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Lower Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName145 = new FUNCTION_NAME((ushort)145, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Upper Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName146 = new FUNCTION_NAME((ushort)146, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "DS Security Light", ICON.LIGHT);
            FUNCTION_NAME functionName147 = new FUNCTION_NAME((ushort)147, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "ODS Security Light", ICON.LIGHT);
            FUNCTION_NAME functionName148 = new FUNCTION_NAME((ushort)148, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.SLIDE
                }, "Slide In Slide", ICON.SLIDE);
            FUNCTION_NAME functionName149 = new FUNCTION_NAME((ushort)149, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Hitch Light", ICON.LIGHT);
            FUNCTION_NAME functionName150 = new FUNCTION_NAME((ushort)150, new FUNCTION_CLASS[2]
                {
                  FUNCTION_CLASS.REAL_TIME_CLOCK,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Clock", ICON.CLOCK);
            FUNCTION_NAME functionName151 = new FUNCTION_NAME((ushort)151, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, nameof(TV), ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName152 = new FUNCTION_NAME((ushort)152, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, nameof(DVD), ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName153 = new FUNCTION_NAME((ushort)153, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Blu-ray", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName154 = new FUNCTION_NAME((ushort)154, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, nameof(VCR), ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName155 = new FUNCTION_NAME((ushort)155, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, nameof(PVR), ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName156 = new FUNCTION_NAME((ushort)156, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Cable", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName157 = new FUNCTION_NAME((ushort)157, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Satellite", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName158 = new FUNCTION_NAME((ushort)158, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Audio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName159 = new FUNCTION_NAME((ushort)159, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "CD Player", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName160 = new FUNCTION_NAME((ushort)160, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Tuner", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName161 = new FUNCTION_NAME((ushort)161, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName162 = new FUNCTION_NAME((ushort)162, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Speakers", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName163 = new FUNCTION_NAME((ushort)163, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Game", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName164 = new FUNCTION_NAME((ushort)164, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Clock Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName165 = new FUNCTION_NAME((ushort)165, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Aux", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName166 = new FUNCTION_NAME((ushort)166, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Climate zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName167 = new FUNCTION_NAME((ushort)167, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Fireplace", ICON.FIREPLACE);
            FUNCTION_NAME functionName168 = new FUNCTION_NAME((ushort)168, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Thermostat", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName169 = new FUNCTION_NAME((ushort)169, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Cap Light", ICON.LIGHT);
            FUNCTION_NAME functionName170 = new FUNCTION_NAME((ushort)170, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Step Light", ICON.LIGHT);
            FUNCTION_NAME functionName171 = new FUNCTION_NAME((ushort)171, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "DS Flood Light", ICON.LIGHT);
            FUNCTION_NAME functionName172 = new FUNCTION_NAME((ushort)172, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Interior Light", ICON.LIGHT);
            FUNCTION_NAME functionName173 = new FUNCTION_NAME((ushort)173, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.WATER_TANK_HEATER
                }, "Fresh Tank Heater", ICON.WATER_TANK_HEATER);
            FUNCTION_NAME functionName174 = new FUNCTION_NAME((ushort)174, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.WATER_TANK_HEATER
                }, "Grey Tank Heater", ICON.WATER_TANK_HEATER);
            FUNCTION_NAME functionName175 = new FUNCTION_NAME((ushort)175, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.WATER_TANK_HEATER
                }, "Black Tank Heater", ICON.WATER_TANK_HEATER);
            FUNCTION_NAME functionName176 = new FUNCTION_NAME((ushort)176, new FUNCTION_CLASS[2]
                {
                  FUNCTION_CLASS.LP_TANK_VALVE,
                  FUNCTION_CLASS.TANK
                }, "LP Tank", ICON.GAS_WATER_HEATER);
            FUNCTION_NAME functionName177 = new FUNCTION_NAME((ushort)177, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Stall Light", ICON.LIGHT);
            FUNCTION_NAME functionName178 = new FUNCTION_NAME((ushort)178, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Main Light", ICON.LIGHT);
            FUNCTION_NAME functionName179 = new FUNCTION_NAME((ushort)179, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bath Light", ICON.LIGHT);
            FUNCTION_NAME functionName180 = new FUNCTION_NAME((ushort)180, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bunk Light", ICON.LIGHT);
            FUNCTION_NAME functionName181 = new FUNCTION_NAME((ushort)181, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bed Light", ICON.LIGHT);
            FUNCTION_NAME functionName182 = new FUNCTION_NAME((ushort)182, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Cabinet Light", ICON.LIGHT);
            FUNCTION_NAME functionName183 = new FUNCTION_NAME((ushort)183, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.NETWORK_BRIDGE
                }, "Network Bridge", ICON.NETWORK_BRIDGE);
            FUNCTION_NAME functionName184 = new FUNCTION_NAME((ushort)184, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.NETWORK_BRIDGE
                }, "Ethernet Bridge", ICON.NETWORK_BRIDGE);
            FUNCTION_NAME functionName185 = new FUNCTION_NAME((ushort)185, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.NETWORK_BRIDGE
                }, "WiFi Bridge", ICON.NETWORK_BRIDGE);
            FUNCTION_NAME functionName186 = new FUNCTION_NAME((ushort)186, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IPDM
                }, "In Transit Power Disconnect", ICON.IPDM);
            FUNCTION_NAME functionName187 = new FUNCTION_NAME((ushort)187, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "Level Up Unity", ICON.LEVELER);
            FUNCTION_NAME functionName188 = new FUNCTION_NAME((ushort)188, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "TT Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName189 = new FUNCTION_NAME((ushort)189, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "Travel Trailer Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName190 = new FUNCTION_NAME((ushort)190, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LEVELER
                }, "Fifth Wheel Leveler", ICON.LEVELER);
            FUNCTION_NAME functionName191 = new FUNCTION_NAME((ushort)191, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.PUMP
                }, "Fuel Pump", ICON.FUEL_PUMP);
            FUNCTION_NAME functionName192 = new FUNCTION_NAME((ushort)192, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Main Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName193 = new FUNCTION_NAME((ushort)193, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Bedroom Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName194 = new FUNCTION_NAME((ushort)194, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Garage Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName195 = new FUNCTION_NAME((ushort)195, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Compartment Light", ICON.LIGHT);
            FUNCTION_NAME functionName196 = new FUNCTION_NAME((ushort)196, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Trunk Light", ICON.LIGHT);
            FUNCTION_NAME functionName197 = new FUNCTION_NAME((ushort)197, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bar TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName198 = new FUNCTION_NAME((ushort)198, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bathroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName199 = new FUNCTION_NAME((ushort)199, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bedroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName200 = new FUNCTION_NAME((ushort)200, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bunk Room TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName201 = new FUNCTION_NAME((ushort)201, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Exterior TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName202 = new FUNCTION_NAME((ushort)202, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Front Bathroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName203 = new FUNCTION_NAME((ushort)203, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Front Bedroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName204 = new FUNCTION_NAME((ushort)204, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Garage TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName205 = new FUNCTION_NAME((ushort)205, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Kitchen TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName206 = new FUNCTION_NAME((ushort)206, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Living Room TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName207 = new FUNCTION_NAME((ushort)207, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Loft TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName208 = new FUNCTION_NAME((ushort)208, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Lounge TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName209 = new FUNCTION_NAME((ushort)209, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Main TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName210 = new FUNCTION_NAME((ushort)210, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Patio TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName211 = new FUNCTION_NAME((ushort)211, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Rear Bathroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName212 = new FUNCTION_NAME((ushort)212, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Rear Bedroom TV", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName213 = new FUNCTION_NAME((ushort)213, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Bathroom Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName214 = new FUNCTION_NAME((ushort)214, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Bedroom Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName215 = new FUNCTION_NAME((ushort)215, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Front Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName216 = new FUNCTION_NAME((ushort)216, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Garage Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName217 = new FUNCTION_NAME((ushort)217, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Main Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName218 = new FUNCTION_NAME((ushort)218, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Patio Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName219 = new FUNCTION_NAME((ushort)219, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LOCK
                }, "Rear Door Lock", ICON.LOCK);
            FUNCTION_NAME functionName220 = new FUNCTION_NAME((ushort)220, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName221 = new FUNCTION_NAME((ushort)221, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bathroom Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName222 = new FUNCTION_NAME((ushort)222, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Bedroom Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName223 = new FUNCTION_NAME((ushort)223, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Bedroom Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName224 = new FUNCTION_NAME((ushort)224, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Garage Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName225 = new FUNCTION_NAME((ushort)225, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Kitchen Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName226 = new FUNCTION_NAME((ushort)226, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Patio Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName227 = new FUNCTION_NAME((ushort)227, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Bedroom Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName228 = new FUNCTION_NAME((ushort)228, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bedroom Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName229 = new FUNCTION_NAME((ushort)229, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bunk Room Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName230 = new FUNCTION_NAME((ushort)230, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Exterior Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName231 = new FUNCTION_NAME((ushort)231, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Front Bedroom Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName232 = new FUNCTION_NAME((ushort)232, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Garage Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName233 = new FUNCTION_NAME((ushort)233, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Kitchen Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName234 = new FUNCTION_NAME((ushort)234, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Living Room Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName235 = new FUNCTION_NAME((ushort)235, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Loft Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName236 = new FUNCTION_NAME((ushort)236, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Patio Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName237 = new FUNCTION_NAME((ushort)237, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Rear Bedroom Radio", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName238 = new FUNCTION_NAME((ushort)238, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bedroom Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName239 = new FUNCTION_NAME((ushort)239, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Bunk Room Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName240 = new FUNCTION_NAME((ushort)240, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName241 = new FUNCTION_NAME((ushort)241, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Exterior Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName242 = new FUNCTION_NAME((ushort)242, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Front Bedroom Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName243 = new FUNCTION_NAME((ushort)243, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Garage Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName244 = new FUNCTION_NAME((ushort)244, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Kitchen Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName245 = new FUNCTION_NAME((ushort)245, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Living Room Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName246 = new FUNCTION_NAME((ushort)246, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Loft Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName247 = new FUNCTION_NAME((ushort)247, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Main Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName248 = new FUNCTION_NAME((ushort)248, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Patio Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName249 = new FUNCTION_NAME((ushort)249, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.IR_REMOTE_CONTROL
                }, "Rear Bedroom Entertainment System", ICON.IR_REMOTE_CONTROL);
            FUNCTION_NAME functionName250 = new FUNCTION_NAME((ushort)250, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.STABILIZER
                }, "Left Stabilizer", ICON.STABILIZER);
            FUNCTION_NAME functionName251 = new FUNCTION_NAME((ushort)251, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.STABILIZER
                }, "Right Stabilizer", ICON.STABILIZER);
            FUNCTION_NAME functionName252 = new FUNCTION_NAME((ushort)252, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.STABILIZER
                }, "Stabilizer", ICON.STABILIZER);
            FUNCTION_NAME functionName253 = new FUNCTION_NAME((ushort)253, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Solar", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName254 = new FUNCTION_NAME((ushort)254, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Solar Power", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName255 = new FUNCTION_NAME((ushort)byte.MaxValue, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Battery", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName256 = new FUNCTION_NAME((ushort)256, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Main Battery", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName257 = new FUNCTION_NAME((ushort)257, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Aux Battery", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName258 = new FUNCTION_NAME((ushort)258, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Shore Power", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName259 = new FUNCTION_NAME((ushort)259, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "AC Power", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName260 = new FUNCTION_NAME((ushort)260, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "AC Mains", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName261 = new FUNCTION_NAME((ushort)261, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Aux Power", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName262 = new FUNCTION_NAME((ushort)262, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.POWER
                }, "Outputs", ICON.POWER_MANAGER);
            FUNCTION_NAME functionName263 = new FUNCTION_NAME((ushort)263, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.DOOR
                }, "Ramp Door", ICON.DOOR);
            FUNCTION_NAME functionName264 = new FUNCTION_NAME((ushort)264, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Fan", ICON.FAN);
            FUNCTION_NAME functionName265 = new FUNCTION_NAME((ushort)265, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Bath Fan", ICON.FAN);
            FUNCTION_NAME functionName266 = new FUNCTION_NAME((ushort)266, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Rear Fan", ICON.FAN);
            FUNCTION_NAME functionName267 = new FUNCTION_NAME((ushort)267, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Front Fan", ICON.FAN);
            FUNCTION_NAME functionName268 = new FUNCTION_NAME((ushort)268, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Kitchen Fan", ICON.FAN);
            FUNCTION_NAME functionName269 = new FUNCTION_NAME((ushort)269, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.FAN
                }, "Ceiling Fan", ICON.FAN);
            FUNCTION_NAME functionName270 = new FUNCTION_NAME((ushort)270, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.WATER_TANK_HEATER
                }, "Tank Heater", ICON.WATER_TANK_HEATER);
            FUNCTION_NAME functionName271 = new FUNCTION_NAME((ushort)271, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName272 = new FUNCTION_NAME((ushort)272, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName273 = new FUNCTION_NAME((ushort)273, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Cargo Light", ICON.LIGHT);
            FUNCTION_NAME functionName274 = new FUNCTION_NAME((ushort)274, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Fascia Light", ICON.LIGHT);
            FUNCTION_NAME functionName275 = new FUNCTION_NAME((ushort)275, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Slide Ceiling Light", ICON.LIGHT);
            FUNCTION_NAME functionName276 = new FUNCTION_NAME((ushort)276, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Slide Overhead Light", ICON.LIGHT);
            FUNCTION_NAME functionName277 = new FUNCTION_NAME((ushort)277, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "D�cor Light", ICON.LIGHT);
            FUNCTION_NAME functionName278 = new FUNCTION_NAME((ushort)278, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Reading Light", ICON.LIGHT);
            FUNCTION_NAME functionName279 = new FUNCTION_NAME((ushort)279, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Front Reading Light", ICON.LIGHT);
            FUNCTION_NAME functionName280 = new FUNCTION_NAME((ushort)280, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Rear Reading Light", ICON.LIGHT);
            FUNCTION_NAME functionName281 = new FUNCTION_NAME((ushort)281, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Living Room Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName282 = new FUNCTION_NAME((ushort)282, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Front Living Room Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName283 = new FUNCTION_NAME((ushort)283, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Rear Living Room Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName284 = new FUNCTION_NAME((ushort)284, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Front Bedroom Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName285 = new FUNCTION_NAME((ushort)285, new FUNCTION_CLASS[3]
                {
                  FUNCTION_CLASS.HVAC_CONTROL,
                  FUNCTION_CLASS.IR_REMOTE_CONTROL,
                  FUNCTION_CLASS.TEMPERATURE_SENSOR
                }, "Rear Bedroom Climate Zone", ICON.HVAC_CONTROL);
            FUNCTION_NAME functionName286 = new FUNCTION_NAME((ushort)286, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.BED_LIFT
                }, "Bed Tilt", ICON.BED_LIFT);
            FUNCTION_NAME functionName287 = new FUNCTION_NAME((ushort)287, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.BED_LIFT
                }, "Front Bed Tilt", ICON.BED_LIFT);
            FUNCTION_NAME functionName288 = new FUNCTION_NAME((ushort)288, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.BED_LIFT
                }, "Rear Bed Tilt", ICON.BED_LIFT);
            FUNCTION_NAME functionName289 = new FUNCTION_NAME((ushort)289, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Men's Light", ICON.LIGHT);
            FUNCTION_NAME functionName290 = new FUNCTION_NAME((ushort)290, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Women's Light", ICON.LIGHT);
            FUNCTION_NAME functionName291 = new FUNCTION_NAME((ushort)291, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Service Light", ICON.LIGHT);
            FUNCTION_NAME functionName292 = new FUNCTION_NAME((ushort)292, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "ODS Flood Light", ICON.LIGHT);
            FUNCTION_NAME functionName293 = new FUNCTION_NAME((ushort)293, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Underbody Accent Light", ICON.LIGHT);
            FUNCTION_NAME functionName294 = new FUNCTION_NAME((ushort)294, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.LIGHT
                }, "Speaker Light", ICON.LIGHT);
        }

        private FUNCTION_NAME(ushort value)
            : this(value, new FUNCTION_CLASS[1]
                {
                  FUNCTION_CLASS.UNKNOWN
                }, "UNKNOWN_" + value.ToString("X4"), ICON.UNKNOWN)
        {
        }

        private FUNCTION_NAME(
            ushort value,
            FUNCTION_CLASS[] function_class_list,
            string name,
            ICON icon)
        {
            this.Value = value;
            this.FunctionClassList = function_class_list;
            this.Name = name.Trim();
            this.Icon = icon;
            if (value <= (ushort)0)
                return;
            FUNCTION_NAME.Lookup.Add(value, this);
            FUNCTION_NAME.NameList.Add(this);
        }

        public IEnumerable<FUNCTION_CLASS> FunctionClasses = > (IEnumerable<FUNCTION_CLASS>) this.FunctionClassList;

        public bool IsValid = > this != null && this.Value > (ushort)0;

        public static implicit operator ushort(FUNCTION_NAME msg) = > msg.Value;

        public static implicit operator FUNCTION_NAME(ushort value)
        {
            FUNCTION_NAME functionName;
            if (FUNCTION_NAME.Lookup.TryGetValue(value, out functionName))
                return functionName;
            return value == (ushort)0 ? FUNCTION_NAME.UNKNOWN : new FUNCTION_NAME(value);
        }

        public static implicit operator FUNCTION_NAME(string s)
        {
            s = s.ToUpper().Trim();
            foreach(FUNCTION_NAME functionName in FUNCTION_NAME.GetEnumerator())
            {
                if (functionName.ToString().ToUpper() == s)
                    return functionName;
            }
            return FUNCTION_NAME.UNKNOWN;
        }

        public override string ToString() = > this.Name;
    }
}

// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.ICON
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

namespace IDS.Core.IDS_CAN
{
    public enum ICON : ushort
    {
        UNKNOWN,
        DIAGNOSTIC_TOOL,
        DIAGNOSTIC_TOOL_UNKNOWN,
        TABLET,
        TABLET_UNKNOWN,
        LATCHING_RELAY,
        LATCHING_RELAY_UNKNOWN,
        MOMENTARY_RELAY,
        MOMENTARY_RELAY_UNKNOWN,
        LATCHING_H_BRIDGE,
        LATCHING_H_BRIDGE_UNKNOWN,
        MOMENTARY_H_BRIDGE,
        MOMENTARY_H_BRIDGE_UNKNOWN,
        LEVELER,
        LEVELER_UNKNOWN,
        SWITCH,
        SWITCH_UNKNOWN,
        TOUCHSCREEN_SWITCH,
        TOUCHSCREEN_SWITCH_UNKNOWN,
        TANK_SENSOR,
        TANK_SENSOR_UNKNOWN,
        AWNING,
        VENT,
        VENT_COVER,
        BED_LIFT,
        BLACK_WATER_TANK,
        LOCK,
        ELECTRIC_WATER_HEATER,
        FRESH_WATER_TANK,
        FRONT_STABILIZER,
        FUEL_TANK,
        GAS_WATER_HEATER,
        GENERATOR,
        GREY_WATER_TANK,
        LANDING_GEAR,
        LIGHT,
        REAR_STABILIZER,
        SLIDE,
        TV_LIFT,
        WATER_PUMP,
        WATER_TANK_HEATER,
        JACKS,
        HOUR_METER,
        RGB_LIGHT,
        CLOCK,
        IR_REMOTE_CONTROL,
        HVAC_CONTROL,
        FIREPLACE,
        LP_TANK_VALVE,
        NETWORK_BRIDGE,
        IPDM,
        DIMMABLE_LIGHT,
        OCTP,
        ANDROID,
        IOS,
        FUEL_PUMP,
        STABILIZER,
        THERMOMETER,
        POWER_MONITOR,
        POWER_MANAGER,
        CLOUD,
        DOOR,
        FAN,
        BLUETOOTH,
        GENERIC,
        RAIN_SENSOR,
    }
}


// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.PID
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System;
using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class PID
    {
        private static readonly Dictionary<ushort, PID> Lookup = new Dictionary<ushort, PID>();
        private static readonly System.Collections.Generic.List<PID> List = new System.Collections.Generic.List<PID>();
        public static readonly PID UNKNOWN = new PID((ushort)0, nameof(UNKNOWN), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        public static readonly PID PRODUCTION_BYTES = new PID((ushort)1, nameof(PRODUCTION_BYTES), new PID.Formatter(PID.FORMAT.UINT48, "${0:X8}"));
        public static readonly PID CAN_ADAPTER_MAC = new PID((ushort)2, nameof(CAN_ADAPTER_MAC), new PID.Formatter(PID.FORMAT.MAC6));
        public static readonly PID IDS_CAN_CIRCUIT_ID = new PID((ushort)3, nameof(IDS_CAN_CIRCUIT_ID), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        public static readonly PID IDS_CAN_FUNCTION_NAME = new PID((ushort)4, nameof(IDS_CAN_FUNCTION_NAME), new PID.Formatter(PID.FORMAT.UINT16, "${0:X4}"));
        public static readonly PID IDS_CAN_FUNCTION_INSTANCE = new PID((ushort)5, nameof(IDS_CAN_FUNCTION_INSTANCE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID IDS_CAN_NUM_DEVICES_ON_NETWORK = new PID((ushort)6, nameof(IDS_CAN_NUM_DEVICES_ON_NETWORK), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID IDS_CAN_MAX_NETWORK_HEARTBEAT_TIME = new PID((ushort)7, nameof(IDS_CAN_MAX_NETWORK_HEARTBEAT_TIME), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID SERIAL_NUMBER = new PID((ushort)8, nameof(SERIAL_NUMBER), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        public static readonly PID CAN_BYTES_TX = new PID((ushort)9, nameof(CAN_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_BYTES_RX = new PID((ushort)10, nameof(CAN_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_MESSAGES_TX = new PID((ushort)11, nameof(CAN_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_MESSAGES_RX = new PID((ushort)12, nameof(CAN_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)13, nameof(CAN_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)14, nameof(CAN_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_TX_MAX_BYTES_QUEUED = new PID((ushort)15, nameof(CAN_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID CAN_RX_MAX_BYTES_QUEUED = new PID((ushort)16, nameof(CAN_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_BYTES_TX = new PID((ushort)17, nameof(UART_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_BYTES_RX = new PID((ushort)18, nameof(UART_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_MESSAGES_TX = new PID((ushort)19, nameof(UART_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_MESSAGES_RX = new PID((ushort)20, nameof(UART_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)21, nameof(UART_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)22, nameof(UART_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_TX_MAX_BYTES_QUEUED = new PID((ushort)23, nameof(UART_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID UART_RX_MAX_BYTES_QUEUED = new PID((ushort)24, nameof(UART_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_BYTES_TX = new PID((ushort)25, nameof(WIFI_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_BYTES_RX = new PID((ushort)26, nameof(WIFI_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_MESSAGES_TX = new PID((ushort)27, nameof(WIFI_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_MESSAGES_RX = new PID((ushort)28, nameof(WIFI_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)29, nameof(WIFI_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)30, nameof(WIFI_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_TX_MAX_BYTES_QUEUED = new PID((ushort)31, nameof(WIFI_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_RX_MAX_BYTES_QUEUED = new PID((ushort)32, nameof(WIFI_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID WIFI_RSSI = new PID((ushort)33, nameof(WIFI_RSSI), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} dBm", 1.52587890625E-05));
        public static readonly PID RF_BYTES_TX = new PID((ushort)34, nameof(RF_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_BYTES_RX = new PID((ushort)35, nameof(RF_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_MESSAGES_TX = new PID((ushort)36, nameof(RF_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_MESSAGES_RX = new PID((ushort)37, nameof(RF_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)38, nameof(RF_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)39, nameof(RF_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_TX_MAX_BYTES_QUEUED = new PID((ushort)40, nameof(RF_TX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_RX_MAX_BYTES_QUEUED = new PID((ushort)41, nameof(RF_RX_MAX_BYTES_QUEUED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID RF_RSSI = new PID((ushort)42, nameof(RF_RSSI), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} dBm", 1.52587890625E-05));
        public static readonly PID BATTERY_VOLTAGE = new PID((ushort)43, nameof(BATTERY_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", 1.52587890625E-05));
        public static readonly PID REGULATOR_VOLTAGE = new PID((ushort)44, nameof(REGULATOR_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", 1.52587890625E-05));
        public static readonly PID NUM_TILT_SENSOR_AXES = new PID((ushort)45, nameof(NUM_TILT_SENSOR_AXES), new PID.Formatter(PID.FORMAT.UINT32, "{0:#,###0}"));
        public static readonly PID TILT_AXIS_1_ANGLE = new PID((ushort)46, nameof(TILT_AXIS_1_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_2_ANGLE = new PID((ushort)47, nameof(TILT_AXIS_2_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_3_ANGLE = new PID((ushort)48, nameof(TILT_AXIS_3_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_4_ANGLE = new PID((ushort)49, nameof(TILT_AXIS_4_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_5_ANGLE = new PID((ushort)50, nameof(TILT_AXIS_5_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_6_ANGLE = new PID((ushort)51, nameof(TILT_AXIS_6_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_7_ANGLE = new PID((ushort)52, nameof(TILT_AXIS_7_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID TILT_AXIS_8_ANGLE = new PID((ushort)53, nameof(TILT_AXIS_8_ANGLE), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###}�", 1.52587890625E-05));
        public static readonly PID IDS_CAN_FIXED_ADDRESS = new PID((ushort)54, nameof(IDS_CAN_FIXED_ADDRESS), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID FUSE_SETTING_1 = new PID((ushort)55, nameof(FUSE_SETTING_1), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_2 = new PID((ushort)56, nameof(FUSE_SETTING_2), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_3 = new PID((ushort)57, nameof(FUSE_SETTING_3), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_4 = new PID((ushort)58, nameof(FUSE_SETTING_4), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_5 = new PID((ushort)59, nameof(FUSE_SETTING_5), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_6 = new PID((ushort)60, nameof(FUSE_SETTING_6), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_7 = new PID((ushort)61, nameof(FUSE_SETTING_7), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_8 = new PID((ushort)62, nameof(FUSE_SETTING_8), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_9 = new PID((ushort)63, nameof(FUSE_SETTING_9), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_10 = new PID((ushort)64, nameof(FUSE_SETTING_10), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_11 = new PID((ushort)65, nameof(FUSE_SETTING_11), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_12 = new PID((ushort)66, nameof(FUSE_SETTING_12), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_13 = new PID((ushort)67, nameof(FUSE_SETTING_13), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_14 = new PID((ushort)68, nameof(FUSE_SETTING_14), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_15 = new PID((ushort)69, nameof(FUSE_SETTING_15), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID FUSE_SETTING_16 = new PID((ushort)70, nameof(FUSE_SETTING_16), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_1 = new PID((ushort)71, nameof(MANUFACTURING_PID_1), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_2 = new PID((ushort)72, nameof(MANUFACTURING_PID_2), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_3 = new PID((ushort)73, nameof(MANUFACTURING_PID_3), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_4 = new PID((ushort)74, nameof(MANUFACTURING_PID_4), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_5 = new PID((ushort)75, nameof(MANUFACTURING_PID_5), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_6 = new PID((ushort)76, nameof(MANUFACTURING_PID_6), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_7 = new PID((ushort)77, nameof(MANUFACTURING_PID_7), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_8 = new PID((ushort)78, nameof(MANUFACTURING_PID_8), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_9 = new PID((ushort)79, nameof(MANUFACTURING_PID_9), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_10 = new PID((ushort)80, nameof(MANUFACTURING_PID_10), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_11 = new PID((ushort)81, nameof(MANUFACTURING_PID_11), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_12 = new PID((ushort)82, nameof(MANUFACTURING_PID_12), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_13 = new PID((ushort)83, nameof(MANUFACTURING_PID_13), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_14 = new PID((ushort)84, nameof(MANUFACTURING_PID_14), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_15 = new PID((ushort)85, nameof(MANUFACTURING_PID_15), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_16 = new PID((ushort)86, nameof(MANUFACTURING_PID_16), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_17 = new PID((ushort)87, nameof(MANUFACTURING_PID_17), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_18 = new PID((ushort)88, nameof(MANUFACTURING_PID_18), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_19 = new PID((ushort)89, nameof(MANUFACTURING_PID_19), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_20 = new PID((ushort)90, nameof(MANUFACTURING_PID_20), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_21 = new PID((ushort)91, nameof(MANUFACTURING_PID_21), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_22 = new PID((ushort)92, nameof(MANUFACTURING_PID_22), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_23 = new PID((ushort)93, nameof(MANUFACTURING_PID_23), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_24 = new PID((ushort)94, nameof(MANUFACTURING_PID_24), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_25 = new PID((ushort)95, nameof(MANUFACTURING_PID_25), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_26 = new PID((ushort)96, nameof(MANUFACTURING_PID_26), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_27 = new PID((ushort)97, nameof(MANUFACTURING_PID_27), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_28 = new PID((ushort)98, nameof(MANUFACTURING_PID_28), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_29 = new PID((ushort)99, nameof(MANUFACTURING_PID_29), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_30 = new PID((ushort)100, nameof(MANUFACTURING_PID_30), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_31 = new PID((ushort)101, nameof(MANUFACTURING_PID_31), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID MANUFACTURING_PID_32 = new PID((ushort)102, nameof(MANUFACTURING_PID_32), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID METERED_TIME_SEC = new PID((ushort)103, nameof(METERED_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        public static readonly PID MAINTENANCE_PERIOD_SEC = new PID((ushort)104, nameof(MAINTENANCE_PERIOD_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        public static readonly PID LAST_MAINTENANCE_TIME_SEC = new PID((ushort)105, nameof(LAST_MAINTENANCE_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT32, "${0:X8}"));
        public static readonly PID TIME_ZONE = new PID((ushort)106, nameof(TIME_ZONE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_SEC = new PID((ushort)107, nameof(RTC_TIME_SEC), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_MIN = new PID((ushort)108, nameof(RTC_TIME_MIN), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_HOUR = new PID((ushort)109, nameof(RTC_TIME_HOUR), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_DAY = new PID((ushort)110, nameof(RTC_TIME_DAY), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_MONTH = new PID((ushort)111, nameof(RTC_TIME_MONTH), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID RTC_TIME_YEAR = new PID((ushort)112, nameof(RTC_TIME_YEAR), new PID.Formatter(PID.FORMAT.UINT16, "${0:X4}"));
        public static readonly PID RTC_EPOCH_SEC = new PID((ushort)113, nameof(RTC_EPOCH_SEC), new PID.Formatter(PID.FORMAT.DATE_TIME_EPOCH));
        public static readonly PID RTC_SET_TIME_SEC = new PID((ushort)114, nameof(RTC_SET_TIME_SEC), new PID.Formatter(PID.FORMAT.DATE_TIME_EPOCH));
        public static readonly PID BLE_DEVICE_NAME_1 = new PID((ushort)115, nameof(BLE_DEVICE_NAME_1), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID BLE_DEVICE_NAME_2 = new PID((ushort)116, nameof(BLE_DEVICE_NAME_2), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID BLE_DEVICE_NAME_3 = new PID((ushort)117, nameof(BLE_DEVICE_NAME_3), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID BLE_PIN = new PID((ushort)118, nameof(BLE_PIN), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID SYSTEM_UPTIME_MS = new PID((ushort)119, nameof(SYSTEM_UPTIME_MS), new PID.Formatter(PID.FORMAT.UINT48, "{0:0.###} sec", 0.001));
        public static readonly PID ETH_ADAPTER_MAC = new PID((ushort)120, nameof(ETH_ADAPTER_MAC), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        public static readonly PID ETH_BYTES_TX = new PID((ushort)121, nameof(ETH_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_BYTES_RX = new PID((ushort)122, nameof(ETH_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_MESSAGES_TX = new PID((ushort)123, nameof(ETH_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_MESSAGES_RX = new PID((ushort)124, nameof(ETH_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_TX_BUFFER_OVERFLOW_COUNT = new PID((ushort)125, nameof(ETH_TX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_RX_BUFFER_OVERFLOW_COUNT = new PID((ushort)126, nameof(ETH_RX_BUFFER_OVERFLOW_COUNT), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_DISCARDED = new PID((ushort)sbyte.MaxValue, nameof(ETH_PACKETS_TX_DISCARDED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_DISCARDED = new PID((ushort)128, nameof(ETH_PACKETS_RX_DISCARDED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_ERROR = new PID((ushort)129, nameof(ETH_PACKETS_TX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_ERROR = new PID((ushort)130, nameof(ETH_PACKETS_RX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_OVERFLOW = new PID((ushort)131, nameof(ETH_PACKETS_TX_OVERFLOW), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_LATE_COLLISION = new PID((ushort)132, nameof(ETH_PACKETS_TX_LATE_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_EXCESS_COLLISION = new PID((ushort)133, nameof(ETH_PACKETS_TX_EXCESS_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_TX_UNDERFLOW = new PID((ushort)134, nameof(ETH_PACKETS_TX_UNDERFLOW), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_ALIGN_ERR = new PID((ushort)135, nameof(ETH_PACKETS_RX_ALIGN_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_CRC_ERR = new PID((ushort)136, nameof(ETH_PACKETS_RX_CRC_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_TRUNC_ERR = new PID((ushort)137, nameof(ETH_PACKETS_RX_TRUNC_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_LEN_ERR = new PID((ushort)138, nameof(ETH_PACKETS_RX_LEN_ERR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID ETH_PACKETS_RX_COLLISION = new PID((ushort)139, nameof(ETH_PACKETS_RX_COLLISION), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID IP_ADDRESS = new PID((ushort)140, nameof(IP_ADDRESS), new PID.Formatter(PID.FORMAT.IPV6));
        public static readonly PID IP_SUBNETMASK = new PID((ushort)141, nameof(IP_SUBNETMASK), new PID.Formatter(PID.FORMAT.IPV6));
        public static readonly PID IP_GATEWAY = new PID((ushort)142, nameof(IP_GATEWAY), new PID.Formatter(PID.FORMAT.IPV6));
        public static readonly PID TCP_NUM_CONNECTIONS = new PID((ushort)143, nameof(TCP_NUM_CONNECTIONS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID AUX_BATTERY_VOLTAGE = new PID((ushort)144, nameof(AUX_BATTERY_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", 1.52587890625E-05));
        public static readonly PID RGB_LIGHTING_GANG_ENABLE = new PID((ushort)145, nameof(RGB_LIGHTING_GANG_ENABLE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID INPUT_SWITCH_TYPE = new PID((ushort)146, nameof(INPUT_SWITCH_TYPE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID DOOR_LOCK_STATE = new PID((ushort)147, nameof(DOOR_LOCK_STATE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID GENERATOR_QUIET_HOURS_START_TIME = new PID((ushort)148, nameof(GENERATOR_QUIET_HOURS_START_TIME), new PID.Formatter(PID.FORMAT.UINT16, "{0:0.###} hrs", 1.0 / 60.0));
        public static readonly PID GENERATOR_QUIET_HOURS_END_TIME = new PID((ushort)149, nameof(GENERATOR_QUIET_HOURS_END_TIME), new PID.Formatter(PID.FORMAT.UINT16, "{0:0.###} hrs", 1.0 / 60.0));
        public static readonly PID GENERATOR_AUTO_START_LOW_VOLTAGE = new PID((ushort)150, nameof(GENERATOR_AUTO_START_LOW_VOLTAGE), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} V", 1.52587890625E-05));
        public static readonly PID GENERATOR_AUTO_START_HI_TEMP_C = new PID((ushort)151, nameof(GENERATOR_AUTO_START_HI_TEMP_C), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} �C", 1.52587890625E-05));
        public static readonly PID GENERATOR_AUTO_RUN_DURATION_MINUTES = new PID((ushort)152, nameof(GENERATOR_AUTO_RUN_DURATION_MINUTES), new PID.Formatter(PID.FORMAT.UINT16, "{0:#,###0} minutes"));
        public static readonly PID GENERATOR_AUTO_RUN_MIN_OFF_TIME_MINUTES = new PID((ushort)153, nameof(GENERATOR_AUTO_RUN_MIN_OFF_TIME_MINUTES), new PID.Formatter(PID.FORMAT.UINT16, "{0:#,###0} minutes"));
        public static readonly PID SOFTWARE_BUILD_DATE_TIME = new PID((ushort)154, nameof(SOFTWARE_BUILD_DATE_TIME), new PID.Formatter(PID.FORMAT.DATE_TIME));
        public static readonly PID GENERATOR_QUIET_HOURS_ENABLED = new PID((ushort)155, nameof(GENERATOR_QUIET_HOURS_ENABLED), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID SHORE_POWER_AMP_RATING = new PID((ushort)156, nameof(SHORE_POWER_AMP_RATING), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID BATTERY_CAPACITY_AMP_HOURS = new PID((ushort)157, nameof(BATTERY_CAPACITY_AMP_HOURS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} Amp-Hours", 1.52587890625E-05));
        public static readonly PID PCB_ASSEMBLY_PART_NUMBER = new PID((ushort)158, nameof(PCB_ASSEMBLY_PART_NUMBER), new PID.Formatter(PID.FORMAT.UINT48, "${0:X12}"));
        public static readonly PID UNLOCK_PIN = new PID((ushort)159, nameof(UNLOCK_PIN), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID UNLOCK_PIN_MODE = new PID((ushort)160, nameof(UNLOCK_PIN_MODE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID SIMULATE_ON_OFF_STYLE_LIGHT = new PID((ushort)161, nameof(SIMULATE_ON_OFF_STYLE_LIGHT), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID FAN_SPEED_CONTROL_TYPE = new PID((ushort)162, nameof(FAN_SPEED_CONTROL_TYPE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID HVAC_CONTROL_TYPE = new PID((ushort)163, nameof(HVAC_CONTROL_TYPE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID SOFTWARE_FUSE_RATING_AMPS = new PID((ushort)164, nameof(SOFTWARE_FUSE_RATING_AMPS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID SOFTWARE_FUSE_MAX_RATING_AMPS = new PID((ushort)165, nameof(SOFTWARE_FUSE_MAX_RATING_AMPS), new PID.Formatter(PID.FORMAT.UINT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID CUMMINS_ONAN_GENERATOR_FAULT_CODE = new PID((ushort)166, nameof(CUMMINS_ONAN_GENERATOR_FAULT_CODE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID MOTOR_1_CURRENT_AMPS = new PID((ushort)167, nameof(MOTOR_1_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_2_CURRENT_AMPS = new PID((ushort)168, nameof(MOTOR_2_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_3_CURRENT_AMPS = new PID((ushort)169, nameof(MOTOR_3_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_4_CURRENT_AMPS = new PID((ushort)170, nameof(MOTOR_4_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_5_CURRENT_AMPS = new PID((ushort)171, nameof(MOTOR_5_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_6_CURRENT_AMPS = new PID((ushort)172, nameof(MOTOR_6_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_7_CURRENT_AMPS = new PID((ushort)173, nameof(MOTOR_7_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_8_CURRENT_AMPS = new PID((ushort)174, nameof(MOTOR_8_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_9_CURRENT_AMPS = new PID((ushort)175, nameof(MOTOR_9_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_10_CURRENT_AMPS = new PID((ushort)176, nameof(MOTOR_10_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_11_CURRENT_AMPS = new PID((ushort)177, nameof(MOTOR_11_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_12_CURRENT_AMPS = new PID((ushort)178, nameof(MOTOR_12_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_13_CURRENT_AMPS = new PID((ushort)179, nameof(MOTOR_13_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_14_CURRENT_AMPS = new PID((ushort)180, nameof(MOTOR_14_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_15_CURRENT_AMPS = new PID((ushort)181, nameof(MOTOR_15_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID MOTOR_16_CURRENT_AMPS = new PID((ushort)182, nameof(MOTOR_16_CURRENT_AMPS), new PID.Formatter(PID.FORMAT.INT32, "{0:0.###} A", 1.52587890625E-05));
        public static readonly PID DEVICE_TYPE = new PID((ushort)183, nameof(DEVICE_TYPE), new PID.Formatter(PID.FORMAT.UINT8, "${0:X2}"));
        public static readonly PID IN_MOTION_LOCKOUT_BEHAVIOR = new PID((ushort)184, nameof(IN_MOTION_LOCKOUT_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));
        public static readonly PID RVC_DETECTED_NODES = new PID((ushort)185, nameof(RVC_DETECTED_NODES), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_LOST_NODES = new PID((ushort)186, nameof(RVC_LOST_NODES), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_BYTES_TX = new PID((ushort)187, nameof(RVC_BYTES_TX), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_BYTES_RX = new PID((ushort)188, nameof(RVC_BYTES_RX), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_MESSAGES_TX = new PID((ushort)189, nameof(RVC_MESSAGES_TX), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_MESSAGES_RX = new PID((ushort)190, nameof(RVC_MESSAGES_RX), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_TX_BUFFERS_FREE = new PID((ushort)191, nameof(RVC_TX_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_TX_BUFFERS_USED = new PID((ushort)192, nameof(RVC_TX_BUFFERS_USED), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_RX_BUFFERS_FREE = new PID((ushort)193, nameof(RVC_RX_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_RX_BUFFERS_USED = new PID((ushort)194, nameof(RVC_RX_BUFFERS_USED), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_TX_OUT_OF_BUFFERS_COUNT = new PID((ushort)195, nameof(RVC_TX_OUT_OF_BUFFERS_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_RX_OUT_OF_BUFFERS_COUNT = new PID((ushort)196, nameof(RVC_RX_OUT_OF_BUFFERS_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_TX_FAILURE_COUNT = new PID((ushort)197, nameof(RVC_TX_FAILURE_COUNT), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_DEFAULT_SRC_ADDR = new PID((ushort)198, nameof(RVC_DEFAULT_SRC_ADDR), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_DYNAMIC_ADDR = new PID((ushort)199, nameof(RVC_DYNAMIC_ADDR), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID RVC_MAKE = new PID((ushort)200, nameof(RVC_MAKE), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID RVC_MODEL_1 = new PID((ushort)201, nameof(RVC_MODEL_1), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID RVC_MODEL_2 = new PID((ushort)202, nameof(RVC_MODEL_2), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID RVC_MODEL_3 = new PID((ushort)203, nameof(RVC_MODEL_3), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID RVC_SERIAL = new PID((ushort)204, nameof(RVC_SERIAL), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID RVC_ID_NUMBER = new PID((ushort)205, nameof(RVC_ID_NUMBER), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID CLOUD_GATEWAY_ASSET_ID_PART_1 = new PID((ushort)206, nameof(CLOUD_GATEWAY_ASSET_ID_PART_1), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID CLOUD_GATEWAY_ASSET_ID_PART_2 = new PID((ushort)207, nameof(CLOUD_GATEWAY_ASSET_ID_PART_2), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID CLOUD_GATEWAY_ASSET_ID_PART_3 = new PID((ushort)208, nameof(CLOUD_GATEWAY_ASSET_ID_PART_3), new PID.Formatter(PID.FORMAT.CHAR6));
        public static readonly PID HVAC_ZONE_CAPABILITIES = new PID((ushort)209, nameof(HVAC_ZONE_CAPABILITIES), new PID.Formatter(PID.FORMAT.UINT8));
        public static readonly PID IGNITION_BEHAVIOR = new PID((ushort)210, nameof(IGNITION_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));
        public static readonly PID BLE_NUMBER_OF_FORWARDED_CAN_DEVICES = new PID((ushort)211, nameof(BLE_NUMBER_OF_FORWARDED_CAN_DEVICES), new PID.Formatter(PID.FORMAT.UINT48));
        public static readonly PID BLE_NUMBER_OF_CONNECTS = new PID((ushort)212, nameof(BLE_NUMBER_OF_CONNECTS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_NUMBER_OF_DISCONNECTS = new PID((ushort)213, nameof(BLE_NUMBER_OF_DISCONNECTS), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_TOTAL_TRAFFIC = new PID((ushort)214, nameof(BLE_TOTAL_TRAFFIC), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_WRITES_FROM_PHONE = new PID((ushort)215, nameof(BLE_WRITES_FROM_PHONE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_NOTIFICATIONS_TO_PHONE_SUCCESSFUL = new PID((ushort)216, nameof(BLE_NOTIFICATIONS_TO_PHONE_SUCCESSFUL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_NOTIFICATIONS_TO_PHONE_FAILURE = new PID((ushort)217, nameof(BLE_NOTIFICATIONS_TO_PHONE_FAILURE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_MTU_SIZE_CENTRAL = new PID((ushort)218, nameof(BLE_MTU_SIZE_CENTRAL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_MTU_SIZE_PERIPHERAL = new PID((ushort)219, nameof(BLE_MTU_SIZE_PERIPHERAL), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_DATA_LENGTH_TIME = new PID((ushort)220, nameof(BLE_DATA_LENGTH_TIME), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_SECURITY_UNLOCKED = new PID((ushort)221, nameof(BLE_SECURITY_UNLOCKED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_CLIENT_CONNECTED = new PID((ushort)222, nameof(BLE_CLIENT_CONNECTED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_CCCD_WRITTEN = new PID((ushort)223, nameof(BLE_CCCD_WRITTEN), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_NUM_BUFFERS_FREE = new PID((ushort)224, nameof(BLE_NUM_BUFFERS_FREE), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_LAST_TX_ERROR = new PID((ushort)225, nameof(BLE_LAST_TX_ERROR), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_CONNECTED_DEVICE_RSSI = new PID((ushort)226, nameof(BLE_CONNECTED_DEVICE_RSSI), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_DEAD_CLIENT_COUNTER = new PID((ushort)227, nameof(BLE_DEAD_CLIENT_COUNTER), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_LAST_DISCONNECT_REASON = new PID((ushort)228, nameof(BLE_LAST_DISCONNECT_REASON), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_SPI_RX_MSGS_DROPPED = new PID((ushort)229, nameof(BLE_SPI_RX_MSGS_DROPPED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID BLE_SPI_TX_MSGS_DROPPED = new PID((ushort)230, nameof(BLE_SPI_TX_MSGS_DROPPED), new PID.Formatter(PID.FORMAT.UINT48, "{0:#,###0}"));
        public static readonly PID LOW_VOLTAGE_BEHAVIOR = new PID((ushort)231, nameof(LOW_VOLTAGE_BEHAVIOR), new PID.Formatter(PID.FORMAT.UINT8));
        public readonly ushort Value;
        public readonly string Name;
        private readonly PID.Formatter Print;

        public static IEnumerable<PID> GetEnumerator() = > (IEnumerable<PID>) PID.List;

        private PID(ushort value)
        {
            this.Value = value;
            this.Name = "UNKNOWN_" + value.ToString("X4");
            this.Print = (PID.Formatter) null;
            if (value <= (ushort)0 || PID.Lookup.ContainsKey(value))
                return;
            PID.Lookup.Add(value, this);
        }

        private PID(ushort value, string name, PID.Formatter print)
        {
            this.Value = value;
            this.Name = name.Trim();
            this.Print = print;
            if (value <= (ushort)0)
                return;
            PID.List.Add(this);
            PID.Lookup.Add(value, this);
        }

        public bool IsValid = > this != null && this.Value > (ushort)0;

        public string PIDNumberString = > this.Value.ToString("X4") + "h";

        public string FormatValue(ulong value) = > this.Print == null ? value.ToString() : this.Print.ToString(value);

        public static implicit operator ushort(PID msg) = > msg.Value;

        public static implicit operator PID(ushort value)
        {
            if (value == (ushort)0)
                return PID.UNKNOWN;
            PID pid;
            if (!PID.Lookup.TryGetValue(value, out pid))
                pid = new PID(value);
            return pid;
        }

        public override string ToString() = > this.Name;

        private enum FORMAT
        {
            CHAR1,
            CHAR2,
            CHAR3,
            CHAR4,
            CHAR5,
            CHAR6,
            INT8,
            UINT8,
            INT16,
            UINT16,
            INT24,
            UINT24,
            INT32,
            UINT32,
            INT40,
            UINT40,
            INT48,
            UINT48,
            DATE_TIME,
            DATE_TIME_EPOCH,
            IPV4,
            IPV6,
            MAC6,
        }

        private class Formatter
        {
            private readonly PID.FORMAT Format;
            private readonly string FormatString;
            private readonly double Scale;
            private readonly double Offset;

            internal Formatter(PID.FORMAT f) = > this.Format = f;

            internal Formatter(PID.FORMAT f, string s)
            {
                this.Format = f;
                this.FormatString = s;
            }

            internal Formatter(PID.FORMAT f, string s, double scale)
            {
                this.Format = f;
                this.FormatString = s;
                this.Scale = scale;
            }

            internal Formatter(PID.FORMAT f, string s, double scale, double offset)
            {
                this.Format = f;
                this.FormatString = s;
                this.Scale = scale;
                this.Offset = offset;
            }

            public string ToString(ulong value)
            {
                switch (this.Format)
                {
                case PID.FORMAT.CHAR1:
                    return this.CharString(value, 1);
                case PID.FORMAT.CHAR2:
                    return this.CharString(value, 2);
                case PID.FORMAT.CHAR3:
                    return this.CharString(value, 3);
                case PID.FORMAT.CHAR4:
                    return this.CharString(value, 4);
                case PID.FORMAT.CHAR5:
                    return this.CharString(value, 5);
                case PID.FORMAT.CHAR6:
                    return this.CharString(value, 6);
                case PID.FORMAT.INT8:
                    value &= (ulong)byte.MaxValue;
                    if (((long)value & 128L) != 0L)
                    {
                        value |= 0xFFFFFFFFFF000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT8:
                    value &= (ulong)byte.MaxValue;
                    break;
                case PID.FORMAT.INT16:
                    value &= (ulong)ushort.MaxValue;
                    if (((long)value & 0x8000) != 0L)
                    {
                        value |= 0xFFFFFFFFFF000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT16:
                    value &= (ulong)ushort.MaxValue;
                    break;
                case PID.FORMAT.INT24:
                    value &= 0xFFFFFF;
                    if (((long)value & 8388608L) != 0L)
                    {
                        value |= 0xFFFFFFFFFF000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT24:
                    value &= 0xFFFFFF;
                    break;
                case PID.FORMAT.INT32:
                    value &= (ulong)uint.MaxValue;
                    if (((long)value & 0x80000000) != 0L)
                    {
                        value |= 0xFFFFFFFF00000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT32:
                    value &= (ulong)uint.MaxValue;
                    break;
                case PID.FORMAT.INT40:
                    value &= 0xFFFFFFFFFF;
                    if (((long)value & 0x8000000000) != 0L)
                    {
                        value |= 0xFFFFFF0000000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT40:
                    value &= 0xFFFFFFFFFF;
                    break;
                case PID.FORMAT.INT48:
                    value &= 0xFFFFFFFFFFFF;
                    if (((long)value & 0x800000000000) != 0L)
                    {
                        value |= 0xFFFFFF0000000000;
                        break;
                    }
                    break;
                case PID.FORMAT.UINT48:
                    value &= 0xFFFFFFFFFFFF;
                    break;
                case PID.FORMAT.DATE_TIME:
                    int year = 2000 + (int)(byte)(value >> 40);
                    int num1 = (int)(byte)(value >> 32);
                    int num2 = (int)(byte)(value >> 24);
                    int num3 = (int)(byte)(value >> 16);
                    int num4 = (int)(byte)(value >> 8);
                    int num5 = (int)(byte)value;
                    int month = num1;
                    int day = num2;
                    int hour = num3;
                    int minute = num4;
                    int second = num5;
                    return new DateTime(year, month, day, hour, minute, second).ToString();
                case PID.FORMAT.DATE_TIME_EPOCH:
                    return new DateTime(2000, 1, 1, 0, 0, 0, DateTimeKind.Utc).AddSeconds((double)value).ToString();
                case PID.FORMAT.IPV4:
                    return this.IPString(value, 4);
                case PID.FORMAT.IPV6:
                    return this.IPString(value, 6);
                case PID.FORMAT.MAC6:
                    return this.MACstring(value, 6);
                }
                long num6 = (long)value;
                if (this.Scale == 0.0 && this.Offset == 0.0)
                    return this.FormatString == null ? num6.ToString() : string.Format(this.FormatString, (object)num6);
                double num7 = (double)num6 * 1.0;
                if (this.Scale != 0.0)
                    num7 *= this.Scale;
                double num8 = num7 + this.Offset;
                return this.FormatString == null ? num8.ToString() : string.Format(this.FormatString, (object)num8);
            }

            private string CharString(ulong value, int digits)
            {
                string str = "";
                if (digits < 1)
                    digits = 1;
                if (digits > 8)
                    digits = 8;
                int num = 8 - digits;
                value <<= num * 8;
                for (int index = 0; index < digits; ++index)
                {
                    char ch = (char)(value >> 56);
                    value <<= 8;
                    if (ch != char.MinValue)
                        str += ch.ToString();
                    else
                        break;
                }
                return str;
            }

            private string IPString(ulong value, int digits)
            {
                string str = "";
                int num = 0;
                while (num < digits)
                {
                    if (num != 0)
                        str = "." + str;
                    str = ((byte)value).ToString() + str;
                    ++num;
                    value >>= 8;
                }
                return str;
            }

            private string MACstring(ulong value, int digits)
            {
                string str = "";
                int num = 0;
                while (num < digits)
                {
                    if (num != 0)
                        str = ":" + str;
                    str = ((byte)value).ToString("X2") + str;
                    ++num;
                    value >>= 8;
                }
                return str;
            }
        }
    }
}

// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.PRODUCT_ID
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class PRODUCT_ID
    {
        private static readonly Dictionary<ushort, PRODUCT_ID> Lookup = new Dictionary<ushort, PRODUCT_ID>();
        private static readonly System.Collections.Generic.List<PRODUCT_ID> List = new System.Collections.Generic.List<PRODUCT_ID>();
        public static readonly PRODUCT_ID UNKNOWN = new PRODUCT_ID((ushort)0, 0, nameof(UNKNOWN));
        public static readonly PRODUCT_ID IDS_CAN_NETWORK_ANALYZER_PC_TOOL = new PRODUCT_ID((ushort)1, 17513, "IDS-CAN Network Analyzer");
        public static readonly PRODUCT_ID LCI_LINCPAD_WIFI_HUB_ASSEMBLY = new PRODUCT_ID((ushort)2, 17778, "WiFi Gateway Controller");
        public static readonly PRODUCT_ID LCI_LINCPAD_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)3, 17788, "Inwall Slide Control");
        public static readonly PRODUCT_ID LCI_LINCPAD_DOCKING_STATION_ASSEMBLY = new PRODUCT_ID((ushort)4, 17799, "Docking Station");
        public static readonly PRODUCT_ID LCI_MF_5F_3V_FUSE_MUX_RECEIVER_LINCPAD_ASSEMBLY = new PRODUCT_ID((ushort)5, 18438, "MultiFunction 5-Output w/Hydraulic Controller");
        public static readonly PRODUCT_ID LCI_MF_8F_5V_FUSE_MUX_RECEIVER_LINCPAD_ASSEMBLY = new PRODUCT_ID((ushort)6, 18439, "MultiFunction 8-Output w/Hydraulic Controller");
        public static readonly PRODUCT_ID LCI_LINCPAD_LIGHTING_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)7, 18447, "Lighting Control");
        public static readonly PRODUCT_ID LCI_LINCPAD_MULTIFUNCTION_8_OUTPUT_RECEIVER_ASSEMBLY = new PRODUCT_ID((ushort)8, 18448, "MultiFunction 8-Output Receiver");
        public static readonly PRODUCT_ID LCI_LINCPAD_MULTIFUNCTION_5_OUTPUT_RECEIVER_ASSEMBLY = new PRODUCT_ID((ushort)9, 18449, "MultiFunction 5-Output Receiver");
        public static readonly PRODUCT_ID LCI_LINCPAD_LEVEL_UP_LEVELING_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)10, 18450, "Level Up Leveling Controller");
        public static readonly PRODUCT_ID LCI_LINCPAD_TANK_MONITOR_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)11, 18451, "Tank Monitor Controller");
        public static readonly PRODUCT_ID LCI_LINCPAD_SWITCH_TO_CAN_CONVERTER_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)12, 18452, "Switch to CAN Converter");
        public static readonly PRODUCT_ID LCI_LINCPAD_LINC_TO_CAN_TOUCHPAD_ASSEMBLY = new PRODUCT_ID((ushort)13, 18453, "Linc to CAN TouchPad");
        public static readonly PRODUCT_ID LCI_LINCPAD_TABLET = new PRODUCT_ID((ushort)14, 18511, "MyRV Tablet");
        public static readonly PRODUCT_ID LCI_LINCPAD_6_LEG_HALL_EFFECT_EJ_LEVELER_ASSEMBLY = new PRODUCT_ID((ushort)15, 19251, "6-Leg Hall Effect EJ Leveler");
        public static readonly PRODUCT_ID LCI_LINCPAD_4PT_CAMPER_JACK_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)16, 19445, "4 Point Camper Jack Control");
        public static readonly PRODUCT_ID LCI_MYRV_4PT_5W_HALL_EFFECT_EJ_LEVELER_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)17, 20239, "4-Leg Hall Effect EJ Leveler");
        public static readonly PRODUCT_ID LCI_MYRV_5PT_HALL_EFFECT_HYBRID_EJ_TT_LEVELER_ASSY = new PRODUCT_ID((ushort)18, 20242, "5-Leg Hybrid EJ TT Leveler");
        public static readonly PRODUCT_ID LCI_MYRV_4PT_FOLDING_JACK_TT_LEVELER_ASSY = new PRODUCT_ID((ushort)19, 20334, "4-Leg Folding Jack TT Leveler");
        public static readonly PRODUCT_ID LCI_MYRV_HOUR_METER_WITH_START_STOP_DRIVE = new PRODUCT_ID((ushort)20, 20583, "MyRV Hour Meter");
        public static readonly PRODUCT_ID LCI_MYRV_RGB_LED_LIGHTING_CONTROLLER_ASSEMBLY = new PRODUCT_ID((ushort)21, 20590, "RGB LED Lighting Controller");
        public static readonly PRODUCT_ID LCI_BLE_MF_5F_3V_FUSE_MUX_RECEIVER_LINCTAB_ASSEMBLY = new PRODUCT_ID((ushort)22, 20678, "Bluetooth MultiFunction 5-Output w/Hydraulic Controller");
        public static readonly PRODUCT_ID LCI_BLE_MF_8F_5V_FUSE_MUX_RECEIVER_LINCTAB_ASSEMBLY = new PRODUCT_ID((ushort)23, 20679, "Bluetooth MultiFunction 8-Output w/Hydraulic Controller");
        public static readonly PRODUCT_ID LCI_LINCTAB_BLE_MULTIFUNCTION_8_OUTPUT_RECEIVER_ASSEMBLY = new PRODUCT_ID((ushort)24, 20680, "Bluetooth MultiFunction 8-Output Receiver");
        public static readonly PRODUCT_ID LCI_LINCTAB_BLE_MULTIFUNCTION_5_OUTPUT_RECEIVER_ASSEMBLY = new PRODUCT_ID((ushort)25, 20681, "Bluetooth MultiFunction 5-Output Receiver");
        public static readonly PRODUCT_ID LCI_IR_REMOTE_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)26, 20805, "Infrared Remote Control Dome");
        public static readonly PRODUCT_ID LCI_MYRV_HVAC_DUAL_ZONE_CONTROL_UNIT_ASSEMBLY = new PRODUCT_ID((ushort)27, 21068, "HVAC Dual Zone Controller");
        public static readonly PRODUCT_ID LCI_MULTICHANNEL_LED_CONTROLLER_ASSEMBLY = new PRODUCT_ID((ushort)28, 21184, "Multichannel LED Controller");
        public static readonly PRODUCT_ID LCI_MYRV_GENERATOR_GENIE_CONTROL_UNIT = new PRODUCT_ID((ushort)29, 21084, "Generator Genie Controller");
        public static readonly PRODUCT_ID LCI_MYRV_HVAC_SINGLE_ZONE_CONTROL_UNIT_ASSEMBLY = new PRODUCT_ID((ushort)30, 21186, "HVAC Single Zone Controller");
        public static readonly PRODUCT_ID LCI_MYRV_HVAC_DUAL_ZONE_CONTROL_UNIT_WITH_GEN_HOUR_METER = new PRODUCT_ID((ushort)31, 21187, "HVAC Dual Zone Controller w/ Gen Hr Meter");
        public static readonly PRODUCT_ID LCI_MYRV_HVAC_SINGLE_ZONE_CONTROL_UNIT_WITH_GEN_HOUR_METER = new PRODUCT_ID((ushort)32, 21188, "HVAC Single Zone Controller w/ Gen Hr Meter");
        public static readonly PRODUCT_ID LCI_CAN_TO_ETHERNET_GATEWAY = new PRODUCT_ID((ushort)33, 21049, "CAN To Ethernet Gateway");
        public static readonly PRODUCT_ID LCI_LEVEL_UP_UNITY_CONTROL_ASSY = new PRODUCT_ID((ushort)34, 21296, "Level Up Unity Controller");
        public static readonly PRODUCT_ID LCI_3PT_CLASS_C_HYDRAULIC_LEVELER_ASSEMBLY = new PRODUCT_ID((ushort)35, 21299, "3 Point Class C Hydraulic Leveler");
        public static readonly PRODUCT_ID LCI_MYRV_5IN_ONECONTROL_TOUCH_PANEL_ASSEMBLY = new PRODUCT_ID((ushort)36, 21115, "5\" OneControl Touch Panel");
        public static readonly PRODUCT_ID LCI_MYRV_7IN_ONECONTROL_TOUCH_PANEL_ASSEMBLY = new PRODUCT_ID((ushort)37, 21116, "7\" OneControl Touch Panel");
        public static readonly PRODUCT_ID LCI_MULTIFUNCTION_OMEGA_10_REVERSING_4_LATCHING = new PRODUCT_ID((ushort)38, 21400, "Multifunction Omega 10 + 4");
        public static readonly PRODUCT_ID LCI_TT_LEVELER_4_X_3K_C_JACK_ASSEMBLY = new PRODUCT_ID((ushort)39, 21417, "TT Leveler (4 x 3k C-Jack)");
        public static readonly PRODUCT_ID LCI_MYRV_MOTORIZED_4PT_HYDRAULIC_LEVELER_ASSEMBLY = new PRODUCT_ID((ushort)40, 21419, "Motorized 4 Point Hydraulic Leveler");
        public static readonly PRODUCT_ID LCI_MYRV_MOTORIZED_3PT_HYDRAULIC_LEVELER_ASSEMBLY = new PRODUCT_ID((ushort)41, 21420, "Motorized 3 Point Hydraulic Leveler");
        public static readonly PRODUCT_ID LCI_IPDM_CONTROLLER_ASSEMBLY = new PRODUCT_ID((ushort)42, 21421, "In Transit Power Disconnect Controller");
        public static readonly PRODUCT_ID LCI_TANK_MONITOR_V2_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)43, 21422, "Tank Monitor Controller V2");
        public static readonly PRODUCT_ID LCI_MYRV_SMART_ARM_AWNING_CONTROL_ASSEMBLY = new PRODUCT_ID((ushort)44, 21425, "SMART Arm Awning Controller");
        public static readonly PRODUCT_ID LCI_MYRV_10IN_ONECONTROL_TOUCH_PANEL_ASSEMBLY = new PRODUCT_ID((ushort)45, 21428, "10\" OneControl Touch Panel");
        public static readonly PRODUCT_ID LCI_ONECONTROL_ANDROID_MOBILE_APPLICATION = new PRODUCT_ID((ushort)46, 21429, "OneControl Android Mobile App");
        public static readonly PRODUCT_ID LCI_ONECONTROL_IOS_MOBILE_APPLICATION = new PRODUCT_ID((ushort)47, 21430, "OneControl iOS Mobile App");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_HD_ASSY = new PRODUCT_ID((ushort)48, 21460, "TT Leveler HD");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_SE_ASSY = new PRODUCT_ID((ushort)49, 21461, "TT Leveler SE");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_LT_ASSY = new PRODUCT_ID((ushort)50, 21462, "TT Leveler LT");
        public static readonly PRODUCT_ID LCI_MYRV_5W_6PT_GC_3_0_LEVELER_TYPE_3_ASSY = new PRODUCT_ID((ushort)51, 21463, "Ground Control 3.0 5th Wheel Leveler (6-Point)");
        public static readonly PRODUCT_ID LCI_MYRV_5W_4PT_GC_3_0_LEVELER_TYPE_3_ASSY = new PRODUCT_ID((ushort)52, 21464, "Ground Control 3.0 5th Wheel Leveler (4-Point)");
        public static readonly PRODUCT_ID LCI_MYRV_SMART_POWER_TONGUE_JACK_CONTROL_ASSY = new PRODUCT_ID((ushort)53, 21465, "Smart Power-Tongue Jack Controller");
        public static readonly PRODUCT_ID LCI_MULTIFUNCTION_OMEGA_8_REVERSING_4_LATCHING = new PRODUCT_ID((ushort)54, 21480, "Multifunction Omega 8 + 4");
        public static readonly PRODUCT_ID LCI_MULTIFUNCTION_OMEGA_6_REVERSING_4_LATCHING = new PRODUCT_ID((ushort)55, 21481, "Multifunction Omega 6 + 4");
        public static readonly PRODUCT_ID LCI_MYRV_MULTIFUNCTION_5_OUTPUT_RECEIVER_ASSEMBLY_20A = new PRODUCT_ID((ushort)56, 21656, "MultiFunction 5-Output Receiver (20A)");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_3K_GC = new PRODUCT_ID((ushort)57, 21817, "TT Leveler S-3K-GC");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_2K_GC = new PRODUCT_ID((ushort)58, 21818, "TT Leveler S-2K-GC");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_3K_3K = new PRODUCT_ID((ushort)59, 21819, "TT Leveler S-3K-3K");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_2K_3K = new PRODUCT_ID((ushort)60, 21820, "TT Leveler S-2K-3K");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_2K_2K = new PRODUCT_ID((ushort)61, 21821, "TT Leveler S-2K-2K");
        public static readonly PRODUCT_ID LCI_LED_LIGHTING_CONTROLLER_8_1_1_OUTPUT_CAN_ONLY_ASSEMBLY = new PRODUCT_ID((ushort)62, 21866, "LED Lighting Controller (8 dimming, 1 latching, 1 RGB)");
        public static readonly PRODUCT_ID LCI_LED_LIGHTING_CONTROLLER_8_OUTPUT_ASSEMBLY = new PRODUCT_ID((ushort)63, 21867, "LED Lighting Controller (8 dimming, digital inputs)");
        public static readonly PRODUCT_ID LCI_LED_LIGHTING_CONTROLLER_8_1_OUTPUT_CAN_ONLY_ASSEMBLY = new PRODUCT_ID((ushort)64, 21868, "LED Lighting Controller (8 dimming, 1 latching)");
        public static readonly PRODUCT_ID LCI_LED_LIGHTING_CONTROLLER_8_OUTPUT_CAN_ONLY_ASSEMBLY = new PRODUCT_ID((ushort)65, 21869, "LED Lighting Controller (8 dimming)");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_M_3K_3K_W_LCD_TOUCHPAD_ASSY = new PRODUCT_ID((ushort)66, 21878, "TT Leveler M-3K-3K with LCD TouchPad");
        public static readonly PRODUCT_ID LCI_9_ZONE_LED_LIGHTING_CONTROL_8_DIMMING_1_LATCHING_ASSEMBLY = new PRODUCT_ID((ushort)67, 21882, "LED Lighting Controller (8 dimming, 1 latching, digital inputs)");
        public static readonly PRODUCT_ID LCI_EUROSLIDE_ASSEMBLY = new PRODUCT_ID((ushort)68, 22017, "EuroSlide Controller");
        public static readonly PRODUCT_ID SIMULATED_PRODUCT = new PRODUCT_ID((ushort)69, 0, "Simulated Product");
        public static readonly PRODUCT_ID IDS_CAN_SNIFFER = new PRODUCT_ID((ushort)70, 0, "IDS-CAN Sniffer");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_M_2K_GC_W_LCD_TP_ASSSEMBLY = new PRODUCT_ID((ushort)71, 22170, "TT Leveler M-2K-GC w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_M_2K_3K_W_LCD_TP_ASSEMBLY = new PRODUCT_ID((ushort)72, 22172, "TT Leveler M-2K-3K w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_3K_GC_W_LCD_TP_ASSEMBLY = new PRODUCT_ID((ushort)73, 22173, "TT Leveler S-3K-GC w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_2K_GC_W_LCD_TP_ASSEMBLY = new PRODUCT_ID((ushort)74, 22174, "TT Leveler S-2K-GC w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_3K_3K_W_LCD_TP_ASSEMBLY = new PRODUCT_ID((ushort)75, 22175, "TT Leveler S-3K-3K w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_S_2K_3K_W_LCD_TP_ASSEMBLY = new PRODUCT_ID((ushort)76, 22176, "TT Leveler S-2K-3K w LCD TP");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_M_2K_GC_ASSEMBLY = new PRODUCT_ID((ushort)77, 22177, "TT Leveler M-2K-GC");
        public static readonly PRODUCT_ID LCI_MYRV_TT_LEVELER_M_2K_3K_ASSEMBLY = new PRODUCT_ID((ushort)78, 22178, "TT Leveler M-2K-3K");
        public static readonly PRODUCT_ID CLASS_C_STABILIZER_CONTROL_2K_C_JACKS_ASSEMBLY = new PRODUCT_ID((ushort)79, 22282, "Class C Stabilizer Control (2K C-Jacks)");
        public static readonly PRODUCT_ID MYRV_IN_WALL_SLIDE_CONTROLLER_ASSEMBLY = new PRODUCT_ID((ushort)80, 22368, "In-Wall Slide Controller");
        public static readonly PRODUCT_ID MYRV_HVAC_SINGLE_ZONE_CONTROL_WITH_AUTO_START_GEN_HOUR_METER = new PRODUCT_ID((ushort)81, 22409, "Single-Zone HVAC Control + Generator Genie w/ Auto-Start");
        public static readonly PRODUCT_ID MYRV_HVAC_DUAL_ZONE_CONTROL_WITH_AUTO_START_GEN_HOUR_METER = new PRODUCT_ID((ushort)82, 22410, "Dual-Zone HVAC Control + Generator Genie w/ Auto-Start");
        public static readonly PRODUCT_ID MYRV_AUTO_START_GENERATOR_GENIE_CONTROL_UNIT = new PRODUCT_ID((ushort)83, 22411, "Generator Genie Controller w/ Auto-Start");
        public static readonly PRODUCT_ID MYRV_PG_IN_WALL_SLIDE_CONTROLLER_ASSEMBLY_TOWABLE_W_MANUAL_PROGRAM = new PRODUCT_ID((ushort)84, 22383, "PG In-Wall Slide Controller (Towable w/ Manual)");
        public static readonly PRODUCT_ID MYRV_PG_IN_WALL_SLIDE_CONTROLLER_ASSEMBLY_MOTORIZED_W_AUTO_PROGRAM = new PRODUCT_ID((ushort)85, 22384, "PG In-Wall Slide Controller (Motorized w/ Auto)");
        public static readonly PRODUCT_ID MYRV_PG_IN_WALL_SLIDE_CONTROLLER_ASSEMBLY_MOTORIZED_W_MANUAL_PROGRAM = new PRODUCT_ID((ushort)86, 22385, "PG In-Wall Slide Controller (Motorized w/ Manual)");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_SINGLE_ZONE_CONTROL_WITH_AUTO_START_GEN_HOUR_METER = new PRODUCT_ID((ushort)87, 22503, "HVAC V2 Single-Zone Control with Auto-Start Gen Hour Meter");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_DUAL_ZONE_CONTROL_WITH_AUTO_START_GEN_HOUR_METER = new PRODUCT_ID((ushort)88, 22504, "HVAC V2 Dual-Zone Control with Auto-Start Gen Hour Meter");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_TRIPLE_ZONE_CONTROL_WITH_AUTO_START_GEN_HOUR_METER = new PRODUCT_ID((ushort)89, 22505, "HVAC V2 Triple-Zone Control with Auto-Start Gen Hour Meter");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_SINGLE_ZONE_CONTROL = new PRODUCT_ID((ushort)90, 22506, "HVAC V2 Single-Zone Control");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_DUAL_ZONE_CONTROL = new PRODUCT_ID((ushort)91, 22507, "HVAC V2 Dual-Zone Control");
        public static readonly PRODUCT_ID MYRV_HVAC_V2_TRIPLE_ZONE_CONTROL = new PRODUCT_ID((ushort)92, 22508, "HVAC V2 Triple-Zone Control");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_PARTIAL_ASSEMBLY_1 = new PRODUCT_ID((ushort)93, 22765, "Multifunction Unity Relay Control");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_PARTIAL_ASSEMBLY_2 = new PRODUCT_ID((ushort)94, 22765, "Multifunction Unity HVAC Control");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_PARTIAL_ASSEMBLY_3 = new PRODUCT_ID((ushort)95, 22765, "Multifunction Unity Tank Monitor Control");
        public static readonly PRODUCT_ID MYRV_SWITCH_BLOCK_8BV001_ASSEMBLY = new PRODUCT_ID((ushort)96, 22814, "myRV Switch Block 8BV001");
        public static readonly PRODUCT_ID ONECONTROL_CLOUD_GATEWAY_ASSEMBLY = new PRODUCT_ID((ushort)97, 22829, "OneControl Cloud Gateway");
        public static readonly PRODUCT_ID CAN_TO_ETHERNET_GATEWAY_12V_OUT = new PRODUCT_ID((ushort)98, 23011, "CAN To Ethernet Gateway (12V out)");
        public static readonly PRODUCT_ID MYRV_CLASS_C_LEVELER_ASSEMBLY = new PRODUCT_ID((ushort)99, 23610, "myRV Class C Leveler Assembly");
        public static readonly PRODUCT_ID MYRV_BLUETOOTH_GATEWAY_ASSEMBLY = new PRODUCT_ID((ushort)100, 23357, "myRV Bluetooth Gateway Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_UBER_PARTIAL_ASSEMBLY_1_RELAY_CONTROL = new PRODUCT_ID((ushort)101, 23649, "Multifunction Uber Partial Assembly 1 (Relay Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UBER_PARTIAL_ASSEMBLY_2_HVAC_CONTROL = new PRODUCT_ID((ushort)102, 23649, "Multifunction Uber Partial Assembly 2 (HVAC Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UBER_PARTIAL_ASSEMBLY_3_LIGHTING_CONTROL = new PRODUCT_ID((ushort)103, 23649, "Multifunction Uber Partial Assembly 3 (Lighting Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_5_OUT_ELECTRICAL_BLE_ASSEMBLY = new PRODUCT_ID((ushort)104, 23651, "Multifunction Base 5-out Electrical BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_5_OUT_ELECTRICAL_NON_BLE_ASSEMBLY = new PRODUCT_ID((ushort)105, 23652, "Multifunction Base 5-out Electrical Non-BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_8_OUT_ELECTRICAL_BLE_ASSEMBLY = new PRODUCT_ID((ushort)106, 23653, "Multifunction Base 8-out Electrical BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_8_OUT_ELECTRICAL_NON_BLE_ASSEMBLY = new PRODUCT_ID((ushort)107, 23654, "Multifunction Base 8-out Electrical Non-BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_5_OUT_HYDRAULIC_BLE_ASSEMBLY = new PRODUCT_ID((ushort)108, 23656, "Multifunction Base 5-out Hydraulic BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_5_OUT_HYDRAULIC_NON_BLE_ASSEMBLY = new PRODUCT_ID((ushort)109, 23657, "Multifunction Base 5-out Hydraulic Non-BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_8_OUT_HYDRAULIC_BLE_ASSEMBLY = new PRODUCT_ID((ushort)110, 23658, "Multifunction Base 8-out Hydraulic BLE Assembly");
        public static readonly PRODUCT_ID MULTIFUNCTION_BASE_8_OUT_HYDRAULIC_NON_BLE_ASSEMBLY = new PRODUCT_ID((ushort)111, 23659, "Multifunction Base 8-out Hydraulic Non-BLE Assembly");
        public static readonly PRODUCT_ID LCI_LINCTAB_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_2 = new PRODUCT_ID((ushort)112, 23756, "Inwall Slide Control (option 2)");
        public static readonly PRODUCT_ID LCI_LINCTAB_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_3 = new PRODUCT_ID((ushort)113, 23757, "Inwall Slide Control (option 3)");
        public static readonly PRODUCT_ID LCI_LINCTAB_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_4 = new PRODUCT_ID((ushort)114, 23758, "Inwall Slide Control (option 4)");
        public static readonly PRODUCT_ID ANDROID_DEVICE = new PRODUCT_ID((ushort)115, 0, "Android Device");
        public static readonly PRODUCT_ID IOS_DEVICE = new PRODUCT_ID((ushort)116, 0, "iOS Device");
        public static readonly PRODUCT_ID WINDOWS_DEVICE = new PRODUCT_ID((ushort)117, 0, "Windows Device");
        public static readonly PRODUCT_ID MYRV_RV_C_THERMOSTAT_CONTROL = new PRODUCT_ID((ushort)118, 23904, "RV-C Thermostat Control");
        public static readonly PRODUCT_ID LCI_ONECONTROL_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_2 = new PRODUCT_ID((ushort)119, 24152, "Velocity Sync Inwall Slide Control (option 2)");
        public static readonly PRODUCT_ID LCI_ONECONTROL_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_3 = new PRODUCT_ID((ushort)120, 24153, "Velocity Sync Inwall Slide Control (option 3)");
        public static readonly PRODUCT_ID LCI_ONECONTROL_2_MOTOR_VELOCITY_SYNC_INWALL_SLIDE_CONTROL_ASSEMBLY_OPTION_4 = new PRODUCT_ID((ushort)121, 24154, "Velocity Sync Inwall Slide Control (option 4)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_M2_5_PARTIAL_ASSEMBLY_1_RELAY_CONTROL = new PRODUCT_ID((ushort)122, 24243, "Multifunction Unity M2 5 Partial Assembly 1 (Relay Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_M2_5_PARTIAL_ASSEMBLY_2_HVAC_CONTROL = new PRODUCT_ID((ushort)123, 24243, "Multifunction Unity M2 5 Partial Assembly 2 (HVAC Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_M2_5_PARTIAL_ASSEMBLY_3_TANK_MONITOR = new PRODUCT_ID((ushort)124, 24243, "Multifunction Unity M2 5 Partial Assembly 3 (Tank Monitor)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_M3_PARTIAL_ASSEMBLY_1_RELAY_CONTROL = new PRODUCT_ID((ushort)125, 24244, "Multifunction Unity M3 Partial Assembly 1 (Relay Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_M3_PARTIAL_ASSEMBLY_2_HVAC_CONTROL = new PRODUCT_ID((ushort)126, 24244, "Multifunction Unity M3 Partial Assembly 2 (HVAC Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_X3_PARTIAL_ASSEMBLY_1_RELAY_CONTROL = new PRODUCT_ID((ushort)sbyte.MaxValue, 24245, "Multifunction Unity X3 Partial Assembly 1 (Relay Control)");
        public static readonly PRODUCT_ID MULTIFUNCTION_UNITY_X3_PARTIAL_ASSEMBLY_2_HVAC_CONTROL = new PRODUCT_ID((ushort)128, 24245, "Multifunction Unity X3 Partial Assembly 2 (HVAC Control)");
        public static readonly PRODUCT_ID LCI_TT_M_5K_5K_LEVELER_FINAL_ASSY = new PRODUCT_ID((ushort)129, 24285, "TT Leveler M-5K-5K");
        public static readonly PRODUCT_ID LCI_TT_S_5K_5K_LEVELER_FINAL_ASSY = new PRODUCT_ID((ushort)130, 24289, "TT Leveler S-5K-5K");
        public static readonly PRODUCT_ID ONECONTROL_FIFTH_WHEEL_LEVELER_6PT_GC_3_0_V2_ASSEMBLY = new PRODUCT_ID((ushort)131, 24247, "Ground Control 3.0 5th Wheel Leveler v2 (6-Point)");
        public readonly ushort Value;
        public readonly int AssemblyPartNumber;
        public readonly string Name;

        public static IEnumerable<PRODUCT_ID> GetEnumerator() = > (IEnumerable<PRODUCT_ID>) PRODUCT_ID.List;

        private PRODUCT_ID(ushort value)
        {
            this.Value = value;
            this.AssemblyPartNumber = 0;
            this.Name = "UNKNOWN_" + value.ToString("X4");
            if (value <= (ushort)0 || PRODUCT_ID.Lookup.ContainsKey(value))
                return;
            PRODUCT_ID.Lookup.Add(value, this);
        }

        private PRODUCT_ID(ushort value, int assembly_number, string name)
        {
            this.Value = value;
            this.AssemblyPartNumber = assembly_number;
            this.Name = name.Trim();
            if (value <= (ushort)0)
                return;
            PRODUCT_ID.List.Add(this);
            PRODUCT_ID.Lookup.Add(value, this);
        }

        public bool IsValid = > this != null && this.Value > (ushort)0;

        public static implicit operator ushort(PRODUCT_ID msg)
        {
            if (msg == null)
                msg = PRODUCT_ID.UNKNOWN;
            return msg.Value;
        }

        public static implicit operator PRODUCT_ID(ushort value)
        {
            if (value == (ushort)0)
                return PRODUCT_ID.UNKNOWN;
            PRODUCT_ID productId;
            if (!PRODUCT_ID.Lookup.TryGetValue(value, out productId))
                productId = new PRODUCT_ID(value);
            return productId;
        }

        public override string ToString() = > this.Name;
    }
}


// Decompiled with JetBrains decompiler
// Type: IDS.Core.IDS_CAN.SESSION_ID
// Assembly: IDS.Core.IDS_CAN.Descriptors, Version=1.0.6808.1, Culture=neutral, PublicKeyToken=null
// MVID: 164E43FD-98CD-4EE0-91A2-E8AB310FA912
// Assembly location: D:\Users\darre\hack\cfile\IDS.Core.IDS_CAN.Descriptors.dll

using System.Collections.Generic;

namespace IDS.Core.IDS_CAN
{
    public sealed class SESSION_ID
    {
        private static readonly Dictionary<ushort, SESSION_ID> Lookup = new Dictionary<ushort, SESSION_ID>();
        private static readonly System.Collections.Generic.List<SESSION_ID> List = new System.Collections.Generic.List<SESSION_ID>();
        public static readonly SESSION_ID UNKNOWN = new SESSION_ID((ushort)0, 0U, nameof(UNKNOWN), "Reserved, do not use");
        public const ushort MANUFACTURING = 1;
        public const ushort DIAGNOSTIC = 2;
        public const ushort REPROGRAMMING = 3;
        public const ushort REMOTE_CONTROL = 4;
        public const ushort DAQ = 5;
        public readonly ushort Value;
        public readonly uint Cypher;
        public readonly string Name;
        public readonly string Description;

        public static IEnumerable<SESSION_ID> GetEnumerator() = > (IEnumerable<SESSION_ID>) SESSION_ID.List;

        static SESSION_ID()
        {
            SESSION_ID sessionId1 = new SESSION_ID((ushort)1, 2976620821U, nameof(MANUFACTURING), "Used to enable manufacturing features");
            SESSION_ID sessionId2 = new SESSION_ID((ushort)2, 3133065982U, nameof(DIAGNOSTIC), "Used to enable diagnostic tool features");
            SESSION_ID sessionId3 = new SESSION_ID((ushort)3, 3735928559U, nameof(REPROGRAMMING), "Used when reprogramming a device");
            SESSION_ID sessionId4 = new SESSION_ID((ushort)4, 2976579765U, nameof(REMOTE_CONTROL), "Used when enabling remote control of the device");
            SESSION_ID sessionId5 = new SESSION_ID((ushort)5, 184594741U, nameof(DAQ), "Used to enable DAQ features");
        }

        private SESSION_ID(ushort value, uint cypher, string name, string description)
        {
            this.Value = value;
            this.Cypher = cypher;
            this.Name = name.Trim();
            this.Description = description.Trim();
            if (value <= (ushort)0)
                return;
            SESSION_ID.List.Add(this);
            SESSION_ID.Lookup.Add(value, this);
        }

        public bool IsValid = > this != null && this.Value > (ushort)0;

        public static implicit operator ushort(SESSION_ID msg) = > msg.Value;

        public static implicit operator SESSION_ID(ushort value)
        {
            SESSION_ID sessionId;
            return SESSION_ID.Lookup.TryGetValue(value, out sessionId) ? sessionId : SESSION_ID.UNKNOWN;
        }

        public override string ToString() = > this.Name;

        public uint Encrypt(uint seed)
        {
            uint cypher = this.Cypher;
            int num1 = 32;
            uint num2 = 2654435769;
            while (true)
            {
                seed += (uint)(((int)cypher << 4) + 1131376761 ^ (int)cypher + (int)num2 ^ (int)(cypher >> 5) + 1919510376);
                if (--num1 > 0)
                {
                    cypher += (uint)(((int)seed << 4) + 1948272964 ^ (int)seed + (int)num2 ^ (int)(seed >> 5) + 1400073827);
                    num2 += 2654435769U;
                }
                else
                    break;
            }
            return seed;
        }
    }
}


