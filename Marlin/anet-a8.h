
// anet-a8.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#define MSG_GIGABOT3 "Anet A8"
#define GIGA_BUILD_VERSION "1.1.8"
#undef STRING_DISTRIBUTION_DATE
#define STRING_DISTRIBUTION_DATE __DATE__ " " __TIME__


//===========================================================================
//=============================CONFIGUATION.h===========================
//===========================================================================
#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #undef WEBSITE_URL
  
  #define WEBSITE_URL "https://re3d.org"
  #define STRING_CONFIG_H_AUTHOR "(Bob Kuhn, Anet config)" // Who made the changes.
  #define SHOW_BOOTSCREEN

//#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION // will be shown during bootup in line 1
//#define STRING_SPLASH_LINE2 WEBSITE_URL         // will be shown during bootup in line 2
//  #define SHOW_CUSTOM_BOOTSCREEN
#endif

  
#if SYSTEM_SECTION == SUBSECTION(MACHINE, 1)
  #undef  MOTHERBOARD
  #define MOTHERBOARD BOARD_ANET_10

  #undef  BAUDRATE
  #define BAUDRATE 250000
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 1

  #undef  DEFAULT_NOMINAL_FILAMENT_DIA
  #define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 2)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef  TEMP_SENSOR_0
  #undef  TEMP_SENSOR_1
  #undef  TEMP_SENSOR_2
  #undef  TEMP_SENSOR_3
  #undef  TEMP_SENSOR_4
  #undef  TEMP_SENSOR_BED

  #define TEMP_SENSOR_0    5
  #define TEMP_SENSOR_1    0
  #define TEMP_SENSOR_2    0
  #define TEMP_SENSOR_3    0
  #define TEMP_SENSOR_4    0
  #define TEMP_SENSOR_BED  5

  #undef  TEMP_RESIDENCY_TIME
  #define TEMP_RESIDENCY_TIME 6   // (seconds)

  #undef  TEMP_BED_RESIDENCY_TIME
  #define TEMP_BED_RESIDENCY_TIME 6

  #undef  BED_MINTEMP
  #define BED_MINTEMP      5

  #undef  HEATER_0_MAXTEMP
  #undef  HEATER_1_MAXTEMP
  #undef  HEATER_2_MAXTEMP
  #undef  HEATER_3_MAXTEMP
  #undef  HEATER_4_MAXTEMP
  #undef  BED_MAXTEMP

  #define HEATER_0_MAXTEMP 250
  #define HEATER_1_MAXTEMP 275
  #define HEATER_2_MAXTEMP 275
  #define HEATER_3_MAXTEMP 275
  #define HEATER_4_MAXTEMP 275
  #define BED_MAXTEMP      130 	//was 150

  #define PIDTEMP
  #if ENABLED(PIDTEMP)
    #undef  DEFAULT_Kp
    #undef  DEFAULT_Ki
    #undef  DEFAULT_Kd

    // ANET A8 Standard Extruder at 210 Degree Celsius and 100% Fan
    //(measured after M106 S255 with M303 E0 S210 C8)
    #define DEFAULT_Kp 21.0
    #define DEFAULT_Ki 1.25
    #define DEFAULT_Kd 86.0
  #endif

//#define PIDTEMPBED
  #if ENABLED(PIDTEMPBED)
    #undef  DEFAULT_bedKp
    #undef  DEFAULT_bedKi
    #undef  DEFAULT_bedKd

    #define DEFAULT_bedKp 10.00
    #define DEFAULT_bedKi .023
    #define DEFAULT_bedKd 305.4
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 2)
  #undef  PREVENT_COLD_EXTRUSION
  #undef  EXTRUDE_MINTEMP
  #undef  PREVENT_LENGTHY_EXTRUDE
  #undef  EXTRUDE_MAXLENGTH

  #define PREVENT_COLD_EXTRUSION
  #define EXTRUDE_MINTEMP 160  // 160 guards against false tripping when the extruder fan kicks on.
  #define PREVENT_LENGTHY_EXTRUDE
  #define EXTRUDE_MAXLENGTH 200

