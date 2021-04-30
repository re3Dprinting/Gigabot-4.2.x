// How to use this file:
//
// 1. Copy to old version of firmware.
//
// 2. Open both new and old projects in Arduino IDE
//
// 3. Build the project
//
// 4. In the build directories for each project, filter this file
//    through the C preprocessor as follows:
//
//    a. Copy the compile line from the IDE
//
//    b. Replace '-c -g' with '-E'
//
//    c. Replace '-o check-gigabot.cpp' with '-o check-gigabot.pp'
//
// 5. In each build dir, use grep to remove preprocessor line-number tags:
//    grep -v '^#.*' check-gigabot.pp > check-gigabot.ppg
//
// 6. Use diff to compare the two check-gigabot.ppg files.
//
// The output of step 6 should be empty. Any differences in the diff
// indicate definitions (#define) that differ between the two
// projects. These can be tracked down and resolved.

#include "Marlin.h"
#include "Sd2Card.h"

#if defined(SHOW_BOOTSCREEN)
  const bool show_bootscreen = true;
#else
  const bool show_bootscreen = false;
#endif

#if defined(SHOW_CUSTOM_BOOTSCREEN)
  const bool show_custom_bootscreen = true;
#else
  const bool show_custom_bootscreen = false;
#endif

#if defined(USE_XMIN_PLUG )
  const bool use_xmin_plug  = true;
#else
  const bool use_xmin_plug  = false;
#endif

#if defined(USE_YMIN_PLUG )
  const bool use_ymin_plug  = true;
#else
  const bool use_ymin_plug  = false;
#endif

#if defined(USE_ZMIN_PLUG )
  const bool use_zmin_plug  = true;
#else
  const bool use_zmin_plug  = false;
#endif

//#define USE_XMAX_PLUG 
// #if defined(USE_XMAX_PLUG )
//   const bool use_xmax_plug  = true;
// #else
//   const bool use_xmax_plug  = false;
// #endif

#if defined(USE_YMAX_PLUG )
  const bool use_ymax_plug  = true;
#else
  const bool use_ymax_plug  = false;
#endif

#if defined(USE_ZMAX_PLUG )
  const bool use_zmax_plug  = true;
#else
  const bool use_zmax_plug  = false;
#endif

#if defined(FILAMENT_RUNOUT_SENSOR)
  const bool filament_runout_sensor = true;
#else
  const bool filament_runout_sensor = false;
#endif

#if defined(CONTINUOUS_PRINTING_AFTER_FILAMENT_RUNOUT)
  const bool continuous_printing_after_filament_runout = true;
#else
  const bool continuous_printing_after_filament_runout = false;
#endif

#if defined(FIL_RUNOUT_PULLUP)
  const bool fil_runout_pullup = true;
#else
  const bool fil_runout_pullup = false;
#endif

#if defined(EEPROM_SETTINGS)
  const bool eeprom_settings = true;
#else
  const bool eeprom_settings = false;
#endif

#if defined(M100_FREE_MEMORY_WATCHER)
  const bool m100_free_memory_watcher = true;
#else
  const bool m100_free_memory_watcher = false;
#endif

#if defined(NOZZLE_PARK_FEATURE)
  const bool nozzle_park_feature = true;
#else
  const bool nozzle_park_feature = false;
#endif

#if defined(SDSUPPORT)
  const bool sdsupport = true;
#else
  const bool sdsupport = false;
#endif

#if defined(SD_CHECK_AND_RETRY)
  const bool sd_check_and_retry = true;
#else
  const bool sd_check_and_retry = false;
#endif

#if defined(INDIVIDUAL_AXIS_HOMING_MENU)
  const bool individual_axis_homing_menu = true;
#else
  const bool individual_axis_homing_menu = false;
#endif

#if defined(ULTRA_LCD)
  const bool ultra_lcd = true;
#else
  const bool ultra_lcd = false;
#endif

#if defined(DOGLCD)
  const bool doglcd = true;
