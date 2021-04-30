//
// gigabot.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#if !defined(SYSTEM_SECTION)
#error SYSTEM_SECTION is not defined!
#endif

#if SYSTEM_SECTION == 0
#error SYSTEM_SECTION should not be zero!
#endif


//===========================================================================
//=============================CONFIGUATION.h===========================
//===========================================================================

#define MSG_GIGABOT3 "Gigabot 3+"
#define GIGA_BUILD_VERSION "4.2.4 RC3MF"
#undef STRING_DISTRIBUTION_DATE
#define STRING_DISTRIBUTION_DATE __DATE__ " " __TIME__


#if SYSTEM_SECTION == SUBSECTION(INFO, 1)
  #undef  STRING_CONFIG_H_AUTHOR
//  #define STRING_CONFIG_H_AUTHOR "(GB3 V4.x.x - Marlin 1.1.8)"
  #undef WEBSITE_URL
  
  #define WEBSITE_URL "https://re3d.org"
  #define STRING_CONFIG_H_AUTHOR "(GB3, V4.x.x)" // Who made the changes.
  #define SHOW_BOOTSCREEN

//#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION // will be shown during bootup in line 1
//#define STRING_SPLASH_LINE2 WEBSITE_URL         // will be shown during bootup in line 2
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 1)
  #undef  MOTHERBOARD
  #define MOTHERBOARD BOARD_AZTEEG_X3_PRO
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 2
  #define HOTEND_OFFSET_X {0.0, 55.00} // (in mm) for each extruder, offset of the hotend on the X axis
  #define HOTEND_OFFSET_Y {0.0, 0.00}  // (in mm) for each extruder, offset of the hotend on the Y axis
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

  #define TEMP_SENSOR_0   -1
  #define TEMP_SENSOR_1   -1
  #define TEMP_SENSOR_2    0
  #define TEMP_SENSOR_3    0
  #define TEMP_SENSOR_4    0
  #define TEMP_SENSOR_BED -4

  #undef  TEMP_RESIDENCY_TIME
  #define TEMP_RESIDENCY_TIME 5   // (seconds)

  #undef  BED_MINTEMP
  #define BED_MINTEMP      5

  #undef  HEATER_0_MAXTEMP
  #undef  HEATER_1_MAXTEMP
  #undef  HEATER_2_MAXTEMP
  #undef  HEATER_3_MAXTEMP
  #undef  HEATER_4_MAXTEMP
  #undef  BED_MAXTEMP

  #define HEATER_0_MAXTEMP 360
  #define HEATER_1_MAXTEMP 360
  #define HEATER_2_MAXTEMP 255
  #define HEATER_3_MAXTEMP 255
  #define HEATER_4_MAXTEMP 255
  #define BED_MAXTEMP      140 	//was 150

  #if ENABLED(PIDTEMP)
    #undef  DEFAULT_Kp
    #undef  DEFAULT_Ki
    #undef  DEFAULT_Kd

    // Gigabot 3 (24 volts) 
    #define DEFAULT_Kp 32.0
    #define DEFAULT_Ki  4.0
    #define DEFAULT_Kd 74.0
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

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 2)
  #undef  EXTRUDE_MINTEMP
  #undef  PREVENT_LENGTHY_EXTRUDE
  #undef  EXTRUDE_MAXLENGTH

  #define EXTRUDE_MINTEMP 120
  #define EXTRUDE_MAXLENGTH 20000
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
  #define USE_YMAX_PLUG 
  #define USE_ZMAX_PLUG 

  #undef  X_MIN_ENDSTOP_INVERTING
  #undef  Y_MIN_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING
  #undef  X_MAX_ENDSTOP_INVERTING
  #undef  Y_MAX_ENDSTOP_INVERTING
  #undef  Z_MAX_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING

  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
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
  #define DEFAULT_MAX_ACCELERATION      { 700, 700, 100, 10000 }
  #define DEFAULT_ACCELERATION          700    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 20.0 // was 9
  #define DEFAULT_YJERK                 20.0 // was 9
#endif