#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 3)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 1)
  #undef  USE_XMIN_PLUG
  #undef  USE_YMIN_PLUG
  #undef  USE_ZMIN_PLUG
  #undef  USE_XMAX_PLUG
  #undef  USE_YMAX_PLUG
  #undef  USE_ZMAX_PLUG

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  //#define USE_XMAX_PLUG
  //#define USE_YMAX_PLUG
  //#define USE_ZMAX_PLUG

  #undef  ENDSTOPPULLUPS
  #define ENDSTOPPULLUPS

  #undef  X_MIN_ENDSTOP_INVERTING
  #undef  Y_MIN_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING
  #undef  X_MAX_ENDSTOP_INVERTING
  #undef  Y_MAX_ENDSTOP_INVERTING
  #undef  Z_MAX_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING
  #undef  Z_MIN_PROBE_ENDSTOP_INVERTING

  // Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
  #define X_MIN_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true  // set to true to invert the logic of the probe.

  #undef  ENDSTOP_INTERRUPTS_FEATURE
  #define ENDSTOP_INTERRUPTS_FEATURE
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_TRAVEL_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK
  #undef  DEFAULT_ZJERK
  #undef  DEFAULT_EJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, 100 }
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 8, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 10000 }

  #define DEFAULT_ACCELERATION          400     // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  5.0

#endif

#if SYSTEM_SECTION = SECTION(PROBES)
  // Not using probes on the A8.
#endif

#if SYSTEM_SECTION == SUBSECTION(Extruder, 3)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 4)
  #undef  INVERT_X_DIR
  #undef  INVERT_Y_DIR
  #undef  INVERT_Z_DIR

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 4)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 2)
  #undef X_HOME_DIR
  #undef Y_HOME_DIR
  #undef Z_HOME_DIR
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  X_MIN_POS
  #undef  Y_MIN_POS
  #undef  Z_MIN_POS
  #undef  X_MAX_POS
  #undef  Y_MAX_POS
  #undef  Z_MAX_POS

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  #define X_MIN_POS -33
  #define Y_MIN_POS -10
  #define Z_MIN_POS 0
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 240

  #undef FILAMENT_RUNOUT_SENSOR 
#endif

#if SYSTEM_SECTION == SECTION(CALIBRATE)
  #undef  DEBUG_LEVELING_FEATURE
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  //#define MANUAL_X_HOME_POS 0
  //#define MANUAL_Y_HOME_POS 0
  //#define MANUAL_Z_HOME_POS 0

  #undef  HOMING_FEEDRATE_XY
  #undef  HOMING_FEEDRATE_Z

  #define HOMING_FEEDRATE_XY (100*60)
  #define HOMING_FEEDRATE_Z  (4*60)
#endif

#if SYSTEM_SECTION == SUBSECTION(CALIBRATE, 1)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 1)
  #undef  EEPROM_SETTINGS
  #undef  EEPROM_CHITCHAT
  #define EEPROM_SETTINGS
  #define EEPROM_CHITCHAT   // Give feedback on EEPROM commands. Disable to save PROGMEM.

  #undef  HOST_KEEPALIVE_FEATURE
  #undef  DEFAULT_KEEPALIVE_INTERVAL
  #undef  BUSY_WHILE_HEATING

  #define HOST_KEEPALIVE_FEATURE       // Disable this if your host doesn't like keepalive messages
  #define DEFAULT_KEEPALIVE_INTERVAL 2 // Number of seconds between "busy" messages. Set with M113.
  #define BUSY_WHILE_HEATING            // Some hosts require "busy" messages even during heating
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 2)
  #undef  PREHEAT_1_TEMP_HOTEND
  #undef  PREHEAT_1_TEMP_BED
  #undef  PREHEAT_1_FAN_SPEED
  #undef  PREHEAT_2_TEMP_HOTEND
  #undef  PREHEAT_2_TEMP_BED
  #undef  PREHEAT_2_FAN_SPEED
  #undef  NOZZLE_PARK_FEATURE

  #define PREHEAT_1_TEMP_HOTEND 190
  #define PREHEAT_1_TEMP_BED     60
  #define PREHEAT_1_FAN_SPEED     0 // Value from 0 to 255

  #undef  NOZZLE_PARK_FEATURE
  #undef  NOZZLE_PARK_POINT
  #undef  NOZZLE_PARK_XY_FEEDRATE
  #undef  NOZZLE_PARK_Z_FEEDRATE
  
  #undef  PRINTCOUNTER
  #define PRINTCOUNTER
