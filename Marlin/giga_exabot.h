// giga_exabot.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "giga_terabot.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Exabot CL"

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
  #define STRING_CONFIG_H_AUTHOR "(GBEXA V4.x.x)"

  #undef  SHOW_CUSTOM_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 2)
  #if ENABLED(NOZZLE_PARK_FEATURE)
	#undef NOZZLE_PARK_POINT
    #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MIN_POS + 10), 20 }
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 2
  #define HOTEND_OFFSET_X {0.0, 55.00} // (in mm) for each extruder, offset of the hotend on the X axis
  #define HOTEND_OFFSET_Y {0.0, 0.00}  // (in mm) for each extruder, offset of the hotend on the Y axis
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 4)
  #undef  INVERT_X_DIR
  #undef  INVERT_Y_DIR

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
#endif



#if SYSTEM_SECTION == SUBSECTION(HOMING, 2)
  #undef Y_HOME_DIR
  #define Y_HOME_DIR -1
#endif 

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS
  #undef  X_MIN_POS
  #undef  Y_MIN_POS

  #define X_BED_SIZE   780
  #define Y_BED_SIZE   780
  #define Z_MAX_POS    1600
  #define X_MIN_POS    -87
  #define Y_MIN_POS    -60
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef MANUAL_X_HOME_POS 
  #undef MANUAL_Y_HOME_POS
  
  #define MANUAL_X_HOME_POS X_MIN_POS
  #define MANUAL_Y_HOME_POS Y_MIN_POS
#endif 

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 3)
  #undef  Y_DUAL_STEPPER_DRIVERS
  #undef  Z_DUAL_STEPPER_DRIVERS

  #define Y_DUAL_STEPPER_DRIVERS
  #define Z_DUAL_STEPPER_DRIVERS 
  #define Y_DUAL_ENDSTOPS       
  #define Y2_USE_ENDSTOP       

  #if ENABLED(Y_DUAL_STEPPER_DRIVERS)
  #undef INVERT_Y2_VS_Y_DIR
    #define INVERT_Y2_VS_Y_DIR true   // Set 'true' if Y motors should rotate in opposite directions
    #define Y_DUAL_ENDSTOPS
    #if ENABLED(Y_DUAL_ENDSTOPS)
      #define Y2_USE_ENDSTOP _YMAX_
      #define Y_DUAL_ENDSTOPS_ADJUSTMENT  0
    #endif
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 66.667, 66.667, 95.613, 947 }
  #define DEFAULT_MAX_FEEDRATE          { 100, 100, 4, 8 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 25, 10000 }
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 4)
  #undef  DIGIPOT_I2C_NUM_CHANNELS
  #define DIGIPOT_I2C_NUM_CHANNELS    7 // AZTEEG_X3_PRO: 8 (Not sure why this was set to 7 at some point)
  #undef  DIGIPOT_I2C_MOTOR_CURRENTS
  #define DIGIPOT_I2C_MOTOR_CURRENTS  { 2.25, 2.25, 2.25, 2.3, 2.3, 1.8, 1.8 }  //  AZTEEG_X3_PRO
#endif
