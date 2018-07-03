// gigabotxl.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabot.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Gigabot 3+"

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #define STRING_CONFIG_H_AUTHOR "(GBXL V4.x.x - Marlin 1.1.8)"

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

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef HOMING_FEEDRATE_XY
  #undef  HOMING_FEEDRATE_Z
  #define HOMING_FEEDRATE_XY (33*60)
  #define HOMING_FEEDRATE_Z  (3*60)
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef HEATER_0_MAXTEMP 
  #undef HEATER_1_MAXTEMP 
  #define HEATER_0_MAXTEMP 400
  #define HEATER_1_MAXTEMP 400
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 4)
  #undef DUAL_NOZZLE_DUPLICATION_MODE
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 118.52, 118.52, 4031.5, 1000 }
  #define DEFAULT_MAX_FEEDRATE          { 150, 150, 4, 60 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 10000 }
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 9.0
  #define DEFAULT_YJERK                 9.0
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define X_BED_SIZE   590
  #define Y_BED_SIZE   610
  #define Z_MAX_POS    609

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
    #define LIN_ADVANCE_K 3  // Unit: mm compression per 1mm/s extruder speed
    //#define LA_DEBUG          // If enabled, this will generate debug information output over USB.
  #endif
#endif