#else
  const bool doglcd = false;
#endif

#if defined(VIKI2)
  const bool viki2 = true;
#else
  const bool viki2 = false;
#endif

#if defined(ULTIMAKERCONTROLLER )
  const bool ultimakercontroller  = true;
#else
  const bool ultimakercontroller  = false;
#endif

#if defined(LCD_INFO_MENU)
  const bool lcd_info_menu = true;
#else
  const bool lcd_info_menu = false;
#endif

#if defined(SCROLL_LONG_FILENAMES)
  const bool scroll_long_filenames = true;
#else
  const bool scroll_long_filenames = false;
#endif

//#define SD_REPRINT_LAST_SELECTED_FILE
// #if defined(SD_REPRINT_LAST_SELECTED_FILE)
//   const bool sd_reprint_last_selected_file = true;
// #else
//   const bool sd_reprint_last_selected_file = false;
// #endif

//#define POWER_LOSS_RECOVERY
// #if defined(POWER_LOSS_RECOVERY)
//   const bool power_loss_recovery = true;
// #else
//   const bool power_loss_recovery = false;
// #endif

#if defined(SD_MENU_CONFIRM_START )
  const bool sd_menu_confirm_start  = true;
#else
  const bool sd_menu_confirm_start  = false;
#endif

#if defined(SDCARD_RATHERRECENTFIRST)
  const bool sdcard_ratherrecentfirst = true;
#else
  const bool sdcard_ratherrecentfirst = false;
#endif

#if defined(TEMP_STAT_LEDS)
  const bool temp_stat_leds = true;
#else
  const bool temp_stat_leds = false;
#endif

#if defined(ENDSTOPS_ALWAYS_ON_DEFAULT)
  const bool endstops_always_on_default = true;
#else
  const bool endstops_always_on_default = false;
#endif

#if defined(Y_DUAL_STEPPER_DRIVERS)
  const bool y_dual_stepper_drivers = true;
#else
  const bool y_dual_stepper_drivers = false;
#endif

#if defined(Z_DUAL_STEPPER_DRIVERS )
  const bool z_dual_stepper_drivers  = true;
#else
  const bool z_dual_stepper_drivers  = false;
#endif

#if defined(Y_DUAL_ENDSTOPS       )
  const bool y_dual_endstops        = true;
#else
  const bool y_dual_endstops        = false;
#endif

#if defined(Y2_USE_ENDSTOP       )
  const bool _y2_use_endstop        = true;
#else
  const bool _y2_use_endstop        = false;
#endif

// #if defined(Y_DUAL_ENDSTOPS)
//   const bool y_dual_endstops = true;
// #else
//   const bool y_dual_endstops = false;
// #endif

#if defined(DUAL_NOZZLE_DUPLICATION_MODE)
  const bool dual_nozzle_duplication_mode = true;
#else
  const bool dual_nozzle_duplication_mode = false;
#endif

#if defined(ULTIPANEL_FEEDMULTIPLY)
  const bool ultipanel_feedmultiply = true;
#else
  const bool ultipanel_feedmultiply = false;
#endif

#if defined(DIGIPOT_I2C)
  const bool digipot_i2c = true;
#else
  const bool digipot_i2c = false;
#endif

#if defined(BABYSTEPPING)
  const bool babystepping = true;
#else
  const bool babystepping = false;
#endif

#if defined(DOUBLECLICK_FOR_Z_BABYSTEPPING)
  const bool doubleclick_for_z_babystepping = true;
#else
  const bool doubleclick_for_z_babystepping = false;
#endif

#if defined(ADVANCED_PAUSE_FEATURE)
  const bool advanced_pause_feature = true;
#else
  const bool advanced_pause_feature = false;
#endif

#if defined(PARK_HEAD_ON_PAUSE)
  const bool park_head_on_pause = true;
#else
  const bool park_head_on_pause = false;
#endif

#if defined(HOME_BEFORE_FILAMENT_CHANGE)
  const bool home_before_filament_change = true;