#if SYSTEM_SECTION == SUBSECTION(PROBES, 1)
  // No section settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 3)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 4)
  #undef  INVERT_X_DIR
  #undef  INVERT_Y_DIR

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 4)
  #undef  INVERT_E0_DIR 
  #undef  INVERT_E1_DIR
  
  #define INVERT_E0_DIR true
  #define INVERT_E1_DIR false
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 2)
  #undef Y_HOME_DIR
  #define Y_HOME_DIR 1
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define X_BED_SIZE   590
  #define Y_BED_SIZE   610
  #define Z_MAX_POS    609

  #undef FILAMENT_RUNOUT_SENSOR 

  #define FILAMENT_RUNOUT_SENSOR
  #define CONTINUOUS_PRINTING_AFTER_FILAMENT_RUNOUT
  
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #undef NUM_RUNOUT_SENSORS

    #define NUM_RUNOUT_SENSORS   2
    #define FIL_RUNOUT_INVERTING      true  // set to true to invert the logic of the sensor.
    #define FIL_RUNOUT_PULLUP               // Uncomment to use internal pullup for filament runout pins if the sensor is defined.
    #define FILAMENT_RUNOUT_SCRIPT    "M600"
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(CALIBRATE, 1)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #define MANUAL_X_HOME_POS 0
  //#define MANUAL_Y_HOME_POS 0
  #define MANUAL_Z_HOME_POS 0
  #define MANUAL_Y_HOME_POS Y_MAX_POS
#endif

#if SYSTEM_SECTION == SUBSECTION(CALIBRATE, 2)
  // No section settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 1)
  #undef  EEPROM_SETTINGS
  #define EEPROM_SETTINGS

  #undef  M100_FREE_MEMORY
  #define M100_FREE_MEMORY_WATCHER    // Add M100 (Free Memory Watcher) to debug memory usage
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 2)
  #undef  PREHEAT_1_TEMP_HOTEND
  #undef  PREHEAT_1_TEMP_BED
  #undef  PREHEAT_2_TEMP_HOTEND
  #undef  PREHEAT_2_TEMP_BED

  #define PREHEAT_1_TEMP_HOTEND 180
  #define PREHEAT_1_TEMP_BED     60
  #define PREHEAT_2_TEMP_HOTEND 215  // was 240
  #define PREHEAT_2_TEMP_BED     115
  
  #define NOZZLE_PARK_FEATURE

  #if ENABLED(NOZZLE_PARK_FEATURE)
    #define NOZZLE_PARK_POINT { (10), (10), 3 }
    #define NOZZLE_PARK_XY_FEEDRATE 100
    #define NOZZLE_PARK_Z_FEEDRATE 5
  #endif

  #define PRINTCOUNTER
#endif

#if SYSTEM_SECTION == SUBSECTION(LCD, 1)
  #undef  SDSUPPORT
  #undef  SPI_SPEED
  #undef  SD_CHECK_AND_RETRY
  #undef  INDIVIDUAL_AXIS_HOMING_MENU
  #undef  VIKI2

  #define SDSUPPORT
  #define SPI_SPEED SPI_QUARTER_SPEED
  #define SD_CHECK_AND_RETRY
  #define INDIVIDUAL_AXIS_HOMING_MENU

  #define ULTRA_LCD  //general LCD support, also 16x2
  #define DOGLCD  // Support for SPI LCD 128x64 (Controller ST7565R graphic Display Family)
  #define VIKI2
  #define ULTIMAKERCONTROLLER 
  #define LCD_CONTRAST_MIN       0
  #define LCD_CONTRAST_MAX     255
  #define DEFAULT_LCD_CONTRAST 140

  #define LCD_INFO_MENU
  #define LCD_TIMEOUT_TO_STATUS 120000
  #define SCROLL_LONG_FILENAMES

  #if ENABLED(SDSUPPORT)
    #define SD_FINISHED_STEPPERRELEASE true 
    //#define SD_REPRINT_LAST_SELECTED_FILE
    //#define POWER_LOSS_RECOVERY
    #define SD_MENU_CONFIRM_START 
    #define SDCARD_RATHERRECENTFIRST
    //#define SDCARD_SORT_ALPHA
    #if ENABLED(SDCARD_SORT_ALPHA)
      #define SDSORT_LIMIT       40
    #endif
  #endif //sdsupport


