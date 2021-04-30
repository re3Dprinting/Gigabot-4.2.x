// gigabotxl.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabotxl.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Terabot"

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #define STRING_CONFIG_H_AUTHOR "(GBTERA V4.x.x - Marlin 1.1.8)"

  #undef  SHOW_CUSTOM_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 2)
  #if ENABLED(NOZZLE_PARK_FEATURE)
	#undef NOZZLE_PARK_POINT
    #define NOZZLE_PARK_POINT { (X_MIN_POS + 915), (Y_MIN_POS + 10), 20 }
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 3)
  #undef  TEMP_HYSTERESIS

  #define TEMP_HYSTERESIS 4       // (degC) range of +/- temperatures considered "close" to the target one

  #undef  WATCH_TEMP_PERIOD
  #define WATCH_TEMP_PERIOD 60                // was 20 Seconds

  #undef  WATCH_BED_TEMP_PERIOD
  #define WATCH_BED_TEMP_PERIOD 600            // was 200 Seconds
 #endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 2
  #define HOTEND_OFFSET_X {0.0, 56.25} // (in mm) for each extruder, offset of the hotend on the X axis
  #define HOTEND_OFFSET_Y {0.0, 0.00}  // (in mm) for each extruder, offset of the hotend on the Y axis
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef  BED_MAXTEMP
  #define BED_MAXTEMP      135

  #if ENABLED(PIDTEMP)
    #undef  DEFAULT_Kp
    #undef  DEFAULT_Ki
    #undef  DEFAULT_Kd

    // Gigabot 3 (24 volts) 
    #define DEFAULT_Kp 30.38
    #define DEFAULT_Ki  0.91
    #define DEFAULT_Kd 250.09
  #endif
//#define PIDTEMPBED
  #if ENABLED(PIDTEMPBED)
    #undef  DEFAULT_bedKp
    #undef  DEFAULT_bedKi
    #undef  DEFAULT_bedKd

    #define DEFAULT_bedKp 10.00
    #define DEFAULT_bedKi 0.023
    #define DEFAULT_bedKd 304.50
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS
  #undef  X_MIN_POS

  #define X_BED_SIZE   915
  #define Y_BED_SIZE   915
  #define Z_MAX_POS    1020
  #define X_MIN_POS    -57


#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef MANUAL_X_HOME_POS 
  #define MANUAL_X_HOME_POS -57
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 66.667, 66.667, 4031.5, 937 }
  #define DEFAULT_MAX_FEEDRATE          { 100, 100, 4, 60 }
  #define DEFAULT_MAX_ACCELERATION      { 1200, 1200, 100, 10000 }
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 15.0
  #define DEFAULT_YJERK                 15.0
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 4)
  #if ENABLED(THERMAL_PROTECTION_HOTENDS)
    #undef THERMAL_PROTECTION_PERIOD
    #undef THERMAL_PROTECTION_HYSTERESIS
    
    #define THERMAL_PROTECTION_PERIOD 360          // was 180 Seconds
    #define THERMAL_PROTECTION_HYSTERESIS 15      // Degrees Celsius
  #endif

  #if ENABLED(THERMAL_PROTECTION_BED)
    #undef THERMAL_PROTECTION_BED_PERIOD
    #undef THERMAL_PROTECTION_BED_HYSTERESIS
    
    #define THERMAL_PROTECTION_BED_PERIOD 600     // was 120 Seconds
    #define THERMAL_PROTECTION_BED_HYSTERESIS 15  // Degrees Celsius
  #endif
  
  #undef  TEMP_SENSOR_AD595_GAIN
  #define TEMP_SENSOR_AD595_GAIN 2.0

  #define TEMP_SENSOR_AD8495_OFFSET -250

  #undef  TEMP_SENSOR_AD8495_GAIN 
  #define TEMP_SENSOR_AD8495_GAIN 2.0 

  #define AD8495_FORMULA (5.0 * 100.0) / 1024.0 / (OVERSAMPLENR) * (TEMP_SENSOR_AD8495_GAIN) + TEMP_SENSOR_AD8495_OFFSET
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 4)
  #undef  DIGIPOT_I2C_NUM_CHANNELS
  #define DIGIPOT_I2C_NUM_CHANNELS    7 // AZTEEG_X3_PRO: 8 (Not sure why this was set to 7 at some point)
  #undef  DIGIPOT_I2C_MOTOR_CURRENTS
  #define DIGIPOT_I2C_MOTOR_CURRENTS  { 2.25, 2.25, 2.25, 2.0, 2.0, 1.8, 1.8 }  //  AZTEEG_X3_PRO
#endif