#else
  const bool home_before_filament_change = false;
#endif

const char *msg_gigabot3 = "Gigabot 3+";
const char *giga_build_version = "4.2.4 RC3";
//const char *string_distribution_date = __DATE__ " " __TIME__;
const char *website_url = "https://re3d.org";
const char *string_config_h_author = "(GB3, V4.x.x)";
const int motherboard = MOTHERBOARD;
const int extruders = EXTRUDERS;
const float hotend_offset_x[] = HOTEND_OFFSET_X;
const float hotend_offset_y[] = HOTEND_OFFSET_Y;
const int temp_sensor_0   = TEMP_SENSOR_0  ;
const int temp_sensor_1   = TEMP_SENSOR_1  ;
const int temp_sensor_2    = TEMP_SENSOR_2   ;
const int temp_sensor_3    = TEMP_SENSOR_3   ;
const int temp_sensor_4    = TEMP_SENSOR_4   ;
const int temp_sensor_bed = TEMP_SENSOR_BED;
const int temp_residency_time = TEMP_RESIDENCY_TIME;
const int bed_mintemp      = BED_MINTEMP     ;
const int heater_0_maxtemp = HEATER_0_MAXTEMP;
const int heater_1_maxtemp = HEATER_1_MAXTEMP;
#define HEATER_2_MAXTEMP 255

#if defined(HEATER_2_MAXTEMP)
  const int heater_2_maxtemp = HEATER_2_MAXTEMP;

#endif

#if defined(HEATER_3_MAXTEMP)
  const int heater_3_maxtemp = HEATER_3_MAXTEMP;
#endif

#if defined(HEATER_4_MAXTEMP)
  const int heater_4_maxtemp = HEATER_4_MAXTEMP;
#endif

const int bed_maxtemp      = BED_MAXTEMP     ;
const float default_kp = DEFAULT_Kp; //  32.0
const float default_ki  = DEFAULT_Ki ; //  4.0
const float default_kd = DEFAULT_Kd; //  74.0

#if ENABLED(PIDTEMPBED)
  const float default_bedkp = DEFAULT_bedKp; //  10.00
  const float default_bedki = DEFAULT_bedKi; //  0.023
  const float default_bedkd = DEFAULT_bedKd; //  304.50
#endif