#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 2)
  #undef  TEMP_STAT_LEDS
  #define TEMP_STAT_LEDS
#endif


//===========================================================================
//=============================CONFIGUATION_ADV.h===========================
//===========================================================================

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 3)
  #undef  THERMAL_PROTECTION_PERIOD
  #define THERMAL_PROTECTION_PERIOD 120        // was 80 Seconds
  #undef  THERMAL_PROTECTION_HYSTERESIS 
  #define THERMAL_PROTECTION_HYSTERESIS 10  	// was 8 deg
  
  #undef  TEMP_HYSTERESIS
  #define TEMP_HYSTERESIS 4       // (degC) range of +/- temperatures considered "close" to the target one

   #undef  WATCH_TEMP_PERIOD
   #define WATCH_TEMP_PERIOD 120                // Seconds

  #undef  WATCH_BED_TEMP_PERIOD
  #define WATCH_BED_TEMP_PERIOD 145            // Seconds
 #endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 5)
  // No subsection settings
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
    
    #define THERMAL_PROTECTION_BED_PERIOD 60      // Seconds
    #define THERMAL_PROTECTION_BED_HYSTERESIS 15  // Degrees Celsius
  #endif
  
  #undef  TEMP_SENSOR_AD595_GAIN
  #define TEMP_SENSOR_AD595_GAIN 2.0

  #undef  TEMP_SENSOR_AD8495_OFFSET
  #define TEMP_SENSOR_AD8495_OFFSET -250

  #undef  TEMP_SENSOR_AD8495_GAIN 
  #define TEMP_SENSOR_AD8495_GAIN 2.0 

  //#undef AD8485_FORMULA
  #define AD8495_FORMULA (5.0 * 100.0) / 1024.0 / (OVERSAMPLENR) * (TEMP_SENSOR_AD8495_GAIN) + TEMP_SENSOR_AD8495_OFFSET
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 6)
  #undef  E0_AUTO_FAN_PIN 
  #undef  E1_AUTO_FAN_PIN 
  #define E0_AUTO_FAN_PIN 16
  #define E1_AUTO_FAN_PIN 16

  #define ENDSTOPS_ALWAYS_ON_DEFAULT
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 4)
  // No subsection settings.
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
      #undef  Y2_USE_ENDSTOP

      #define Y2_USE_ENDSTOP _YMIN_
      #define Y_DUAL_ENDSTOPS_ADJUSTMENT  0
    #endif
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 5)
  #define X_HOME_BUMP_MM 5
  #define Y_HOME_BUMP_MM 5

  #undef HOMING_BUMP_DIVISOR

  #define HOMING_BUMP_DIVISOR { 5, 5, 5 }  // Re-Bump Speed Divisor (Divides the Homing Feedrate) was 20,20,5
  
  #define DUAL_NOZZLE_DUPLICATION_MODE
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 6)
  // No subsection settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(LCD, 2)
  #if ENABLED(ULTIPANEL)
 //   #undef  MANUAL_FEEDRATE
 //   #define MANUAL_FEEDRATE {10*60, 10*60, 4*60, 60} // Feedrates for manual moves along X, Y, Z, E from panel
  
    #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 4)
  // No section settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(STEPPER, 1)
  #define DIGIPOT_I2C
  #undef  DIGIPOT_I2C_NUM_CHANNELS
  #define DIGIPOT_I2C_NUM_CHANNELS    7 // AZTEEG_X3_PRO: 8 (Not sure why this was set to 7 at some point)
  #undef  DIGIPOT_I2C_MOTOR_CURRENTS
  #define DIGIPOT_I2C_MOTOR_CURRENTS  { 2.0, 2.0, 2.0, 1.68, 1.68, 1.8, 1.8 }  //  AZTEEG_X3_PRO 
