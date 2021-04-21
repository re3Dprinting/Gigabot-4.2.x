// gigabotxl.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabot.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Gigabot X"
#undef GIGA_BUILD_VERSION
#define GIGA_BUILD_VERSION "GBX 4.2.3 Reg"

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #define STRING_CONFIG_H_AUTHOR "(GBX - Marlin 1.1.8)"

  #undef  SHOW_CUSTOM_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef  TEMP_SENSOR_2
  #define TEMP_SENSOR_2    -1
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 3)
  #if ENABLED(THERMAL_PROTECTION_HOTENDS)
    #undef WATCH_TEMP_PERIOD 
    #undef WATCH_TEMP_INCREASE
    
    #define WATCH_TEMP_PERIOD 400
    #define WATCH_TEMP_INCREASE 0.2
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 3
  #undef HOTEND_OFFSET_X
  #undef HOTEND_OFFSET_Y 
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef X_MIN_POS
  #define X_MIN_POS 33
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 2)
  #undef PREVENT_LENGTHY_EXTRUDE
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef HOMING_FEEDRATE_XY
  #undef  HOMING_FEEDRATE_Z
  #define HOMING_FEEDRATE_XY (33*60)
  #define HOMING_FEEDRATE_Z  (3*60)
  #define MANUAL_X_HOME_POS 33
  #define MANUAL_Y_HOME_POS 610
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef  TEMP_SENSOR_0
  #undef  TEMP_SENSOR_1
  #undef  TEMP_SENSOR_2
  #undef  TEMP_SENSOR_3
  #undef  TEMP_SENSOR_4
  #undef  TEMP_SENSOR_BED

  #define TEMP_SENSOR_0   -1
  #define TEMP_SENSOR_1   -1
  #define TEMP_SENSOR_2    -4
  #define TEMP_SENSOR_3    0
  #define TEMP_SENSOR_4    0
  #define TEMP_SENSOR_BED -4

  #undef HEATER_0_MAXTEMP 
  #undef HEATER_1_MAXTEMP 
  #undef HEATER_2_MAXTEMP 
  #define HEATER_0_MAXTEMP 400
  #define HEATER_1_MAXTEMP 400
  #define HEATER_2_MAXTEMP 400
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 4)
  #undef DUAL_NOZZLE_DUPLICATION_MODE
  #undef MANUAL_FEEDRATE
  #define MANUAL_FEEDRATE {50*60, 50*60, 4*60, 100}
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 106.67, 118.52, 4031.5, 600 }
  #define DEFAULT_MAX_FEEDRATE          { 150, 150, 4, 60 }
  #define DEFAULT_MAX_ACCELERATION      { 900, 900, 100, 10000 }
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 5.0
  #define DEFAULT_YJERK                 9.0
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 4)
  #undef  INVERT_X_DIR
  #undef  INVERT_Y_DIR

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define X_BED_SIZE   560
  #define Y_BED_SIZE   600
  #define X_MIN_POS    33
  #define X_MAX_POS    610
  #define Z_MAX_POS    465

  #define ADVANCED_PAUSE_FEATURE
  #define NOZZLE_PARK_FEATURE
  #undef FILAMENT_RUNOUT_SENSOR
  #undef CONTINUOUS_PRINTING_AFTER_FILAMENT_RUNOUT
#endif

#if ENABLED(SDSUPPORT)
  #undef LIN_ADVANCE
  #define LIN_ADVANCE
  #if ENABLED(LIN_ADVANCE)
    #undef LIN_ADVANCE_K
    #define LIN_ADVANCE_K 0.08  // Unit: mm compression per 1mm/s extruder speed
    //#define LA_DEBUG          // If enabled, this will generate debug information output over USB.
  #endif
#endif

#if SYSTEM_SECTION == AZTEEG_X3_PRO
  #undef  HEATER_BED_PIN
  #undef  TEMP_BED_PIN
  #undef  FAN_PIN

  #undef  TEMP_0_PIN
  #undef  TEMP_1_PIN
  #undef  TEMP_2_PIN 

  #define HEATER_BED_PIN      8
  #define FAN_PIN             17 // Part Cooling System

  #define TEMP_0_PIN          4   // Analog Input
  #define TEMP_1_PIN          5   // Analog Input
  #define TEMP_2_PIN   		    9   // Analog Input (D63)
  #define TEMP_BED_PIN        3   // Analog Input (D57)
#endif

#undef  E0_AUTO_FAN_PIN 
#undef  E1_AUTO_FAN_PIN 
#undef  E2_AUTO_FAN_PIN 
#undef  CHAMBER_AUTO_FAN_PIN
#undef  EXTRUDER_AUTO_FAN_TEMPERATURE
#undef  EXTRUDER_AUTO_FAN_SPEED

#define E0_AUTO_FAN_PIN 16
#define E1_AUTO_FAN_PIN 16  
#define E2_AUTO_FAN_PIN -1
#define CHAMBER_AUTO_FAN_PIN -1
#define EXTRUDER_AUTO_FAN_TEMPERATURE 18
#define EXTRUDER_AUTO_FAN_SPEED   255  // == full speed



//Menu Text for Pellet Extruder
#define MSG_B1 "B1"
#define MSG_B2 "B2"
#define MSG_B3 "B3"
#define MSG_B4 "B4"
#define MSG_B5 "B5"

#ifndef MSG_PELLETCHANGE
  #define MSG_PELLETCHANGE                    _UxGT("Change Pellet")
#endif
#ifndef MSG_PRIMENOZZLE
  #define MSG_PRIMENOZZLE                     _UxGT("Prime Nozzle")
#endif
#ifndef MSG_PURGENOZZLE2
  #define MSG_PURGENOZZLE2                    _UxGT("Purge 2 Minutes")
#endif
#ifndef MSG_PURGENOZZLE5
  #define MSG_PURGENOZZLE5                    _UxGT("Purge 5 Minutes")
#endif
#ifndef MSG_PURGENOZZLE10
  #define MSG_PURGENOZZLE10                    _UxGT("Purge 10 Minutes")
#endif

#undef MSG_NOZZLE
#define MSG_NOZZLE                          _UxGT("Heater Band")
#undef MSG_FILAMENT_CHANGE_NOZZLE
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Heater Band: ")