const int extrude_mintemp = EXTRUDE_MINTEMP; //  120
const int extrude_maxlength = EXTRUDE_MAXLENGTH; //  20000
const bool x_min_endstop_inverting = X_MIN_ENDSTOP_INVERTING; //  true
const bool y_min_endstop_inverting = Y_MIN_ENDSTOP_INVERTING; //  true
const bool z_min_endstop_inverting = Z_MIN_ENDSTOP_INVERTING; //  true
const bool x_max_endstop_inverting = X_MAX_ENDSTOP_INVERTING; //  true
const bool y_max_endstop_inverting = Y_MAX_ENDSTOP_INVERTING; //  true
const bool z_max_endstop_inverting = Z_MAX_ENDSTOP_INVERTING; //  true
//const bool z_min_endstop_inverting = Z_MIN_ENDSTOP_INVERTING; //  true
const float default_axis_steps_per_unit[]   = DEFAULT_AXIS_STEPS_PER_UNIT  ; //  { 118.52, 118.52, 4031.5, 1000 }
const int default_max_feedrate[]          = DEFAULT_MAX_FEEDRATE         ; //  { 150, 150, 4, 60 }
const int default_max_acceleration[]      = DEFAULT_MAX_ACCELERATION     ; //  { 2000, 2000, 100, 10000 }
const int default_acceleration          = DEFAULT_ACCELERATION         ; //  1000
const int default_retract_acceleration  = DEFAULT_RETRACT_ACCELERATION ; //  1500  
const float default_xjerk                 = DEFAULT_XJERK                ; //  7.0
const float default_yjerk                 = DEFAULT_YJERK                ; //  7.0
const bool invert_x_dir = INVERT_X_DIR; //  true
const bool invert_y_dir = INVERT_Y_DIR; //  false
const bool invert_e0_dir = INVERT_E0_DIR; //  true
const bool invert_e1_dir = INVERT_E1_DIR; //  false
const int y_home_dir = Y_HOME_DIR; //  1
const int x_bed_size   = X_BED_SIZE  ; //  590
const int y_bed_size   = Y_BED_SIZE  ; //  610
const int z_max_pos    = Z_MAX_POS   ; //  609
const int num_runout_sensors   = NUM_RUNOUT_SENSORS  ; //  2
const bool fil_runout_inverting = FIL_RUNOUT_INVERTING; //  true
const char *filament_runout_script = "M600";
const int manual_x_home_pos = MANUAL_X_HOME_POS; //  0
//#define MANUAL_Y_HOME_POS 0
const int manual_z_home_pos = MANUAL_Z_HOME_POS; //  0
const int manual_y_home_pos = MANUAL_Y_HOME_POS; //  Y_MAX_POS
const int preheat_1_temp_hotend = PREHEAT_1_TEMP_HOTEND; //  180
const int preheat_1_temp_bed     = PREHEAT_1_TEMP_BED    ; //  60
const int preheat_2_temp_hotend = PREHEAT_2_TEMP_HOTEND; //  215
const int preheat_2_temp_bed     = PREHEAT_2_TEMP_BED    ; //  115
const int nozzle_park_point[] = NOZZLE_PARK_POINT; //  { (10), (10), 3 }
const int nozzle_park_xy_feedrate = NOZZLE_PARK_XY_FEEDRATE; //  100
const int nozzle_park_z_feedrate = NOZZLE_PARK_Z_FEEDRATE; //  5
const int spi_speed = SPI_SPEED; //  SPI_QUARTER_SPEED
const int lcd_contrast_min       = LCD_CONTRAST_MIN      ; //  0
const int lcd_contrast_max     = LCD_CONTRAST_MAX    ; //  255
const int default_lcd_contrast = DEFAULT_LCD_CONTRAST; //  140
const long lcd_timeout_to_status = LCD_TIMEOUT_TO_STATUS; //  120000
const bool sd_finished_stepperrelease = SD_FINISHED_STEPPERRELEASE; //  true 

#if defined(SDSORT_LIMIT)
  const int sdsort_limit       = SDSORT_LIMIT      ; //  40
#endif

const int thermal_protection_period = THERMAL_PROTECTION_PERIOD; //  120
const int thermal_protection_hysteresis = THERMAL_PROTECTION_HYSTERESIS; //  10
const int temp_hysteresis = TEMP_HYSTERESIS; //  4
const int watch_temp_period = WATCH_TEMP_PERIOD; //  120
const int watch_bed_temp_period = WATCH_BED_TEMP_PERIOD; //  145
const int thermal_protection_bed_period = THERMAL_PROTECTION_BED_PERIOD; //  60
const int thermal_protection_bed_hysteresis = THERMAL_PROTECTION_BED_HYSTERESIS; //  15
const float temp_sensor_ad595_gain = TEMP_SENSOR_AD595_GAIN; //  2.0
const int temp_sensor_ad8495_offset = TEMP_SENSOR_AD8495_OFFSET; //  -250
const float temp_sensor_ad8495_gain = TEMP_SENSOR_AD8495_GAIN; //  2.0 

// Why isn't OVERSAMPLENR defined anywhere we #include?
#define OVERSAMPLENR 16
const int oversamplenr = OVERSAMPLENR;
const float ad8495_formula = AD8495_FORMULA; //  (5.0 * 100.0) / 1024.0 / (OVERSAMPLENR) * (TEMP_SENSOR_AD8495_GAIN) + TEMP_SENSOR_AD8495_OFFSET