#endif

#if SYSTEM_SECTION == SECTION(LCD)
  #undef  DISPLAY_CHARSET_HD44780
  #undef  SDSUPPORT
  #undef  ZONESTAR_LCD

  #define DISPLAY_CHARSET_HD44780 JAPANESE
  #define SDSUPPORT
  #define ZONESTAR_LCD
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 2)
  // No subsection settings.
#endif

// Configuration_adv.h Begins here

#if SYSTEM_SECTION == SUBSECTION(LCD, 1)  
  
  #define BABYSTEPPING
  #if ENABLED(BABYSTEPPING)
    //#define BABYSTEP_XY              // Also enable X/Y Babystepping. Not supported on DELTA!
    #define BABYSTEP_INVERT_Z false    // Change if Z babysteps should go the other way
    #define BABYSTEP_MULTIPLICATOR 1   // Babysteps are very small. Increase for faster motion.
    //#define BABYSTEP_ZPROBE_OFFSET   // Enable to combine M851 and Babystepping
    //#define DOUBLECLICK_FOR_Z_BABYSTEPPING // Double-click on the Status Screen for Z Babystepping.
    #define DOUBLECLICK_MAX_INTERVAL 1250 // Maximum interval between clicks, in milliseconds.
                                          // Note: Extra time may be added to mitigate controller latency.
    //#define BABYSTEP_ZPROBE_GFX_OVERLAY // Enable graphical overlay on Z-offset editor
  #endif

  #define LIN_ADVANCE
  #if ENABLED(LIN_ADVANCE)
    #define LIN_ADVANCE_K 0.20  // Unit: mm compression per 1mm/s extruder speed
    //#define LA_DEBUG          // If enabled, this will generate debug information output over USB.
  #endif
#endif
  