#endif


#if SYSTEM_SECTION == SUBSECTION(LCD, 3)
  // No section settings.
#endif


#if SYSTEM_SECTION == SUBSECTION(SAFETY, 1)
  // No section settings.
#endif

#if SYSTEM_SECTION == SUBSECTION(LCD, 4)
  #define BABYSTEPPING
  #if ENABLED(BABYSTEPPING)
    //#define BABYSTEP_XY              // Also enable X/Y Babystepping. Not supported on DELTA!
    #define BABYSTEP_INVERT_Z false    // Change if Z babysteps should go the other way
    #define BABYSTEP_MULTIPLICATOR 5   // Babysteps are very small. Increase for faster motion. was 2.5
    //#define BABYSTEP_ZPROBE_OFFSET   // Enable to combine M851 and Babystepping
    #define DOUBLECLICK_FOR_Z_BABYSTEPPING // Double-click on the Status Screen for Z Babystepping.
    #define DOUBLECLICK_MAX_INTERVAL 1250 // Maximum interval between clicks, in milliseconds.
                                          // Note: Extra time may be added to mitigate controller latency.
    //#define BABYSTEP_ZPROBE_GFX_OVERLAY // Enable graphical overlay on Z-offset editor
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 7)
  #define LIN_ADVANCE
  #if ENABLED(LIN_ADVANCE)
    #define LIN_ADVANCE_K 0.075  // Unit: mm compression per 1mm/s extruder speed
    //#define LA_DEBUG           // If enabled, this will generate debug information output over USB.
  #endif
#endif


#if SYSTEM_SECTION == SUBSECTION(LEVELING, 1)
  // No section settings.
#endif


#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 5)
  // No section settings.
#endif


#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 5)
  // No section settings.
#endif


#if SYSTEM_SECTION == SUBSECTION(HIDDEN, 1)
  #undef  BLOCK_BUFFER_SIZE
  #define BLOCK_BUFFER_SIZE 16
#endif

#if SYSTEM_SECTION == SUBSECTION(SERIAL_BUF, 1)
  #undef  BUFSIZE
  #define BUFSIZE 16

  #define ADVANCED_PAUSE_FEATURE

  #undef FILAMENT_CHANGE_UNLOAD_FEEDRATE
  #undef ADVANCED_PAUSE_PURGE_FEEDRATE
  #undef PAUSE_PARK_NOZZLE_TIMEOUT
  #undef FILAMENT_CHANGE_UNLOAD_LENGTH

  #define FILAMENT_CHANGE_UNLOAD_FEEDRATE     10  // (mm/s) Unload filament feedrate. This can be pretty fast.
// JT NOTE: below line REDEFINED in Configuration_adv.h
//  #define ADVANCED_PAUSE_PURGE_FEEDRATE        0.1  // (mm/s) Extrude feedrate (after loading). Should be slower than load feedrate. was 1
// JT NOTE: below line REDEFINED in Configuration_adv.h
//  #define PAUSE_PARK_NOZZLE_TIMEOUT           500  // (seconds) Time limit before the nozzle is turned off for safety.
// JT NOTE: below line REDEFINED in Configuration_adv.h
//  #define FILAMENT_CHANGE_UNLOAD_LENGTH      25

  #define PARK_HEAD_ON_PAUSE
  #define HOME_BEFORE_FILAMENT_CHANGE

#endif


#undef  FIL_RUNOUT_PIN
#define FIL_RUNOUT_PIN 47

#undef  FIL_RUNOUT2_PIN
#define FIL_RUNOUT2_PIN 12

#undef  NUM_RUNOUT_SENSORS
#define NUM_RUNOUT_SENSORS  2

//#define PINS_DEBUGGING