const int e0_auto_fan_pin = E0_AUTO_FAN_PIN; //  16
const int e1_auto_fan_pin = E1_AUTO_FAN_PIN; //  16
const bool invert_y2_vs_y_dir = INVERT_Y2_VS_Y_DIR; //  true
const int y2_use_endstop = Y2_USE_ENDSTOP; //  _YMIN_
const int y_dual_endstops_adjustment  = Y_DUAL_ENDSTOPS_ADJUSTMENT ; //  0
const int x_home_bump_mm = X_HOME_BUMP_MM; //  5
const int y_home_bump_mm = Y_HOME_BUMP_MM; //  5
const int homing_bump_divisor[] = HOMING_BUMP_DIVISOR; //  { 5, 5, 5 }
//#define BABYSTEP_XY
const bool babystep_invert_z = BABYSTEP_INVERT_Z; //  false
const int babystep_multiplicator = BABYSTEP_MULTIPLICATOR; //  5
//#define BABYSTEP_ZPROBE_OFFSET   // Enable to combine M851 and Babystepping
const float lin_advance_k = LIN_ADVANCE_K; //  0.075
const int block_buffer_size = BLOCK_BUFFER_SIZE; //  16
const int bufsize = BUFSIZE; //  16
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE     10
//  #define ADVANCED_PAUSE_PURGE_FEEDRATE        0.1
//  #define PAUSE_PARK_NOZZLE_TIMEOUT           500
//  #define FILAMENT_CHANGE_UNLOAD_LENGTH      25
const int fil_runout_pin = FIL_RUNOUT_PIN; //  47
const int fil_runout2_pin = FIL_RUNOUT2_PIN; //  12

//const int num_runout_sensors  = NUM_RUNOUT_SENSORS ; //  2
const int temp_0_pin          = TEMP_0_PIN         ; //  4
const int temp_1_pin          = TEMP_1_PIN         ; //  5
const int temp_bed_pin        = TEMP_BED_PIN       ; //  3
const int heater_bed_pin      = HEATER_BED_PIN     ; //  8
const int fan_pin             = FAN_PIN            ; //  17

//------------------------------------------------------------------------

const int y_step_pin = Y_STEP_PIN;
const int y_dir_pin = Y_DIR_PIN;
const int y_enable_pin = Y_ENABLE_PIN;
const int y_cs_pin = Y_CS_PIN;

const int y2_step_pin = Y2_STEP_PIN;
const int y2_dir_pin = Y2_DIR_PIN;
const int y2_enable_pin = Y2_ENABLE_PIN;

const int z_step_pin = Z_STEP_PIN;
const int z_dir_pin = Z_DIR_PIN;
const int z_enable_pin = Z_ENABLE_PIN;

const int z2_step_pin = Z2_STEP_PIN;
const int z2_dir_pin = Z2_DIR_PIN;
const int z2_enable_pin = Z2_ENABLE_PIN;

const int e0_step_pin = E0_STEP_PIN;
const int e0_dir_pin = E0_DIR_PIN;
const int e0_enable_pin = E0_ENABLE_PIN;

const int e1_step_pin = E1_STEP_PIN;
const int e1_dir_pin = E1_DIR_PIN;
const int e1_enable_pin = E1_ENABLE_PIN;

const int x_max_pin = X_MAX_PIN;
const int y_max_pin = Y_MAX_PIN;
const int y_min_pin = Y_MIN_PIN;

const int beeper_pin = BEEPER_PIN;

const int doglcd_a0 = DOGLCD_A0;
const int doglcd_cs = DOGLCD_CS;

#if defined(LCD_SCREEN_ROT_180)
const int lcd_screen_rot_180 = true;
#else
const int lcd_screen_rot_180 = false;
#endif

const int btn_en1 = BTN_EN1;
const int btn_en2 = BTN_EN2;
const int btn_enc = BTN_ENC;

const int sd_detect_pin = SD_DETECT_PIN;

const int stat_led_red_pin = STAT_LED_RED_PIN;
const int stat_led_blue_pin = STAT_LED_BLUE_PIN;