//===========================================================================
//=============================CONFIGUATION_ADV.h===========================
//===========================================================================

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 3)
  #undef  THERMAL_PROTECTION_PERIOD
  #define THERMAL_PROTECTION_PERIOD 60        // Seconds
  #undef  THERMAL_PROTECTION_HYSTERESIS 
  #define THERMAL_PROTECTION_HYSTERESIS 10    // Degrees Celsius
  
   #undef  WATCH_TEMP_PERIOD
   #undef  WATCH_TEMP_INCREASE

   #define WATCH_TEMP_PERIOD 20                // Seconds
   #define WATCH_TEMP_INCREASE 2               // Degrees Celsius

  #undef  WATCH_BED_TEMP_PERIOD
  #undef  WATCH_BED_TEMP_INCREASE
  #define WATCH_BED_TEMP_PERIOD 180               // Seconds
  #define WATCH_BED_TEMP_INCREASE 2               // Degrees Celsius
 #endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 4)
  #if ENABLED(THERMAL_PROTECTION_HOTENDS)
    #undef THERMAL_PROTECTION_PERIOD
    #undef THERMAL_PROTECTION_HYSTERESIS
    
    #define THERMAL_PROTECTION_PERIOD 120          // was 60 Seconds
    #define THERMAL_PROTECTION_HYSTERESIS 15      // Degrees Celsius
  #endif

  #if ENABLED(THERMAL_PROTECTION_BED)
    #undef THERMAL_PROTECTION_BED_PERIOD
    #undef THERMAL_PROTECTION_BED_HYSTERESIS
    
    #define THERMAL_PROTECTION_BED_PERIOD 60    // Seconds
    #define THERMAL_PROTECTION_BED_HYSTERESIS 5 // Degrees Celsius
  #endif
  
  #undef  TEMP_SENSOR_AD595_GAIN
  #define TEMP_SENSOR_AD595_GAIN    1.0

  #undef  TEMP_SENSOR_AD8495_OFFSET
  #define TEMP_SENSOR_AD8495_OFFSET 0.0

  #undef  TEMP_SENSOR_AD8495_GAIN 
  #define TEMP_SENSOR_AD8495_GAIN   1.0

  //#undef AD8485_FORMULA
  #define AD8495_FORMULA (5.0 * 100.0) / 1024.0 / (OVERSAMPLENR) * (TEMP_SENSOR_AD8495_GAIN) + TEMP_SENSOR_AD8495_OFFSET
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 5)

  #undef E0_AUTO_FAN_PIN
  #undef E1_AUTO_FAN_PIN
  #undef E2_AUTO_FAN_PIN
  #undef E3_AUTO_FAN_PIN
  #undef E4_AUTO_FAN_PIN
  #undef CHAMBER_AUTO_FAN_PIN
  #undef EXTRUDER_AUTO_FAN_TEMPERATURE
  #undef EXTRUDER_AUTO_FAN_SPEED

  #define E0_AUTO_FAN_PIN -1
  #define E1_AUTO_FAN_PIN -1
  #define E2_AUTO_FAN_PIN -1
  #define E3_AUTO_FAN_PIN -1
  #define E4_AUTO_FAN_PIN -1
  #define CHAMBER_AUTO_FAN_PIN -1
  #define EXTRUDER_AUTO_FAN_TEMPERATURE 50
  #define EXTRUDER_AUTO_FAN_SPEED   255  // == full speed

  #undef ENDSTOPS_ALWAYS_ON_DEFAULT
  #define ENDSTOPS_ALWAYS_ON_DEFAULT
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 3)
  #undef  X_DUAL_STEPPER_DRIVERS
  #undef  Y_DUAL_STEPPER_DRIVERS
  #undef  Z_DUAL_STEPPER_DRIVERS
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 4)
  #define X_HOME_BUMP_MM 5
  #define Y_HOME_BUMP_MM 5
  #define Z_HOME_BUMP_MM 2

  #undef HOMING_BUMP_DIVISOR
  #define HOMING_BUMP_DIVISOR { 2, 2, 4 }  // Re-Bump Speed Divisor (Divides the Homing Feedrate)

  #undef DUAL_NOZZLE_DUPLICATION_MODE
#endif

#if SYSTEM_SECTION == SUBSECTION(LCD, 2)
  #if ENABLED(ULTIPANEL)
 //   #undef  MANUAL_FEEDRATE
 //   #define MANUAL_FEEDRATE {10*60, 10*60, 4*60, 60} // Feedrates for manual moves along X, Y, Z, E from panel
 //   #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 4)
  #undef  DIGIPOT_I2C
  #undef  DIGIPOT_I2C_NUM_CHANNELS
  #undef  DIGIPOT_I2C_MOTOR_CURRENTS
#endif

#if SYSTEM_SECTION == SUBSECTION(HIDDEN, 1)
  #undef  BLOCK_BUFFER_SIZE
  #define BLOCK_BUFFER_SIZE 16
#endif

#if SYSTEM_SECTION == SUBSECTION(SERIAL_BUF, 1)
  #undef  BUFSIZE
  #define BUFSIZE 16

  #undef ADVANCED_PAUSE_FEATURE

  #undef FILAMENT_CHANGE_UNLOAD_FEEDRATE
  #undef ADVANCED_PAUSE_PURGE_FEEDRATE
  #undef PAUSE_PARK_NOZZLE_TIMEOUT  --> check
  #undef FILAMENT_CHANGE_UNLOAD_LENGTH

  #undef PARK_HEAD_ON_PAUSE
  #undef HOME_BEFORE_FILAMENT_CHANGE
#endif


#undef  FIL_RUNOUT_PIN
#undef  FIL_RUNOUT2_PIN

#undef  NUM_RUNOUT_SENSORS