#if SYSTEM_SECTION == SECTION(PINS_TEMPERATURE)
  #undef  TEMP_0_PIN
  #undef  TEMP_1_PIN
  #undef  TEMP_BED_PIN

  #define TEMP_0_PIN          4   // Analog Input
  #define TEMP_1_PIN          5   // Analog Input
  #define TEMP_BED_PIN        3   // Analog Input

  // #if ENABLED(VIKI2) || ENABLED(miniVIKI)
  //   #undef SD_DETECT_PIN
  //   #define SD_DETECT_PIN    49   // For easy adapter board
  //   #undef BEEPER_PIN
  //   #define  BEEPER_PIN      12   // 33 isn't physically available to the LCD display
  // #else
  //   #define STAT_LED_RED_PIN 32
  //   #define STAT_LED_BLUE_PIN 35
  // #endif

#endif

//#if SYSTEM_SECTION == SECTION(PINS_HEATERS_FANS)
#if SYSTEM_SECTION == SECTION(AZTEEG_X3_PRO)
  #undef  HEATER_BED_PIN
  #undef  FAN_PIN

  #define HEATER_BED_PIN      8
  #define FAN_PIN             17  // Part Cooling System
#endif


#if SYSTEM_SECTION == SECTION(PINS_LIMITS)
  #undef  X_MAX_PIN
  #undef  Y_MAX_PIN
  #undef  Y_MIN_PIN

  #define X_MAX_PIN         -1 //changed
  #define Y_MAX_PIN         15 //same
  #define Y_MIN_PIN         14 //same
#endif


#if SYSTEM_SECTION == SECTION(PINS_STEPPERS)
  #undef  Y_STEP_PIN
  #undef  Y_DIR_PIN
  #undef  Y_ENABLE_PIN
  #undef  Y_CS_PIN

  #define Y_STEP_PIN         60 //same
  #define Y_DIR_PIN          61 //same
  #define Y_ENABLE_PIN       56 //same
  #define Y_CS_PIN           49 //same

  #undef  Y2_STEP_PIN
  #undef  Y2_DIR_PIN
  #undef  Y2_ENABLE_PIN

  #define Y2_STEP_PIN        46 //new
  #define Y2_DIR_PIN         48 //new
  #define Y2_ENABLE_PIN      62 //new

  #undef  Z_STEP_PIN
  #undef  Z_DIR_PIN
  #undef  Z_ENABLE_PIN

  #define Z_STEP_PIN         26 //changed
  #define Z_DIR_PIN          28 //changed
  #define Z_ENABLE_PIN       24 //changed

  #undef  Z2_STEP_PIN
  #undef  Z2_DIR_PIN
  #undef  Z2_ENABLE_PIN

  #define Z2_STEP_PIN        36 //new
  #define Z2_DIR_PIN         34 //new
  #define Z2_ENABLE_PIN      30 //new

  #undef  E0_STEP_PIN
  #undef  E0_DIR_PIN
  #undef  E0_ENABLE_PIN

  #define E0_STEP_PIN        23 //changed
  #define E0_DIR_PIN         25 //changed
  #define E0_ENABLE_PIN      40 //changed

  #undef  E1_STEP_PIN
  #undef  E1_DIR_PIN
  #undef  E1_ENABLE_PIN

  #define E1_STEP_PIN        27//43 //changed
  #define E1_DIR_PIN         29//37 //changed
  #define E1_ENABLE_PIN      41//42 //changed
#endif


#if SYSTEM_SECTION == SECTION(PINS_LCD)
  // Pins for DOGM SPI LCD Support
  #define DOGLCD_A0         44 //same
  #define DOGLCD_CS         45 //same
  #define LCD_SCREEN_ROT_180 //same

  // The encoder and click button
  #define BTN_EN1           22 //same
  #define BTN_EN2           7 //same
  #define BTN_ENC           39 //same
#endif

#if SYSTEM_SECTION ==  SECTION(AZTEEG_X3_PRO)
  #undef STAT_LED_RED_PIN
  #undef STAT_LED_BLUE_PIN
  #undef SD_DETECT_PIN
  #undef BEEPER_PIN

  #define STAT_LED_RED_PIN  32 //changed
  #define STAT_LED_BLUE_PIN 35 //changed
  #define SD_DETECT_PIN     -1 //same
  #define BEEPER_PIN        33 //same
#endif
