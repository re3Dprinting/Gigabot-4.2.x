#include "Marlin.h"

// Combined Configuration.h and Configuration_adv.h simple macros

#if defined(SHOW_BOOTSCREEN)
  const bool _show_bootscreen = true;
#else
  const bool _show_bootscreen = false;
#endif

#if defined(MK2_MULTIPLEXER)
  const bool _mk2_multiplexer = true;
#else
  const bool _mk2_multiplexer = false;
#endif

#if defined(PARKING_EXTRUDER_SOLENOIDS_INVERT)
  const bool _parking_extruder_solenoids_invert = true;
#else
  const bool _parking_extruder_solenoids_invert = false;
#endif

#if defined(AUTO_POWER_FANS)
  const bool _auto_power_fans = true;
#else
  const bool _auto_power_fans = false;
#endif

#if defined(AUTO_POWER_E_FANS)
  const bool _auto_power_e_fans = true;
#else
  const bool _auto_power_e_fans = false;
#endif

#if defined(AUTO_POWER_CONTROLLERFAN)
  const bool _auto_power_controllerfan = true;
#else
  const bool _auto_power_controllerfan = false;
#endif

#if defined(PIDTEMP)
  const bool _pidtemp = true;
#else
  const bool _pidtemp = false;
#endif

#if defined(PREVENT_COLD_EXTRUSION)
  const bool _prevent_cold_extrusion = true;
#else
  const bool _prevent_cold_extrusion = false;
#endif

#if defined(PREVENT_LENGTHY_EXTRUDE)
  const bool _prevent_lengthy_extrude = true;
#else
  const bool _prevent_lengthy_extrude = false;
#endif

#if defined(THERMAL_PROTECTION_HOTENDS)
  const bool _thermal_protection_hotends = true;
#else
  const bool _thermal_protection_hotends = false;
#endif

#if defined(THERMAL_PROTECTION_BED)
  const bool _thermal_protection_bed = true;
#else
  const bool _thermal_protection_bed = false;
#endif

#if defined(USE_XMIN_PLUG)
  const bool _use_xmin_plug = true;
#else
  const bool _use_xmin_plug = false;
#endif

#if defined(USE_YMIN_PLUG)
  const bool _use_ymin_plug = true;
#else
  const bool _use_ymin_plug = false;
#endif

#if defined(USE_ZMIN_PLUG)
  const bool _use_zmin_plug = true;
#else
  const bool _use_zmin_plug = false;
#endif

#if defined(USE_XMAX_PLUG)
  const bool _use_xmax_plug = true;
#else
  const bool _use_xmax_plug = false;
#endif

#if defined(USE_YMAX_PLUG)
  const bool _use_ymax_plug = true;
#else
  const bool _use_ymax_plug = false;
#endif

#if defined(USE_ZMAX_PLUG)
  const bool _use_zmax_plug = true;
#else
  const bool _use_zmax_plug = false;
#endif

#if defined(ENDSTOPPULLUP_XMAX)
  const bool _endstoppullup_xmax = true;
#else
  const bool _endstoppullup_xmax = false;
#endif

#if defined(ENDSTOPPULLUP_YMAX)
  const bool _endstoppullup_ymax = true;
#else
  const bool _endstoppullup_ymax = false;
#endif

#if defined(ENDSTOPPULLUP_ZMAX)
  const bool _endstoppullup_zmax = true;
#else
  const bool _endstoppullup_zmax = false;
#endif

#if defined(ENDSTOPPULLUP_XMIN)
  const bool _endstoppullup_xmin = true;
#else
  const bool _endstoppullup_xmin = false;
#endif

#if defined(ENDSTOPPULLUP_YMIN)
  const bool _endstoppullup_ymin = true;
#else
  const bool _endstoppullup_ymin = false;
#endif

#if defined(ENDSTOPPULLUP_ZMIN)
  const bool _endstoppullup_zmin = true;
#else
  const bool _endstoppullup_zmin = false;
#endif

#if defined(ENDSTOPPULLUP_ZMIN_PROBE)
  const bool _endstoppullup_zmin_probe = true;
#else
  const bool _endstoppullup_zmin_probe = false;
#endif

#if defined(Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN)
  const bool _z_min_probe_uses_z_min_endstop_pin = true;
#else
  const bool _z_min_probe_uses_z_min_endstop_pin = false;
#endif

#if defined(WAIT_FOR_BED_HEATER)
  const bool _wait_for_bed_heater = true;
#else
  const bool _wait_for_bed_heater = false;
#endif

#if defined(PROBING_FANS_OFF)
  const bool _probing_fans_off = true;
#else
  const bool _probing_fans_off = false;
#endif

#if defined(SOLENOID_PROBE)
  const bool _solenoid_probe = true;
#else
  const bool _solenoid_probe = false;
#endif

#if defined(Z_PROBE_SLED)
  const bool _z_probe_sled = true;
#else
  const bool _z_probe_sled = false;
#endif

#if defined(MIN_SOFTWARE_ENDSTOPS)
  const bool _min_software_endstops = true;
#else
  const bool _min_software_endstops = false;
#endif

#if defined(MIN_SOFTWARE_ENDSTOP_X)
  const bool _min_software_endstop_x = true;
#else
  const bool _min_software_endstop_x = false;
#endif

#if defined(MIN_SOFTWARE_ENDSTOP_Y)
  const bool _min_software_endstop_y = true;
#else
  const bool _min_software_endstop_y = false;
#endif

#if defined(MIN_SOFTWARE_ENDSTOP_Z)
  const bool _min_software_endstop_z = true;
#else
  const bool _min_software_endstop_z = false;
#endif

#if defined(MAX_SOFTWARE_ENDSTOP_X)
  const bool _max_software_endstop_x = true;
#else
  const bool _max_software_endstop_x = false;
#endif

#if defined(MAX_SOFTWARE_ENDSTOP_Y)
  const bool _max_software_endstop_y = true;
#else
  const bool _max_software_endstop_y = false;
#endif

#if defined(MAX_SOFTWARE_ENDSTOP_Z)
  const bool _max_software_endstop_z = true;
#else
  const bool _max_software_endstop_z = false;
#endif

#if defined(SOFT_ENDSTOPS_MENU_ITEM)
  const bool _soft_endstops_menu_item = true;
#else
  const bool _soft_endstops_menu_item = false;
#endif

#if defined(FILAMENT_RUNOUT_SENSOR)
  const bool _filament_runout_sensor = true;
#else
  const bool _filament_runout_sensor = false;
#endif

#if defined(FIL_RUNOUT_PULLUP)
  const bool _fil_runout_pullup = true;
#else
  const bool _fil_runout_pullup = false;
#endif

#if defined(AUTO_BED_LEVELING_3POINT)
  const bool _auto_bed_leveling_3point = true;
#else
  const bool _auto_bed_leveling_3point = false;
#endif

#if defined(AUTO_BED_LEVELING_LINEAR)
  const bool _auto_bed_leveling_linear = true;
#else
  const bool _auto_bed_leveling_linear = false;
#endif

#if defined(AUTO_BED_LEVELING_BILINEAR)
  const bool _auto_bed_leveling_bilinear = true;
#else
  const bool _auto_bed_leveling_bilinear = false;
#endif

#if defined(AUTO_BED_LEVELING_UBL)
  const bool _auto_bed_leveling_ubl = true;
#else
  const bool _auto_bed_leveling_ubl = false;
#endif

#if defined(MESH_BED_LEVELING)
  const bool _mesh_bed_leveling = true;
#else
  const bool _mesh_bed_leveling = false;
#endif

#if defined(RESTORE_LEVELING_AFTER_G28)
  const bool _restore_leveling_after_g28 = true;
#else
  const bool _restore_leveling_after_g28 = false;
#endif

#if defined(ENABLE_LEVELING_FADE_HEIGHT)
  const bool _enable_leveling_fade_height = true;
#else
  const bool _enable_leveling_fade_height = false;
#endif

#if defined(SEGMENT_LEVELED_MOVES)
  const bool _segment_leveled_moves = true;
#else
  const bool _segment_leveled_moves = false;
#endif

#if defined(PROBE_Y_FIRST)
  const bool _probe_y_first = true;
#else
  const bool _probe_y_first = false;
#endif

#if defined(MESH_EDIT_GFX_OVERLAY)
  const bool _mesh_edit_gfx_overlay = true;
#else
  const bool _mesh_edit_gfx_overlay = false;
#endif

#if defined(UBL_MESH_EDIT_MOVES_Z)
  const bool _ubl_mesh_edit_moves_z = true;
#else
  const bool _ubl_mesh_edit_moves_z = false;
#endif

#if defined(UBL_SAVE_ACTIVE_ON_M500)
  const bool _ubl_save_active_on_m500 = true;
#else
  const bool _ubl_save_active_on_m500 = false;
#endif

#if defined(MESH_G28_REST_ORIGIN)
  const bool _mesh_g28_rest_origin = true;
#else
  const bool _mesh_g28_rest_origin = false;
#endif

#if defined(LCD_BED_LEVELING)
  const bool _lcd_bed_leveling = true;
#else
  const bool _lcd_bed_leveling = false;
#endif

#if defined(LEVEL_BED_CORNERS)
  const bool _level_bed_corners = true;
#else
  const bool _level_bed_corners = false;
#endif

#if defined(LEVEL_CENTER_TOO)
  const bool _level_center_too = true;
#else
  const bool _level_center_too = false;
#endif

#if defined(BED_CENTER_AT_0_0)
  const bool _bed_center_at_0_0 = true;
#else
  const bool _bed_center_at_0_0 = false;
#endif

#if defined(Z_SAFE_HOMING)
  const bool _z_safe_homing = true;
#else
  const bool _z_safe_homing = false;
#endif

#if defined(SKEW_CORRECTION)
  const bool _skew_correction = true;
#else
  const bool _skew_correction = false;
#endif

#if defined(SKEW_CORRECTION_GCODE)
  const bool _skew_correction_gcode = true;
#else
  const bool _skew_correction_gcode = false;
#endif

#if defined(EEPROM_SETTINGS)
  const bool _eeprom_settings = true;
#else
  const bool _eeprom_settings = false;
#endif

#if defined(DISABLE_M503)
  const bool _disable_m503 = true;
#else
  const bool _disable_m503 = false;
#endif

#if defined(EEPROM_CHITCHAT)
  const bool _eeprom_chitchat = true;
#else
  const bool _eeprom_chitchat = false;
#endif

#if defined(HOST_KEEPALIVE_FEATURE)
  const bool _host_keepalive_feature = true;
#else
  const bool _host_keepalive_feature = false;
#endif

#if defined(BUSY_WHILE_HEATING)
  const bool _busy_while_heating = true;
#else
  const bool _busy_while_heating = false;
#endif

#if defined(M100_FREE_MEMORY_WATCHER)
  const bool _m100_free_memory_watcher = true;
#else
  const bool _m100_free_memory_watcher = false;
#endif

#if defined(INCH_MODE_SUPPORT)
  const bool _inch_mode_support = true;
#else
  const bool _inch_mode_support = false;
#endif

#if defined(TEMPERATURE_UNITS_SUPPORT)
  const bool _temperature_units_support = true;
#else
  const bool _temperature_units_support = false;
#endif

#if defined(NOZZLE_PARK_FEATURE)
  const bool _nozzle_park_feature = true;
#else
  const bool _nozzle_park_feature = false;
#endif

#if defined(NOZZLE_CLEAN_FEATURE)
  const bool _nozzle_clean_feature = true;
#else
  const bool _nozzle_clean_feature = false;
#endif

#if defined(NOZZLE_CLEAN_GOBACK)
  const bool _nozzle_clean_goback = true;
#else
  const bool _nozzle_clean_goback = false;
#endif

#if defined(PRINTJOB_TIMER_AUTOSTART)
  const bool _printjob_timer_autostart = true;
#else
  const bool _printjob_timer_autostart = false;
#endif

#if defined(PRINTCOUNTER)
  const bool _printcounter = true;
#else
  const bool _printcounter = false;
#endif

#if defined(ULTRA_LCD)
  const bool _ultra_lcd = true;
#else
  const bool _ultra_lcd = false;
#endif

#if defined(DOGLCD)
  const bool _doglcd = true;
#else
  const bool _doglcd = false;
#endif

#if defined(SDSUPPORT)
  const bool _sdsupport = true;
#else
  const bool _sdsupport = false;
#endif

#if defined(SD_CHECK_AND_RETRY)
  const bool _sd_check_and_retry = true;
#else
  const bool _sd_check_and_retry = false;
#endif

#if defined(NO_LCD_MENUS)
  const bool _no_lcd_menus = true;
#else
  const bool _no_lcd_menus = false;
#endif

#if defined(SLIM_LCD_MENUS)
  const bool _slim_lcd_menus = true;
#else
  const bool _slim_lcd_menus = false;
#endif

#if defined(REVERSE_ENCODER_DIRECTION)
  const bool _reverse_encoder_direction = true;
#else
  const bool _reverse_encoder_direction = false;
#endif

#if defined(REVERSE_MENU_DIRECTION)
  const bool _reverse_menu_direction = true;
#else
  const bool _reverse_menu_direction = false;
#endif

#if defined(INDIVIDUAL_AXIS_HOMING_MENU)
  const bool _individual_axis_homing_menu = true;
#else
  const bool _individual_axis_homing_menu = false;
#endif

#if defined(SPEAKER)
  const bool _speaker = true;
#else
  const bool _speaker = false;
#endif

#if defined(ULTIMAKERCONTROLLER)
  const bool _ultimakercontroller = true;
#else
  const bool _ultimakercontroller = false;
#endif

#if defined(ULTIPANEL)
  const bool _ultipanel = true;
#else
  const bool _ultipanel = false;
#endif

#if defined(PANEL_ONE)
  const bool _panel_one = true;
#else
  const bool _panel_one = false;
#endif

#if defined(MAKRPANEL)
  const bool _makrpanel = true;
#else
  const bool _makrpanel = false;
#endif

#if defined(REPRAPWORLD_GRAPHICAL_LCD)
  const bool _reprapworld_graphical_lcd = true;
#else
  const bool _reprapworld_graphical_lcd = false;
#endif

#if defined(VIKI2)
  const bool _viki2 = true;
#else
  const bool _viki2 = false;
#endif

#if defined(miniVIKI)
  const bool _miniviki = true;
#else
  const bool _miniviki = false;
#endif

#if defined(ELB_FULL_GRAPHIC_CONTROLLER)
  const bool _elb_full_graphic_controller = true;
#else
  const bool _elb_full_graphic_controller = false;
#endif

#if defined(REPRAP_DISCOUNT_SMART_CONTROLLER)
  const bool _reprap_discount_smart_controller = true;
#else
  const bool _reprap_discount_smart_controller = false;
#endif

#if defined(G3D_PANEL)
  const bool _g3d_panel = true;
#else
  const bool _g3d_panel = false;
#endif

#if defined(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
  const bool _reprap_discount_full_graphic_smart_controller = true;
#else
  const bool _reprap_discount_full_graphic_smart_controller = false;
#endif

#if defined(MINIPANEL)
  const bool _minipanel = true;
#else
  const bool _minipanel = false;
#endif

#if defined(REPRAPWORLD_KEYPAD)
  const bool _reprapworld_keypad = true;
#else
  const bool _reprapworld_keypad = false;
#endif

#if defined(RIGIDBOT_PANEL)
  const bool _rigidbot_panel = true;
#else
  const bool _rigidbot_panel = false;
#endif

#if defined(BQ_LCD_SMART_CONTROLLER)
  const bool _bq_lcd_smart_controller = true;
#else
  const bool _bq_lcd_smart_controller = false;
#endif

#if defined(CARTESIO_UI)
  const bool _cartesio_ui = true;
#else
  const bool _cartesio_ui = false;
#endif

#if defined(ZONESTAR_LCD)
  const bool _zonestar_lcd = true;
#else
  const bool _zonestar_lcd = false;
#endif

#if defined(ANET_FULL_GRAPHICS_LCD)
  const bool _anet_full_graphics_lcd = true;
#else
  const bool _anet_full_graphics_lcd = false;
#endif

#if defined(LCD_FOR_MELZI)
  const bool _lcd_for_melzi = true;
#else
  const bool _lcd_for_melzi = false;
#endif

#if defined(MALYAN_LCD)
  const bool _malyan_lcd = true;
#else
  const bool _malyan_lcd = false;
#endif

#if defined(RA_CONTROL_PANEL)
  const bool _ra_control_panel = true;
#else
  const bool _ra_control_panel = false;
#endif

#if defined(LCD_SAINSMART_I2C_1602)
  const bool _lcd_sainsmart_i2c_1602 = true;
#else
  const bool _lcd_sainsmart_i2c_1602 = false;
#endif

#if defined(LCD_SAINSMART_I2C_2004)
  const bool _lcd_sainsmart_i2c_2004 = true;
#else
  const bool _lcd_sainsmart_i2c_2004 = false;
#endif

#if defined(LCM1602)
  const bool _lcm1602 = true;
#else
  const bool _lcm1602 = false;
#endif

#if defined(LCD_I2C_PANELOLU2)
  const bool _lcd_i2c_panelolu2 = true;
#else
  const bool _lcd_i2c_panelolu2 = false;
#endif

#if defined(LCD_I2C_VIKI)
  const bool _lcd_i2c_viki = true;
#else
  const bool _lcd_i2c_viki = false;
#endif

#if defined(U8GLIB_SSD1306)
  const bool _u8glib_ssd1306 = true;
#else
  const bool _u8glib_ssd1306 = false;
#endif

#if defined(SAV_3DGLCD)
  const bool _sav_3dglcd = true;
#else
  const bool _sav_3dglcd = false;
#endif

#if defined(U8GLIB_SH1106)
  const bool _u8glib_sh1106 = true;
#else
  const bool _u8glib_sh1106 = false;
#endif

#if defined(ULTI_CONTROLLER)
  const bool _ulti_controller = true;
#else
  const bool _ulti_controller = false;
#endif

#if defined(SAV_3DLCD)
  const bool _sav_3dlcd = true;
#else
  const bool _sav_3dlcd = false;
#endif

#if defined(OLED_PANEL_TINYBOY2)
  const bool _oled_panel_tinyboy2 = true;
#else
  const bool _oled_panel_tinyboy2 = false;
#endif

#if defined(MAKEBOARD_MINI_2_LINE_DISPLAY_1602)
  const bool _makeboard_mini_2_line_display_1602 = true;
#else
  const bool _makeboard_mini_2_line_display_1602 = false;
#endif

#if defined(MKS_MINI_12864)
  const bool _mks_mini_12864 = true;
#else
  const bool _mks_mini_12864 = false;
#endif

#if defined(CR10_STOCKDISPLAY)
  const bool _cr10_stockdisplay = true;
#else
  const bool _cr10_stockdisplay = false;
#endif

#if defined(MKS_12864OLED)
  const bool _mks_12864oled = true;
#else
  const bool _mks_12864oled = false;
#endif

#if defined(MKS_12864OLED_SSD1306)
  const bool _mks_12864oled_ssd1306 = true;
#else
  const bool _mks_12864oled_ssd1306 = false;
#endif

#if defined(SILVER_GATE_GLCD_CONTROLLER)
  const bool _silver_gate_glcd_controller = true;
#else
  const bool _silver_gate_glcd_controller = false;
#endif

#if defined(FAST_PWM_FAN)
  const bool _fast_pwm_fan = true;
#else
  const bool _fast_pwm_fan = false;
#endif

#if defined(FAN_SOFT_PWM)
  const bool _fan_soft_pwm = true;
#else
  const bool _fan_soft_pwm = false;
#endif

#if defined(SOFT_PWM_DITHER)
  const bool _soft_pwm_dither = true;
#else
  const bool _soft_pwm_dither = false;
#endif

#if defined(TEMP_STAT_LEDS)
  const bool _temp_stat_leds = true;
#else
  const bool _temp_stat_leds = false;
#endif

#if defined(SF_ARC_FIX)
  const bool _sf_arc_fix = true;
#else
  const bool _sf_arc_fix = false;
#endif

#if defined(BARICUDA)
  const bool _baricuda = true;
#else
  const bool _baricuda = false;
#endif

#if defined(BLINKM)
  const bool _blinkm = true;
#else
  const bool _blinkm = false;
#endif

#if defined(PCA9632)
  const bool _pca9632 = true;
#else
  const bool _pca9632 = false;
#endif

#if defined(RGB_LED)
  const bool _rgb_led = true;
#else
  const bool _rgb_led = false;
#endif

#if defined(RGBW_LED)
  const bool _rgbw_led = true;
#else
  const bool _rgbw_led = false;
#endif

#if defined(NEOPIXEL_STARTUP_TEST)
  const bool _neopixel_startup_test = true;
#else
  const bool _neopixel_startup_test = false;
#endif

#if defined(NEOPIXEL_IS_SEQUENTIAL)
  const bool _neopixel_is_sequential = true;
#else
  const bool _neopixel_is_sequential = false;
#endif

#if defined(PRINTER_EVENT_LEDS)
  const bool _printer_event_leds = true;
#else
  const bool _printer_event_leds = false;
#endif

#if defined(DEACTIVATE_SERVOS_AFTER_MOVE)
  const bool _deactivate_servos_after_move = true;
#else
  const bool _deactivate_servos_after_move = false;
#endif

#if defined(PID_EXTRUSION_SCALING)
  const bool _pid_extrusion_scaling = true;
#else
  const bool _pid_extrusion_scaling = false;
#endif

#if defined(AUTOTEMP)
  const bool _autotemp = true;
#else
  const bool _autotemp = false;
#endif

#if defined(M114_DETAIL)
  const bool _m114_detail = true;
#else
  const bool _m114_detail = false;
#endif

#if defined(SHOW_TEMP_ADC_VALUES)
  const bool _show_temp_adc_values = true;
#else
  const bool _show_temp_adc_values = false;
#endif

#if defined(EXTRUDER_RUNOUT_PREVENT)
  const bool _extruder_runout_prevent = true;
#else
  const bool _extruder_runout_prevent = false;
#endif

#if defined(USE_CONTROLLER_FAN)
  const bool _use_controller_fan = true;
#else
  const bool _use_controller_fan = false;
#endif

#if defined(CASE_LIGHT_ENABLE)
  const bool _case_light_enable = true;
#else
  const bool _case_light_enable = false;
#endif

#if defined(MENU_ITEM_CASE_LIGHT)
  const bool _menu_item_case_light = true;
#else
  const bool _menu_item_case_light = false;
#endif

#if defined(CASE_LIGHT_USE_NEOPIXEL)
  const bool _case_light_use_neopixel = true;
#else
  const bool _case_light_use_neopixel = false;
#endif

#if defined(X_DUAL_STEPPER_DRIVERS)
  const bool _x_dual_stepper_drivers = true;
#else
  const bool _x_dual_stepper_drivers = false;
#endif

#if defined(X_DUAL_ENDSTOPS)
  const bool _x_dual_endstops = true;
#else
  const bool _x_dual_endstops = false;
#endif

#if defined(Y_DUAL_STEPPER_DRIVERS)
  const bool _y_dual_stepper_drivers = true;
#else
  const bool _y_dual_stepper_drivers = false;
#endif

#if defined(Y_DUAL_ENDSTOPS)
  const bool _y_dual_endstops = true;
#else
  const bool _y_dual_endstops = false;
#endif

#if defined(Z_DUAL_STEPPER_DRIVERS)
  const bool _z_dual_stepper_drivers = true;
#else
  const bool _z_dual_stepper_drivers = false;
#endif

#if defined(Z_DUAL_ENDSTOPS)
  const bool _z_dual_endstops = true;
#else
  const bool _z_dual_endstops = false;
#endif

#if defined(DUAL_X_CARRIAGE)
  const bool _dual_x_carriage = true;
#else
  const bool _dual_x_carriage = false;
#endif

#if defined(EXT_SOLENOID)
  const bool _ext_solenoid = true;
#else
  const bool _ext_solenoid = false;
#endif

#if defined(QUICK_HOME)
  const bool _quick_home = true;
#else
  const bool _quick_home = false;
#endif

#if defined(HOME_Y_BEFORE_X)
  const bool _home_y_before_x = true;
#else
  const bool _home_y_before_x = false;
#endif

#if defined(CODEPENDENT_XY_HOMING)
  const bool _codependent_xy_homing = true;
#else
  const bool _codependent_xy_homing = false;
#endif

#if defined(DUAL_NOZZLE_DUPLICATION_MODE)
  const bool _dual_nozzle_duplication_mode = true;
#else
  const bool _dual_nozzle_duplication_mode = false;
#endif

#if defined(ULTIPANEL_FEEDMULTIPLY)
  const bool _ultipanel_feedmultiply = true;
#else
  const bool _ultipanel_feedmultiply = false;
#endif

#if defined(SLOWDOWN)
  const bool _slowdown = true;
#else
  const bool _slowdown = false;
#endif

#if defined(DIGIPOT_I2C)
  const bool _digipot_i2c = true;
#else
  const bool _digipot_i2c = false;
#endif

#if defined(ENCODER_RATE_MULTIPLIER)
  const bool _encoder_rate_multiplier = true;
#else
  const bool _encoder_rate_multiplier = false;
#endif

#if defined(LCD_INFO_MENU)
  const bool _lcd_info_menu = true;
#else
  const bool _lcd_info_menu = false;
#endif

#if defined(STATUS_MESSAGE_SCROLLING)
  const bool _status_message_scrolling = true;
#else
  const bool _status_message_scrolling = false;
#endif

#if defined(LCD_DECIMAL_SMALL_XY)
  const bool _lcd_decimal_small_xy = true;
#else
  const bool _lcd_decimal_small_xy = false;
#endif

#if defined(LCD_SET_PROGRESS_MANUALLY)
  const bool _lcd_set_progress_manually = true;
#else
  const bool _lcd_set_progress_manually = false;
#endif

#if defined(LCD_PROGRESS_BAR)
  const bool _lcd_progress_bar = true;
#else
  const bool _lcd_progress_bar = false;
#endif

#if defined(PROGRESS_MSG_ONCE)
  const bool _progress_msg_once = true;
#else
  const bool _progress_msg_once = false;
#endif

#if defined(LCD_PROGRESS_BAR_TEST)
  const bool _lcd_progress_bar_test = true;
#else
  const bool _lcd_progress_bar_test = false;
#endif

#if defined(LED_CONTROL_MENU)
  const bool _led_control_menu = true;
#else
  const bool _led_control_menu = false;
#endif

#if defined(LED_COLOR_PRESETS)
  const bool _led_color_presets = true;
#else
  const bool _led_color_presets = false;
#endif

#if defined(LED_USER_PRESET_STARTUP)
  const bool _led_user_preset_startup = true;
#else
  const bool _led_user_preset_startup = false;
#endif

#if defined(SD_DETECT_INVERTED)
  const bool _sd_detect_inverted = true;
#else
  const bool _sd_detect_inverted = false;
#endif

#if defined(MENU_ADDAUTOSTART)
  const bool _menu_addautostart = true;
#else
  const bool _menu_addautostart = false;
#endif

#if defined(POWER_LOSS_RECOVERY)
  const bool _power_loss_recovery = true;
#else
  const bool _power_loss_recovery = false;
#endif

#if defined(SDCARD_SORT_ALPHA)
  const bool _sdcard_sort_alpha = true;
#else
  const bool _sdcard_sort_alpha = false;
#endif

#if defined(LONG_FILENAME_HOST_SUPPORT)
  const bool _long_filename_host_support = true;
#else
  const bool _long_filename_host_support = false;
#endif

#if defined(SCROLL_LONG_FILENAMES)
  const bool _scroll_long_filenames = true;
#else
  const bool _scroll_long_filenames = false;
#endif

#if defined(ABORT_ON_ENDSTOP_HIT_FEATURE_ENABLED)
  const bool _abort_on_endstop_hit_feature_enabled = true;
#else
  const bool _abort_on_endstop_hit_feature_enabled = false;
#endif

#if defined(SD_REPRINT_LAST_SELECTED_FILE)
  const bool _sd_reprint_last_selected_file = true;
#else
  const bool _sd_reprint_last_selected_file = false;
#endif

#if defined(AUTO_REPORT_SD_STATUS)
  const bool _auto_report_sd_status = true;
#else
  const bool _auto_report_sd_status = false;
#endif

#if defined(DOGM_SD_PERCENT)
  const bool _dogm_sd_percent = true;
#else
  const bool _dogm_sd_percent = false;
#endif

#if defined(XYZ_HOLLOW_FRAME)
  const bool _xyz_hollow_frame = true;
#else
  const bool _xyz_hollow_frame = false;
#endif

#if defined(MENU_HOLLOW_FRAME)
  const bool _menu_hollow_frame = true;
#else
  const bool _menu_hollow_frame = false;
#endif

#if defined(USE_BIG_EDIT_FONT)
  const bool _use_big_edit_font = true;
#else
  const bool _use_big_edit_font = false;
#endif

#if defined(USE_SMALL_INFOFONT)
  const bool _use_small_infofont = true;
#else
  const bool _use_small_infofont = false;
#endif

#if defined(OVERLAY_GFX_REVERSE)
  const bool _overlay_gfx_reverse = true;
#else
  const bool _overlay_gfx_reverse = false;
#endif

#if defined(LIGHTWEIGHT_UI)
  const bool _lightweight_ui = true;
#else
  const bool _lightweight_ui = false;
#endif

#if defined(USE_WATCHDOG)
  const bool _use_watchdog = true;
#else
  const bool _use_watchdog = false;
#endif

#if defined(WATCHDOG_RESET_MANUAL)
  const bool _watchdog_reset_manual = true;
#else
  const bool _watchdog_reset_manual = false;
#endif

#if defined(BABYSTEPPING)
  const bool _babystepping = true;
#else
  const bool _babystepping = false;
#endif

#if defined(BABYSTEP_XY)
  const bool _babystep_xy = true;
#else
  const bool _babystep_xy = false;
#endif

#if defined(BABYSTEP_ZPROBE_OFFSET)
  const bool _babystep_zprobe_offset = true;
#else
  const bool _babystep_zprobe_offset = false;
#endif

#if defined(DOUBLECLICK_FOR_Z_BABYSTEPPING)
  const bool _doubleclick_for_z_babystepping = true;
#else
  const bool _doubleclick_for_z_babystepping = false;
#endif

#if defined(BABYSTEP_ZPROBE_GFX_OVERLAY)
  const bool _babystep_zprobe_gfx_overlay = true;
#else
  const bool _babystep_zprobe_gfx_overlay = false;
#endif

#if defined(LIN_ADVANCE)
  const bool _lin_advance = true;
#else
  const bool _lin_advance = false;
#endif

#if defined(LA_DEBUG)
  const bool _la_debug = true;
#else
  const bool _la_debug = false;
#endif

#if defined(ARC_SUPPORT)
  const bool _arc_support = true;
#else
  const bool _arc_support = false;
#endif

#if defined(ARC_P_CIRCLES)
  const bool _arc_p_circles = true;
#else
  const bool _arc_p_circles = false;
#endif

#if defined(CNC_WORKSPACE_PLANES)
  const bool _cnc_workspace_planes = true;
#else
  const bool _cnc_workspace_planes = false;
#endif

#if defined(BEZIER_CURVE_SUPPORT)
  const bool _bezier_curve_support = true;
#else
  const bool _bezier_curve_support = false;
#endif

#if defined(G38_PROBE_TARGET)
  const bool _g38_probe_target = true;
#else
  const bool _g38_probe_target = false;
#endif

#if defined(SERIAL_XON_XOFF)
  const bool _serial_xon_xoff = true;
#else
  const bool _serial_xon_xoff = false;
#endif

#if defined(SERIAL_STATS_MAX_RX_QUEUED)
  const bool _serial_stats_max_rx_queued = true;
#else
  const bool _serial_stats_max_rx_queued = false;
#endif

#if defined(SERIAL_STATS_DROPPED_RX)
  const bool _serial_stats_dropped_rx = true;
#else
  const bool _serial_stats_dropped_rx = false;
#endif

#if defined(EMERGENCY_PARSER)
  const bool _emergency_parser = true;
#else
  const bool _emergency_parser = false;
#endif

#if defined(ADVANCED_OK)
  const bool _advanced_ok = true;
#else
  const bool _advanced_ok = false;
#endif

#if defined(FWRETRACT)
  const bool _fwretract = true;
#else
  const bool _fwretract = false;
#endif

#if defined(EXTRA_FAN_SPEED)
  const bool _extra_fan_speed = true;
#else
  const bool _extra_fan_speed = false;
#endif

#if defined(ADVANCED_PAUSE_FEATURE)
  const bool _advanced_pause_feature = true;
#else
  const bool _advanced_pause_feature = false;
#endif

#if defined(ADVANCED_PAUSE_CONTINUOUS_PURGE)
  const bool _advanced_pause_continuous_purge = true;
#else
  const bool _advanced_pause_continuous_purge = false;
#endif

#if defined(PAUSE_PARK_NO_STEPPER_TIMEOUT)
  const bool _pause_park_no_stepper_timeout = true;
#else
  const bool _pause_park_no_stepper_timeout = false;
#endif

#if defined(PARK_HEAD_ON_PAUSE)
  const bool _park_head_on_pause = true;
#else
  const bool _park_head_on_pause = false;
#endif

#if defined(HOME_BEFORE_FILAMENT_CHANGE)
  const bool _home_before_filament_change = true;
#else
  const bool _home_before_filament_change = false;
#endif

#if defined(HOME_AFTER_FILAMENT_CHANGE)
  const bool _home_after_filament_change = true;
#else
  const bool _home_after_filament_change = false;
#endif

#if defined(FILAMENT_LOAD_UNLOAD_GCODES)
  const bool _filament_load_unload_gcodes = true;
#else
  const bool _filament_load_unload_gcodes = false;
#endif

#if defined(FILAMENT_UNLOAD_ALL_EXTRUDERS)
  const bool _filament_unload_all_extruders = true;
#else
  const bool _filament_unload_all_extruders = false;
#endif

#if defined(HAVE_TMC26X)
  const bool _have_tmc26x = true;
#else
  const bool _have_tmc26x = false;
#endif

#if defined(X_IS_TMC26X)
  const bool _x_is_tmc26x = true;
#else
  const bool _x_is_tmc26x = false;
#endif

#if defined(X2_IS_TMC26X)
  const bool _x2_is_tmc26x = true;
#else
  const bool _x2_is_tmc26x = false;
#endif

#if defined(Y_IS_TMC26X)
  const bool _y_is_tmc26x = true;
#else
  const bool _y_is_tmc26x = false;
#endif

#if defined(Y2_IS_TMC26X)
  const bool _y2_is_tmc26x = true;
#else
  const bool _y2_is_tmc26x = false;
#endif

#if defined(Z_IS_TMC26X)
  const bool _z_is_tmc26x = true;
#else
  const bool _z_is_tmc26x = false;
#endif

#if defined(Z2_IS_TMC26X)
  const bool _z2_is_tmc26x = true;
#else
  const bool _z2_is_tmc26x = false;
#endif

#if defined(E0_IS_TMC26X)
  const bool _e0_is_tmc26x = true;
#else
  const bool _e0_is_tmc26x = false;
#endif

#if defined(E1_IS_TMC26X)
  const bool _e1_is_tmc26x = true;
#else
  const bool _e1_is_tmc26x = false;
#endif

#if defined(E2_IS_TMC26X)
  const bool _e2_is_tmc26x = true;
#else
  const bool _e2_is_tmc26x = false;
#endif

#if defined(E3_IS_TMC26X)
  const bool _e3_is_tmc26x = true;
#else
  const bool _e3_is_tmc26x = false;
#endif

#if defined(E4_IS_TMC26X)
  const bool _e4_is_tmc26x = true;
#else
  const bool _e4_is_tmc26x = false;
#endif

#if defined(HAVE_TMC2130)
  const bool _have_tmc2130 = true;
#else
  const bool _have_tmc2130 = false;
#endif

#if defined(X_IS_TMC2130)
  const bool _x_is_tmc2130 = true;
#else
  const bool _x_is_tmc2130 = false;
#endif

#if defined(X2_IS_TMC2130)
  const bool _x2_is_tmc2130 = true;
#else
  const bool _x2_is_tmc2130 = false;
#endif

#if defined(Y_IS_TMC2130)
  const bool _y_is_tmc2130 = true;
#else
  const bool _y_is_tmc2130 = false;
#endif

#if defined(Y2_IS_TMC2130)
  const bool _y2_is_tmc2130 = true;
#else
  const bool _y2_is_tmc2130 = false;
#endif

#if defined(Z_IS_TMC2130)
  const bool _z_is_tmc2130 = true;
#else
  const bool _z_is_tmc2130 = false;
#endif

#if defined(Z2_IS_TMC2130)
  const bool _z2_is_tmc2130 = true;
#else
  const bool _z2_is_tmc2130 = false;
#endif

#if defined(E0_IS_TMC2130)
  const bool _e0_is_tmc2130 = true;
#else
  const bool _e0_is_tmc2130 = false;
#endif

#if defined(E1_IS_TMC2130)
  const bool _e1_is_tmc2130 = true;
#else
  const bool _e1_is_tmc2130 = false;
#endif

#if defined(E2_IS_TMC2130)
  const bool _e2_is_tmc2130 = true;
#else
  const bool _e2_is_tmc2130 = false;
#endif

#if defined(E3_IS_TMC2130)
  const bool _e3_is_tmc2130 = true;
#else
  const bool _e3_is_tmc2130 = false;
#endif

#if defined(E4_IS_TMC2130)
  const bool _e4_is_tmc2130 = true;
#else
  const bool _e4_is_tmc2130 = false;
#endif

#if defined(HAVE_TMC2208)
  const bool _have_tmc2208 = true;
#else
  const bool _have_tmc2208 = false;
#endif

#if defined(X_IS_TMC2208)
  const bool _x_is_tmc2208 = true;
#else
  const bool _x_is_tmc2208 = false;
#endif

#if defined(X2_IS_TMC2208)
  const bool _x2_is_tmc2208 = true;
#else
  const bool _x2_is_tmc2208 = false;
#endif

#if defined(Y_IS_TMC2208)
  const bool _y_is_tmc2208 = true;
#else
  const bool _y_is_tmc2208 = false;
#endif

#if defined(Y2_IS_TMC2208)
  const bool _y2_is_tmc2208 = true;
#else
  const bool _y2_is_tmc2208 = false;
#endif

#if defined(Z_IS_TMC2208)
  const bool _z_is_tmc2208 = true;
#else
  const bool _z_is_tmc2208 = false;
#endif

#if defined(Z2_IS_TMC2208)
  const bool _z2_is_tmc2208 = true;
#else
  const bool _z2_is_tmc2208 = false;
#endif

#if defined(E0_IS_TMC2208)
  const bool _e0_is_tmc2208 = true;
#else
  const bool _e0_is_tmc2208 = false;
#endif

#if defined(E1_IS_TMC2208)
  const bool _e1_is_tmc2208 = true;
#else
  const bool _e1_is_tmc2208 = false;
#endif

#if defined(E2_IS_TMC2208)
  const bool _e2_is_tmc2208 = true;
#else
  const bool _e2_is_tmc2208 = false;
#endif

#if defined(E3_IS_TMC2208)
  const bool _e3_is_tmc2208 = true;
#else
  const bool _e3_is_tmc2208 = false;
#endif

#if defined(E4_IS_TMC2208)
  const bool _e4_is_tmc2208 = true;
#else
  const bool _e4_is_tmc2208 = false;
#endif

#if defined(TMC_USE_SW_SPI)
  const bool _tmc_use_sw_spi = true;
#else
  const bool _tmc_use_sw_spi = false;
#endif

#if defined(STEALTHCHOP)
  const bool _stealthchop = true;
#else
  const bool _stealthchop = false;
#endif

#if defined(MONITOR_DRIVER_STATUS)
  const bool _monitor_driver_status = true;
#else
  const bool _monitor_driver_status = false;
#endif

#if defined(REPORT_CURRENT_CHANGE)
  const bool _report_current_change = true;
#else
  const bool _report_current_change = false;
#endif

#if defined(STOP_ON_ERROR)
  const bool _stop_on_error = true;
#else
  const bool _stop_on_error = false;
#endif

#if defined(HYBRID_THRESHOLD)
  const bool _hybrid_threshold = true;
#else
  const bool _hybrid_threshold = false;
#endif

#if defined(SENSORLESS_HOMING)
  const bool _sensorless_homing = true;
#else
  const bool _sensorless_homing = false;
#endif

#if defined(TMC_DEBUG)
  const bool _tmc_debug = true;
#else
  const bool _tmc_debug = false;
#endif

#if defined(TMC_Z_CALIBRATION)
  const bool _tmc_z_calibration = true;
#else
  const bool _tmc_z_calibration = false;
#endif

#if defined(HAVE_L6470DRIVER)
  const bool _have_l6470driver = true;
#else
  const bool _have_l6470driver = false;
#endif

#if defined(X_IS_L6470)
  const bool _x_is_l6470 = true;
#else
  const bool _x_is_l6470 = false;
#endif

#if defined(X2_IS_L6470)
  const bool _x2_is_l6470 = true;
#else
  const bool _x2_is_l6470 = false;
#endif

#if defined(Y_IS_L6470)
  const bool _y_is_l6470 = true;
#else
  const bool _y_is_l6470 = false;
#endif

#if defined(Y2_IS_L6470)
  const bool _y2_is_l6470 = true;
#else
  const bool _y2_is_l6470 = false;
#endif

#if defined(Z_IS_L6470)
  const bool _z_is_l6470 = true;
#else
  const bool _z_is_l6470 = false;
#endif

#if defined(Z2_IS_L6470)
  const bool _z2_is_l6470 = true;
#else
  const bool _z2_is_l6470 = false;
#endif

#if defined(E0_IS_L6470)
  const bool _e0_is_l6470 = true;
#else
  const bool _e0_is_l6470 = false;
#endif

#if defined(E1_IS_L6470)
  const bool _e1_is_l6470 = true;
#else
  const bool _e1_is_l6470 = false;
#endif

#if defined(E2_IS_L6470)
  const bool _e2_is_l6470 = true;
#else
  const bool _e2_is_l6470 = false;
#endif

#if defined(E3_IS_L6470)
  const bool _e3_is_l6470 = true;
#else
  const bool _e3_is_l6470 = false;
#endif

#if defined(E4_IS_L6470)
  const bool _e4_is_l6470 = true;
#else
  const bool _e4_is_l6470 = false;
#endif

#if defined(EXPERIMENTAL_I2CBUS)
  const bool _experimental_i2cbus = true;
#else
  const bool _experimental_i2cbus = false;
#endif

#if defined(SPINDLE_LASER_ENABLE)
  const bool _spindle_laser_enable = true;
#else
  const bool _spindle_laser_enable = false;
#endif

#if defined(FILAMENT_WIDTH_SENSOR)
  const bool _filament_width_sensor = true;
#else
  const bool _filament_width_sensor = false;
#endif

#if defined(FILAMENT_LCD_DISPLAY)
  const bool _filament_lcd_display = true;
#else
  const bool _filament_lcd_display = false;
#endif

#if defined(CNC_COORDINATE_SYSTEMS)
  const bool _cnc_coordinate_systems = true;
#else
  const bool _cnc_coordinate_systems = false;
#endif

#if defined(PINS_DEBUGGING)
  const bool _pins_debugging = true;
#else
  const bool _pins_debugging = false;
#endif

#if defined(AUTO_REPORT_TEMPERATURES)
  const bool _auto_report_temperatures = true;
#else
  const bool _auto_report_temperatures = false;
#endif

#if defined(EXTENDED_CAPABILITIES_REPORT)
  const bool _extended_capabilities_report = true;
#else
  const bool _extended_capabilities_report = false;
#endif

#if defined(NO_VOLUMETRICS)
  const bool _no_volumetrics = true;
#else
  const bool _no_volumetrics = false;
#endif

#if defined(VOLUMETRIC_DEFAULT_ON)
  const bool _volumetric_default_on = true;
#else
  const bool _volumetric_default_on = false;
#endif

#if defined(NO_WORKSPACE_OFFSETS)
  const bool _no_workspace_offsets = true;
#else
  const bool _no_workspace_offsets = false;
#endif

#if defined(FASTER_GCODE_PARSER)
  const bool _faster_gcode_parser = true;
#else
  const bool _faster_gcode_parser = false;
#endif

#if defined(CUSTOM_USER_MENUS)
  const bool _custom_user_menus = true;
#else
  const bool _custom_user_menus = false;
#endif

#if defined(USER_SCRIPT_AUDIBLE_FEEDBACK)
  const bool _user_script_audible_feedback = true;
#else
  const bool _user_script_audible_feedback = false;
#endif

#if defined(I2C_POSITION_ENCODERS)
  const bool _i2c_position_encoders = true;
#else
  const bool _i2c_position_encoders = false;
#endif

#if defined(I2CPE_ENC_1_INVERT)
  const bool _i2cpe_enc_1_invert = true;
#else
  const bool _i2cpe_enc_1_invert = false;
#endif

#if defined(I2CPE_ENC_2_INVERT)
  const bool _i2cpe_enc_2_invert = true;
#else
  const bool _i2cpe_enc_2_invert = false;
#endif

#if defined(MAX7219_DEBUG)
  const bool _max7219_debug = true;
#else
  const bool _max7219_debug = false;
#endif

#if defined(NANODLP_Z_SYNC)
  const bool _nanodlp_z_sync = true;
#else
  const bool _nanodlp_z_sync = false;
#endif

#if defined(NANODLP_ALL_AXIS)
  const bool _nanodlp_all_axis = true;
#else
  const bool _nanodlp_all_axis = false;
#endif

#if defined(PS_DEFAULT_OFF)
  const bool _ps_default_off = true;
#else
  const bool _ps_default_off = false;
#endif

#if defined(AUTO_POWER_CONTROL)
  const bool _auto_power_control = true;
#else
  const bool _auto_power_control = false;
#endif

#if defined(HEPHESTOS2_HEATED_BED_KIT)
  const bool _hephestos2_heated_bed_kit = true;
#else
  const bool _hephestos2_heated_bed_kit = false;
#endif

#if defined(DIRECT_MIXING_IN_G1)
  const bool _direct_mixing_in_g1 = true;
#else
  const bool _direct_mixing_in_g1 = false;
#endif

#if defined(ENDSTOPPULLUPS)
  const bool _endstoppullups = true;
#else
  const bool _endstoppullups = false;
#endif

#if defined(DEBUG_LEVELING_FEATURE)
  const bool _debug_leveling_feature = true;
#else
  const bool _debug_leveling_feature = false;
#endif

#if defined(DIGIPOT_MCP4018)
  const bool _digipot_mcp4018 = true;
#else
  const bool _digipot_mcp4018 = false;
#endif

#if defined(SDCARD_RATHERRECENTFIRST)
  const bool _sdcard_ratherrecentfirst = true;
#else
  const bool _sdcard_ratherrecentfirst = false;
#endif

#if defined(MAX_SOFTWARE_ENDSTOPS)
  const bool _max_software_endstops = true;
#else
  const bool _max_software_endstops = false;
#endif

#if defined(MAX7219_DEBUG_PRINTER_ALIVE)
  const bool _max7219_debug_printer_alive = true;
#else
  const bool _max7219_debug_printer_alive = false;
#endif

#if defined(I2CPE_ERR_ROLLING_AVERAGE)
  const bool _i2cpe_err_rolling_average = true;
#else
  const bool _i2cpe_err_rolling_average = false;
#endif


// Begin Configuration.h values

const char *_string_config_h_author = STRING_CONFIG_H_AUTHOR;
const char *_string_splash_line1 = STRING_SPLASH_LINE1;
const char *_string_splash_line2 = STRING_SPLASH_LINE2;
const int _serial_port = SERIAL_PORT;
const long _baudrate = BAUDRATE;
#ifndef MOTHERBOARD
  const int _motherboard = MOTHERBOARD;
#endif
const int _extruders = EXTRUDERS;
const float _default_nominal_filament_dia = DEFAULT_NOMINAL_FILAMENT_DIA;
#if ENABLED(MK2_MULTIPLEXER)
  const int _e_mux0_pin = E_MUX0_PIN;
  const int _e_mux1_pin = E_MUX1_PIN;
  const int _e_mux2_pin = E_MUX2_PIN;
#endif
#if ENABLED(SWITCHING_EXTRUDER)
  const int _switching_extruder_servo_nr = SWITCHING_EXTRUDER_SERVO_NR;
  const int _switching_extruder_servo_angles[] = SWITCHING_EXTRUDER_SERVO_ANGLES;
  #if EXTRUDERS > 3
    const int _switching_extruder_e23_servo_nr = SWITCHING_EXTRUDER_E23_SERVO_NR;
  #endif
#endif
#if ENABLED(SWITCHING_NOZZLE)
  const int _switching_nozzle_servo_nr = SWITCHING_NOZZLE_SERVO_NR;
  const int _switching_nozzle_servo_angles[] = SWITCHING_NOZZLE_SERVO_ANGLES;
  const float _hotend_offset_z[] = HOTEND_OFFSET_Z;
#endif
#if ENABLED(PARKING_EXTRUDER)
  const int _parking_extruder_solenoids_pins_active = PARKING_EXTRUDER_SOLENOIDS_PINS_ACTIVE;
  const int _parking_extruder_solenoids_delay = PARKING_EXTRUDER_SOLENOIDS_DELAY;
  const int _parking_extruder_parking_x[] = PARKING_EXTRUDER_PARKING_X;
  const int _parking_extruder_grab_distance = PARKING_EXTRUDER_GRAB_DISTANCE;
  const int _parking_extruder_security_raise = PARKING_EXTRUDER_SECURITY_RAISE;
  const float _hotend_offset_z[] = HOTEND_OFFSET_Z;
#endif
#if ENABLED(MIXING_EXTRUDER)
  const int _mixing_steppers = MIXING_STEPPERS;
  const int _mixing_virtual_tools = MIXING_VIRTUAL_TOOLS;
#endif
const int _power_supply = POWER_SUPPLY;
#if POWER_SUPPLY > 0
  #if ENABLED(AUTO_POWER_CONTROL)
    const int _power_timeout = POWER_TIMEOUT;
  #endif
#endif
const int _temp_sensor_0 = TEMP_SENSOR_0;
const int _temp_sensor_1 = TEMP_SENSOR_1;
const int _temp_sensor_2 = TEMP_SENSOR_2;
const int _temp_sensor_3 = TEMP_SENSOR_3;
const int _temp_sensor_4 = TEMP_SENSOR_4;
const int _temp_sensor_bed = TEMP_SENSOR_BED;
const int _temp_sensor_chamber = TEMP_SENSOR_CHAMBER;
const int _dummy_thermistor_998_value = DUMMY_THERMISTOR_998_VALUE;
const int _dummy_thermistor_999_value = DUMMY_THERMISTOR_999_VALUE;
const int _max_redundant_temp_sensor_diff = MAX_REDUNDANT_TEMP_SENSOR_DIFF;
const int _temp_residency_time = TEMP_RESIDENCY_TIME;
const int _temp_hysteresis = TEMP_HYSTERESIS;
const int _temp_window     = TEMP_WINDOW    ;
const int _temp_bed_residency_time = TEMP_BED_RESIDENCY_TIME;
const int _temp_bed_hysteresis = TEMP_BED_HYSTERESIS;
const int _temp_bed_window     = TEMP_BED_WINDOW    ;
const int _heater_0_mintemp = HEATER_0_MINTEMP;
const int _heater_1_mintemp = HEATER_1_MINTEMP;

#if defined(HEATER_2_MINTEMP)
  const int _heater_2_mintemp = HEATER_2_MINTEMP;
#endif

#if defined(HEATER_3_MINTEMP)
  const int _heater_3_mintemp = HEATER_3_MINTEMP;
#endif

#if defined(HEATER_4_MINTEMP)
  const int _heater_4_mintemp = HEATER_4_MINTEMP;
#endif

const int _bed_mintemp = BED_MINTEMP;
const int _heater_0_maxtemp = HEATER_0_MAXTEMP;
const int _heater_1_maxtemp = HEATER_1_MAXTEMP;

#if defined(HEATER_2_MINTEMP)
  const int _heater_2_maxtemp = HEATER_2_MAXTEMP;
#endif

#if defined(HEATER_3_MINTEMP)
  const int _heater_3_maxtemp = HEATER_3_MAXTEMP;
#endif

#if defined(HEATER_4_MINTEMP)
  const int _heater_4_maxtemp = HEATER_4_MAXTEMP;
#endif

const int _bed_maxtemp = BED_MAXTEMP;
const int _bang_max = BANG_MAX;
const int _pid_max = PID_MAX;
const float _pid_k1 = PID_K1;
#if ENABLED(PIDTEMP)
  const int _pid_functional_range = PID_FUNCTIONAL_RANGE;
  const float _default_kp = DEFAULT_Kp;
  const float _default_ki = DEFAULT_Ki;
  const float _default_kd = DEFAULT_Kd;
#endif
const int _max_bed_power = MAX_BED_POWER;
#if ENABLED(PIDTEMPBED)
  const float _default_bedkp = DEFAULT_bedKp;
  const float _default_bedki = DEFAULT_bedKi;
  const float _default_bedkd = DEFAULT_bedKd;
#endif
const int _extrude_mintemp = EXTRUDE_MINTEMP;
const int _extrude_maxlength = EXTRUDE_MAXLENGTH;
const bool _x_min_endstop_inverting = X_MIN_ENDSTOP_INVERTING;
const bool _y_min_endstop_inverting = Y_MIN_ENDSTOP_INVERTING;
const bool _z_min_endstop_inverting = Z_MIN_ENDSTOP_INVERTING;
const bool _x_max_endstop_inverting = X_MAX_ENDSTOP_INVERTING;
const bool _y_max_endstop_inverting = Y_MAX_ENDSTOP_INVERTING;
const bool _z_max_endstop_inverting = Z_MAX_ENDSTOP_INVERTING;
const bool _z_min_probe_endstop_inverting = Z_MIN_PROBE_ENDSTOP_INVERTING;
const float _default_axis_steps_per_unit[]   = DEFAULT_AXIS_STEPS_PER_UNIT  ;
const int _default_max_feedrate[]          = DEFAULT_MAX_FEEDRATE         ;
const int _default_max_acceleration[]      = DEFAULT_MAX_ACCELERATION     ;
const int _default_acceleration          = DEFAULT_ACCELERATION         ;
const int _default_retract_acceleration  = DEFAULT_RETRACT_ACCELERATION ;
const int _default_travel_acceleration   = DEFAULT_TRAVEL_ACCELERATION  ;
const float _default_xjerk                 = DEFAULT_XJERK                ;
const float _default_yjerk                 = DEFAULT_YJERK                ;
const float _default_zjerk                  = DEFAULT_ZJERK                 ;
const float _default_ejerk                  = DEFAULT_EJERK                 ;
#if ENABLED(BLTOUCH)
  const int _bltouch_delay = BLTOUCH_DELAY;
#endif
#if defined(DELAY_BEFORE_PROBING)
  const int _delay_before_probing = DELAY_BEFORE_PROBING;
#endif
#if defined(SLED_DOCKING_OFFSET)
  const int _sled_docking_offset = SLED_DOCKING_OFFSET;
#endif
const int _x_probe_offset_from_extruder = X_PROBE_OFFSET_FROM_EXTRUDER;
const int _y_probe_offset_from_extruder = Y_PROBE_OFFSET_FROM_EXTRUDER;
const int _z_probe_offset_from_extruder = Z_PROBE_OFFSET_FROM_EXTRUDER;
const int _min_probe_edge = MIN_PROBE_EDGE;
const int _xy_probe_speed = XY_PROBE_SPEED;
const int _z_probe_speed_fast = Z_PROBE_SPEED_FAST;
const float _z_probe_speed_slow = Z_PROBE_SPEED_SLOW;
#if defined(Z_CLEARANCE_DEPLOY_PROBE)
  const int _z_clearance_deploy_probe   = Z_CLEARANCE_DEPLOY_PROBE  ;
#endif
const int _z_clearance_between_probes  = Z_CLEARANCE_BETWEEN_PROBES ;
#if defined(Z_AFTER_PROBING          )
  const int _z_after_probing           = Z_AFTER_PROBING          ;
#endif
const int _z_probe_low_point          = Z_PROBE_LOW_POINT         ;
const int _z_probe_offset_range_min = Z_PROBE_OFFSET_RANGE_MIN;
const int _z_probe_offset_range_max = Z_PROBE_OFFSET_RANGE_MAX;
const int _x_enable_on = X_ENABLE_ON;
const int _y_enable_on = Y_ENABLE_ON;
const int _z_enable_on = Z_ENABLE_ON;
const int _e_enable_on = E_ENABLE_ON;
const bool _disable_x = DISABLE_X;
const bool _disable_y = DISABLE_Y;
const bool _disable_z = DISABLE_Z;
const bool _disable_e = DISABLE_E;
const bool _disable_inactive_extruder = DISABLE_INACTIVE_EXTRUDER;
const bool _invert_x_dir = INVERT_X_DIR;
const bool _invert_y_dir = INVERT_Y_DIR;
const bool _invert_z_dir = INVERT_Z_DIR;
const bool _invert_e0_dir = INVERT_E0_DIR;
const bool _invert_e1_dir = INVERT_E1_DIR;
const bool _invert_e2_dir = INVERT_E2_DIR;
const bool _invert_e3_dir = INVERT_E3_DIR;
const bool _invert_e4_dir = INVERT_E4_DIR;
const int _x_home_dir = X_HOME_DIR;
const int _y_home_dir = Y_HOME_DIR;
const int _z_home_dir = Z_HOME_DIR;
const int _x_bed_size = X_BED_SIZE;
const int _y_bed_size = Y_BED_SIZE;
const int _x_min_pos = X_MIN_POS;
const int _y_min_pos = Y_MIN_POS;
const int _z_min_pos = Z_MIN_POS;
const int _x_max_pos = X_MAX_POS;
const int _y_max_pos = Y_MAX_POS;
const int _z_max_pos = Z_MAX_POS;
#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  const int _num_runout_sensors   = NUM_RUNOUT_SENSORS  ;
  const bool _fil_runout_inverting = FIL_RUNOUT_INVERTING;
  const char *_filament_runout_script = FILAMENT_RUNOUT_SCRIPT;
#endif
#if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_BILINEAR) || ENABLED(AUTO_BED_LEVELING_UBL)
  const float _leveled_segment_length = LEVELED_SEGMENT_LENGTH;
  #if ENABLED(G26_MESH_VALIDATION)
    const float _mesh_test_nozzle_size    = MESH_TEST_NOZZLE_SIZE   ;
    const float _mesh_test_layer_height   = MESH_TEST_LAYER_HEIGHT  ;
    const float _mesh_test_hotend_temp  = MESH_TEST_HOTEND_TEMP ;
    const float _mesh_test_bed_temp      = MESH_TEST_BED_TEMP     ;
  #endif
#endif
#if ENABLED(AUTO_BED_LEVELING_LINEAR) || ENABLED(AUTO_BED_LEVELING_BILINEAR)
  const int _grid_max_points_x = GRID_MAX_POINTS_X;
  const int _grid_max_points_y = GRID_MAX_POINTS_Y;
  const int _left_probe_bed_position = LEFT_PROBE_BED_POSITION;
  const int _right_probe_bed_position = RIGHT_PROBE_BED_POSITION;
  const int _front_probe_bed_position = FRONT_PROBE_BED_POSITION;
  const int _back_probe_bed_position = BACK_PROBE_BED_POSITION;
  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)
    #if ENABLED(ABL_BILINEAR_SUBDIVISION)
      const int _bilinear_subdivisions = BILINEAR_SUBDIVISIONS;
    #endif
  #endif
#elif ENABLED(AUTO_BED_LEVELING_UBL)
  const int _mesh_inset = MESH_INSET;
  const int _grid_max_points_x = GRID_MAX_POINTS_X;
  const int _grid_max_points_y = GRID_MAX_POINTS_Y;
  const float _ubl_z_raise_when_off_mesh = UBL_Z_RAISE_WHEN_OFF_MESH;
#elif ENABLED(MESH_BED_LEVELING)
  const int _mesh_inset = MESH_INSET;
  const int _grid_max_points_x = GRID_MAX_POINTS_X;
  const int _grid_max_points_y = GRID_MAX_POINTS_Y;
#endif
#if ENABLED(AUTO_BED_LEVELING_3POINT) || ENABLED(AUTO_BED_LEVELING_UBL)
  const int _probe_pt_1_x = PROBE_PT_1_X;
  const int _probe_pt_1_y = PROBE_PT_1_Y;
  const int _probe_pt_2_x = PROBE_PT_2_X;
  const int _probe_pt_2_y = PROBE_PT_2_Y;
  const int _probe_pt_3_x = PROBE_PT_3_X;
  const int _probe_pt_3_y = PROBE_PT_3_Y;
#endif
#if ENABLED(LCD_BED_LEVELING)
  const float _mbl_z_step = MBL_Z_STEP;
  const int _lcd_probe_z_range = LCD_PROBE_Z_RANGE;
#endif
#if ENABLED(LEVEL_BED_CORNERS)
  const int _level_corners_inset = LEVEL_CORNERS_INSET;
#endif
#if defined(Z_PROBE_END_SCRIPT)
  const char *_z_probe_end_script = Z_PROBE_END_SCRIPT;
#endif
const int _manual_x_home_pos = MANUAL_X_HOME_POS;
const int _manual_y_home_pos = MANUAL_Y_HOME_POS;
const int _manual_z_home_pos = MANUAL_Z_HOME_POS;
#if ENABLED(Z_SAFE_HOMING)
  const float _z_safe_homing_x_point = Z_SAFE_HOMING_X_POINT;
  const float _z_safe_homing_y_point = Z_SAFE_HOMING_Y_POINT;
#endif
const int _homing_feedrate_xy = HOMING_FEEDRATE_XY;
const int _homing_feedrate_z  = HOMING_FEEDRATE_Z ;
#if ENABLED(SKEW_CORRECTION)
  const float _xy_diag_ac = XY_DIAG_AC;
  const float _xy_diag_bd = XY_DIAG_BD;
  const float _xy_side_ad = XY_SIDE_AD;
  const float _xy_skew_factor = XY_SKEW_FACTOR;
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    const float _xz_diag_ac = XZ_DIAG_AC;
    const float _xz_diag_bd = XZ_DIAG_BD;
    const float _yz_diag_ac = YZ_DIAG_AC;
    const float _yz_diag_bd = YZ_DIAG_BD;
    const float _yz_side_ad = YZ_SIDE_AD;
    const float _xz_skew_factor = XZ_SKEW_FACTOR;
    const float _yz_skew_factor = YZ_SKEW_FACTOR;
  #endif
#endif
const int _default_keepalive_interval = DEFAULT_KEEPALIVE_INTERVAL;
const int _preheat_1_temp_hotend = PREHEAT_1_TEMP_HOTEND;
const int _preheat_1_temp_bed     = PREHEAT_1_TEMP_BED    ;
const int _preheat_1_fan_speed     = PREHEAT_1_FAN_SPEED    ;
const int _preheat_2_temp_hotend = PREHEAT_2_TEMP_HOTEND;
const int _preheat_2_temp_bed    = PREHEAT_2_TEMP_BED   ;
const int _preheat_2_fan_speed     = PREHEAT_2_FAN_SPEED    ;
#if ENABLED(NOZZLE_PARK_FEATURE)
  const int _nozzle_park_point[] = NOZZLE_PARK_POINT;
  const int _nozzle_park_xy_feedrate = NOZZLE_PARK_XY_FEEDRATE;
  const int _nozzle_park_z_feedrate = NOZZLE_PARK_Z_FEEDRATE;
#endif
#if ENABLED(NOZZLE_CLEAN_FEATURE)
  const int _nozzle_clean_strokes  = NOZZLE_CLEAN_STROKES ;
  const int _nozzle_clean_triangles  = NOZZLE_CLEAN_TRIANGLES ;
  const int _nozzle_clean_start_point[] = NOZZLE_CLEAN_START_POINT;
  const int _nozzle_clean_end_point[]   = NOZZLE_CLEAN_END_POINT  ;
  const float _nozzle_clean_circle_radius = NOZZLE_CLEAN_CIRCLE_RADIUS;
  const int _nozzle_clean_circle_fn = NOZZLE_CLEAN_CIRCLE_FN;
  const int _nozzle_clean_circle_middle = NOZZLE_CLEAN_CIRCLE_MIDDLE;
#endif
#if defined(SPI_HALF_SPEED)
  const int _spi_speed = SPI_SPEED;
#endif
#if defined(SPI_QUARTER_SPEED)
  const int _spi_speed = SPI_SPEED;
#endif
#if defined(SPI_EIGHTH_SPEED)
  const int _spi_speed = SPI_SPEED;
#endif
const int _encoder_pulses_per_step = ENCODER_PULSES_PER_STEP;
const int _encoder_steps_per_menu_item = ENCODER_STEPS_PER_MENU_ITEM;
const int _lcd_feedback_frequency_duration_ms = LCD_FEEDBACK_FREQUENCY_DURATION_MS;
const int _lcd_feedback_frequency_hz = LCD_FEEDBACK_FREQUENCY_HZ;
#if defined(REPRAPWORLD_KEYPAD_MOVE_STEP)
  const float _reprapworld_keypad_move_step = REPRAPWORLD_KEYPAD_MOVE_STEP;
#endif
const int _soft_pwm_scale = SOFT_PWM_SCALE;
#if defined(PHOTOGRAPH_PIN    )
  const int _photograph_pin     = PHOTOGRAPH_PIN    ;
#endif
#if ENABLED(RGB_LED) || ENABLED(RGBW_LED)
  const int _rgb_led_r_pin = RGB_LED_R_PIN;
  const int _rgb_led_g_pin = RGB_LED_G_PIN;
  const int _rgb_led_b_pin = RGB_LED_B_PIN;
  const int _rgb_led_w_pin = RGB_LED_W_PIN;
#endif
#if ENABLED(NEOPIXEL_LED)
  const int _neopixel_type   = NEOPIXEL_TYPE  ;
  const int _neopixel_pin    = NEOPIXEL_PIN   ;
  const int _neopixel_pixels = NEOPIXEL_PIXELS;
  const int _neopixel_brightness = NEOPIXEL_BRIGHTNESS;
#endif
#if defined(NUM_SERVOS)
  const int _num_servos = NUM_SERVOS;
#endif
const int _servo_delay[] = SERVO_DELAY;

// End Configuration.h
// Begin Configuration_adv.h

#if ENABLED(HEPHESTOS2_HEATED_BED_KIT)
  #undef TEMP_SENSOR_BED
  const int _temp_sensor_bed = TEMP_SENSOR_BED;
  const bool _heater_bed_inverting = HEATER_BED_INVERTING;
#endif
#if DISABLED(PIDTEMPBED)
  const int _bed_check_interval = BED_CHECK_INTERVAL;
  #if ENABLED(BED_LIMIT_SWITCHING)
    const int _bed_hysteresis = BED_HYSTERESIS;
  #endif
#endif
#if ENABLED(THERMAL_PROTECTION_HOTENDS)
  const int _thermal_protection_period = THERMAL_PROTECTION_PERIOD;
  const int _thermal_protection_hysteresis = THERMAL_PROTECTION_HYSTERESIS;
  const int _watch_temp_period = WATCH_TEMP_PERIOD;
  const int _watch_temp_increase = WATCH_TEMP_INCREASE;
#endif
#if ENABLED(THERMAL_PROTECTION_BED)
  const int _thermal_protection_bed_period = THERMAL_PROTECTION_BED_PERIOD;
  const int _thermal_protection_bed_hysteresis = THERMAL_PROTECTION_BED_HYSTERESIS;
  const int _watch_bed_temp_period = WATCH_BED_TEMP_PERIOD;
  const int _watch_bed_temp_increase = WATCH_BED_TEMP_INCREASE;
#endif
#if ENABLED(PIDTEMP)
  #if ENABLED(PID_EXTRUSION_SCALING)
    const float _default_kc = DEFAULT_Kc;
    const int _lpq_max_len = LPQ_MAX_LEN;
  #endif
#endif
#if ENABLED(AUTOTEMP)
  const float _autotemp_oldweight = AUTOTEMP_OLDWEIGHT;
#endif
#if defined(MAX_CONSECUTIVE_LOW_TEMPERATURE_ERROR_ALLOWED)
  const int _max_consecutive_low_temperature_error_allowed = MAX_CONSECUTIVE_LOW_TEMPERATURE_ERROR_ALLOWED;
#endif
#if defined(MILLISECONDS_PREHEAT_TIME)
  const int _milliseconds_preheat_time = MILLISECONDS_PREHEAT_TIME;
#endif
#if ENABLED(EXTRUDER_RUNOUT_PREVENT)
  const int _extruder_runout_mintemp = EXTRUDER_RUNOUT_MINTEMP;
  const int _extruder_runout_seconds = EXTRUDER_RUNOUT_SECONDS;
  const int _extruder_runout_speed = EXTRUDER_RUNOUT_SPEED;
  const int _extruder_runout_extrude = EXTRUDER_RUNOUT_EXTRUDE;
#endif
const float _temp_sensor_ad595_offset  = TEMP_SENSOR_AD595_OFFSET ;
const float _temp_sensor_ad595_gain    = TEMP_SENSOR_AD595_GAIN   ;
const float _temp_sensor_ad8495_offset = TEMP_SENSOR_AD8495_OFFSET;
const float _temp_sensor_ad8495_gain   = TEMP_SENSOR_AD8495_GAIN  ;
#if ENABLED(USE_CONTROLLER_FAN)
  const int _controller_fan_pin = CONTROLLER_FAN_PIN;
  const int _controllerfan_secs = CONTROLLERFAN_SECS;
  const int _controllerfan_speed = CONTROLLERFAN_SPEED;
#endif
#if defined(FAN_KICKSTART_TIME)
  const int _fan_kickstart_time = FAN_KICKSTART_TIME;
#endif
#if defined(FAN_MIN_PWM)
  const int _fan_min_pwm = FAN_MIN_PWM;
#endif
const int _e0_auto_fan_pin = E0_AUTO_FAN_PIN;
const int _e1_auto_fan_pin = E1_AUTO_FAN_PIN;
const int _e2_auto_fan_pin = E2_AUTO_FAN_PIN;
const int _e3_auto_fan_pin = E3_AUTO_FAN_PIN;
const int _e4_auto_fan_pin = E4_AUTO_FAN_PIN;
const int _chamber_auto_fan_pin = CHAMBER_AUTO_FAN_PIN;
const int _extruder_auto_fan_temperature = EXTRUDER_AUTO_FAN_TEMPERATURE;
const int _extruder_auto_fan_speed   = EXTRUDER_AUTO_FAN_SPEED  ;
const int _fanmux0_pin = FANMUX0_PIN;
const int _fanmux1_pin = FANMUX1_PIN;
const int _fanmux2_pin = FANMUX2_PIN;
#if ENABLED(CASE_LIGHT_ENABLE)
  const int _case_light_pin = CASE_LIGHT_PIN;
  const bool _invert_case_light = INVERT_CASE_LIGHT;
  const bool _case_light_default_on = CASE_LIGHT_DEFAULT_ON;
  const int _case_light_default_brightness = CASE_LIGHT_DEFAULT_BRIGHTNESS;
  #if ENABLED(CASE_LIGHT_USE_NEOPIXEL)
    const int _case_light_neopixel_color[] = CASE_LIGHT_NEOPIXEL_COLOR;
  #endif
#endif
#if ENABLED(X_DUAL_STEPPER_DRIVERS)
  const bool _invert_x2_vs_x_dir = INVERT_X2_VS_X_DIR;
  #if ENABLED(X_DUAL_ENDSTOPS)
    const int _x2_use_endstop = X2_USE_ENDSTOP;
    const int _x_dual_endstops_adjustment  = X_DUAL_ENDSTOPS_ADJUSTMENT ;
  #endif
#endif
#if ENABLED(Y_DUAL_STEPPER_DRIVERS)
  const bool _invert_y2_vs_y_dir = INVERT_Y2_VS_Y_DIR;
  #if ENABLED(Y_DUAL_ENDSTOPS)
    const int _y2_use_endstop =  Y2_USE_ENDSTOP;
    const int _y_dual_endstops_adjustment  = Y_DUAL_ENDSTOPS_ADJUSTMENT ;
  #endif
#endif
#if ENABLED(Z_DUAL_STEPPER_DRIVERS)
  #if ENABLED(Z_DUAL_ENDSTOPS)
    const int _z2_use_endstop = Z2_USE_ENDSTOP;
    const int _z_dual_endstops_adjustment  = Z_DUAL_ENDSTOPS_ADJUSTMENT ;
  #endif
#endif
#if ENABLED(DUAL_X_CARRIAGE)
  const int _x2_min_pos = X2_MIN_POS;
  const int _x2_max_pos = X2_MAX_POS;
  const int _x2_home_dir = X2_HOME_DIR;
  const int _x2_home_pos = X2_HOME_POS;
  const int _default_dual_x_carriage_mode = DEFAULT_DUAL_X_CARRIAGE_MODE;
  const float _toolchange_park_zlift   = TOOLCHANGE_PARK_ZLIFT  ;
  const int _toolchange_unpark_zlift = TOOLCHANGE_UNPARK_ZLIFT;
  const int _default_duplication_x_offset = DEFAULT_DUPLICATION_X_OFFSET;
#endif
const int _x_home_bump_mm = X_HOME_BUMP_MM;
const int _y_home_bump_mm = Y_HOME_BUMP_MM;
const int _z_home_bump_mm = Z_HOME_BUMP_MM;
const int _homing_bump_divisor[] = HOMING_BUMP_DIVISOR;
const bool _axis_relative_modes[] = AXIS_RELATIVE_MODES;
const bool _invert_x_step_pin = INVERT_X_STEP_PIN;
const bool _invert_y_step_pin = INVERT_Y_STEP_PIN;
const bool _invert_z_step_pin = INVERT_Z_STEP_PIN;
const bool _invert_e_step_pin = INVERT_E_STEP_PIN;
const int _default_stepper_deactive_time = DEFAULT_STEPPER_DEACTIVE_TIME;
const bool _disable_inactive_x = DISABLE_INACTIVE_X;
const bool _disable_inactive_y = DISABLE_INACTIVE_Y;
const bool _disable_inactive_z = DISABLE_INACTIVE_Z;
const bool _disable_inactive_e = DISABLE_INACTIVE_E;
const float _default_minimumfeedrate       = DEFAULT_MINIMUMFEEDRATE      ;
const float _default_mintravelfeedrate     = DEFAULT_MINTRAVELFEEDRATE    ;
#if ENABLED(ULTIPANEL)
  const int _manual_feedrate[] = MANUAL_FEEDRATE;
#endif
const int _default_minsegmenttime        = DEFAULT_MINSEGMENTTIME       ;
#if defined(XY_FREQUENCY_LIMIT )
  const int _xy_frequency_limit  = XY_FREQUENCY_LIMIT ;
#endif
const float _minimum_planner_speed = MINIMUM_PLANNER_SPEED;
const int _microstep_modes[] = MICROSTEP_MODES;
#if defined(PWM_MOTOR_CURRENT)
  const int _pwm_motor_current[] = PWM_MOTOR_CURRENT;
#endif
#if defined(DIGIPOT_MOTOR_CURRENT)
  const int _digipot_motor_current[] = DIGIPOT_MOTOR_CURRENT;
#endif
#if defined(DAC_MOTOR_CURRENT_DEFAULT)
  const int _dac_motor_current_default[] = DAC_MOTOR_CURRENT_DEFAULT;
#endif
#if ENABLED(DIGIPOT_I2C) && !defined(DIGIPOT_I2C_ADDRESS_A)
  const int _digipot_i2c_address_a = DIGIPOT_I2C_ADDRESS_A;
#endif
const int _digipot_i2c_num_channels = DIGIPOT_I2C_NUM_CHANNELS;
const float _digipot_i2c_motor_currents[] = DIGIPOT_I2C_MOTOR_CURRENTS;
const int _encoder_10x_steps_per_sec = ENCODER_10X_STEPS_PER_SEC;
const int _encoder_100x_steps_per_sec = ENCODER_100X_STEPS_PER_SEC;
#if defined(CHDK)
  const int _chdk = CHDK;
#endif
const int _chdk_delay = CHDK_DELAY;
const long _lcd_timeout_to_status = LCD_TIMEOUT_TO_STATUS;
#if ENABLED(SDSUPPORT) || ENABLED(LCD_SET_PROGRESS_MANUALLY)
  #if ENABLED(LCD_PROGRESS_BAR)
    const int _progress_bar_bar_time = PROGRESS_BAR_BAR_TIME;
    const int _progress_bar_msg_time = PROGRESS_BAR_MSG_TIME;
    const int _progress_msg_expire   = PROGRESS_MSG_EXPIRE  ;
  #endif
#endif
#if ENABLED(LED_CONTROL_MENU)
  #if ENABLED(LED_COLOR_PRESETS)
    const int _led_user_preset_red        = LED_USER_PRESET_RED       ;
    const int _led_user_preset_green      = LED_USER_PRESET_GREEN     ;
    const int _led_user_preset_blue         = LED_USER_PRESET_BLUE        ;
    const int _led_user_preset_white      = LED_USER_PRESET_WHITE     ;
    const int _led_user_preset_brightness = LED_USER_PRESET_BRIGHTNESS;
  #endif
#endif
#if ENABLED(SDSUPPORT)
  const bool _sd_finished_stepperrelease = SD_FINISHED_STEPPERRELEASE;
  const char *_sd_finished_releasecommand = SD_FINISHED_RELEASECOMMAND;
  #if ENABLED(SDCARD_SORT_ALPHA)
    const int _sdsort_limit       = SDSORT_LIMIT      ;
    const int _folder_sorting     = FOLDER_SORTING    ;
    const bool _sdsort_gcode       = SDSORT_GCODE      ;
    const bool _sdsort_uses_ram    = SDSORT_USES_RAM   ;
    const bool _sdsort_uses_stack  = SDSORT_USES_STACK ;
    const bool _sdsort_cache_names = SDSORT_CACHE_NAMES;
    const bool _sdsort_dynamic_ram = SDSORT_DYNAMIC_RAM;
    const int _sdsort_cache_vfats = SDSORT_CACHE_VFATS;
  #endif
#endif
#if ENABLED(DOGLCD)
  #if defined(DOGM_SPI_DELAY_US)
    const int _dogm_spi_delay_us = DOGM_SPI_DELAY_US;
  #endif
  #if ENABLED(U8GLIB_ST7920)
    #if ENABLED(LIGHTWEIGHT_UI)
      const int _status_expire_seconds = STATUS_EXPIRE_SECONDS;
    #endif
  #endif
#endif
#if ENABLED(BABYSTEPPING)
  const bool _babystep_invert_z = BABYSTEP_INVERT_Z;
  const int _babystep_multiplicator = BABYSTEP_MULTIPLICATOR;
  const int _doubleclick_max_interval = DOUBLECLICK_MAX_INTERVAL;
#endif
  #if ENABLED(LIN_ADVANCE)
    const float _lin_advance_k = LIN_ADVANCE_K;
  #endif
  #if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_UBL)
    const int _mesh_min_x = MESH_MIN_X;
    const int _mesh_min_y = MESH_MIN_Y;
    const int _mesh_max_x = MESH_MAX_X;
    const int _mesh_max_y = MESH_MAX_Y;
  #endif
#if ENABLED(ARC_SUPPORT)
  const int _mm_per_arc_segment  = MM_PER_ARC_SEGMENT ;
  const int _n_arc_correction   = N_ARC_CORRECTION  ;
#endif
#if ENABLED(G38_PROBE_TARGET)
  const float _g38_minimum_move = G38_MINIMUM_MOVE;
#endif
const int _min_steps_per_segment = MIN_STEPS_PER_SEGMENT;
const int _minimum_stepper_pulse = MINIMUM_STEPPER_PULSE;
#if ENABLED(SDSUPPORT)
  const int _block_buffer_size = BLOCK_BUFFER_SIZE;
#else
  const int _block_buffer_size = BLOCK_BUFFER_SIZE;
#endif
const int _max_cmd_size = MAX_CMD_SIZE;
const int _bufsize = BUFSIZE;
const int _tx_buffer_size = TX_BUFFER_SIZE;
const int _rx_buffer_size = RX_BUFFER_SIZE;
#if defined(NO_TIMEOUTS)
  const int _no_timeouts = NO_TIMEOUTS;
#endif
#if ENABLED(FWRETRACT)
  const float _min_autoretract = MIN_AUTORETRACT;
  const float _max_autoretract = MAX_AUTORETRACT;
  const int _retract_length = RETRACT_LENGTH;
  const int _retract_length_swap = RETRACT_LENGTH_SWAP;
  const int _retract_feedrate = RETRACT_FEEDRATE;
  const int _retract_zlift = RETRACT_ZLIFT;
  const int _retract_recover_length = RETRACT_RECOVER_LENGTH;
  const int _retract_recover_length_swap = RETRACT_RECOVER_LENGTH_SWAP;
  const int _retract_recover_feedrate = RETRACT_RECOVER_FEEDRATE;
  const int _retract_recover_feedrate_swap = RETRACT_RECOVER_FEEDRATE_SWAP;
#endif
#if ENABLED(ADVANCED_PAUSE_FEATURE)
  const int _pause_park_retract_feedrate         = PAUSE_PARK_RETRACT_FEEDRATE        ;
  const int _pause_park_retract_length            = PAUSE_PARK_RETRACT_LENGTH           ;
  const int _filament_change_unload_feedrate     = FILAMENT_CHANGE_UNLOAD_FEEDRATE    ;
  const int _filament_change_unload_accel        = FILAMENT_CHANGE_UNLOAD_ACCEL       ;
  const int _filament_change_unload_length      = FILAMENT_CHANGE_UNLOAD_LENGTH     ;
  const int _filament_change_slow_load_feedrate   = FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE  ;
  const int _filament_change_slow_load_length     = FILAMENT_CHANGE_SLOW_LOAD_LENGTH    ;
  const int _filament_change_fast_load_feedrate   = FILAMENT_CHANGE_FAST_LOAD_FEEDRATE  ;
  const int _filament_change_fast_load_accel     = FILAMENT_CHANGE_FAST_LOAD_ACCEL    ;
  const int _filament_change_fast_load_length     = FILAMENT_CHANGE_FAST_LOAD_LENGTH    ;
  const float _advanced_pause_purge_feedrate       = ADVANCED_PAUSE_PURGE_FEEDRATE      ;
  const int _advanced_pause_purge_length         = ADVANCED_PAUSE_PURGE_LENGTH        ;
  const int _filament_unload_retract_length      = FILAMENT_UNLOAD_RETRACT_LENGTH     ;
  const int _filament_unload_delay             = FILAMENT_UNLOAD_DELAY            ;
  const int _filament_unload_purge_length         = FILAMENT_UNLOAD_PURGE_LENGTH        ;
  const int _pause_park_nozzle_timeout           = PAUSE_PARK_NOZZLE_TIMEOUT          ;
  const int _filament_change_alert_beeps         = FILAMENT_CHANGE_ALERT_BEEPS        ;
#endif
#if ENABLED(HAVE_TMC26X)
  const int _x_max_current     = X_MAX_CURRENT    ;
  const int _x_sense_resistor    = X_SENSE_RESISTOR   ;
  const int _x_microsteps        = X_MICROSTEPS       ;
  const int _x2_max_current    = X2_MAX_CURRENT   ;
  const int _x2_sense_resistor   = X2_SENSE_RESISTOR  ;
  const int _x2_microsteps       = X2_MICROSTEPS      ;
  const int _y_max_current     = Y_MAX_CURRENT    ;
  const int _y_sense_resistor    = Y_SENSE_RESISTOR   ;
  const int _y_microsteps        = Y_MICROSTEPS       ;
  const int _y2_max_current    = Y2_MAX_CURRENT   ;
  const int _y2_sense_resistor   = Y2_SENSE_RESISTOR  ;
  const int _y2_microsteps       = Y2_MICROSTEPS      ;
  const int _z_max_current     = Z_MAX_CURRENT    ;
  const int _z_sense_resistor    = Z_SENSE_RESISTOR   ;
  const int _z_microsteps        = Z_MICROSTEPS       ;
  const int _z2_max_current    = Z2_MAX_CURRENT   ;
  const int _z2_sense_resistor   = Z2_SENSE_RESISTOR  ;
  const int _z2_microsteps       = Z2_MICROSTEPS      ;
  const int _e0_max_current    = E0_MAX_CURRENT   ;
  const int _e0_sense_resistor   = E0_SENSE_RESISTOR  ;
  const int _e0_microsteps       = E0_MICROSTEPS      ;
  const int _e1_max_current    = E1_MAX_CURRENT   ;
  const int _e1_sense_resistor   = E1_SENSE_RESISTOR  ;
  const int _e1_microsteps       = E1_MICROSTEPS      ;
  const int _e2_max_current    = E2_MAX_CURRENT   ;
  const int _e2_sense_resistor   = E2_SENSE_RESISTOR  ;
  const int _e2_microsteps       = E2_MICROSTEPS      ;
  const int _e3_max_current    = E3_MAX_CURRENT   ;
  const int _e3_sense_resistor   = E3_SENSE_RESISTOR  ;
  const int _e3_microsteps       = E3_MICROSTEPS      ;
  const int _e4_max_current    = E4_MAX_CURRENT   ;
  const int _e4_sense_resistor   = E4_SENSE_RESISTOR  ;
  const int _e4_microsteps       = E4_MICROSTEPS      ;
#endif
#if ENABLED(HAVE_TMC2130) || ENABLED(HAVE_TMC2208)
  const float _r_sense           = R_SENSE          ;
  const float _hold_multiplier    = HOLD_MULTIPLIER   ;
  const bool _interpolate       = INTERPOLATE      ;
  const int _x_current          = X_CURRENT         ;
  const int _x_microsteps        = X_MICROSTEPS       ;
  const int _y_current          = Y_CURRENT         ;
  const int _y_microsteps        = Y_MICROSTEPS       ;
  const int _z_current          = Z_CURRENT         ;
  const int _z_microsteps        = Z_MICROSTEPS       ;
  const int _x2_current         = X2_CURRENT        ;
  const int _x2_microsteps       = X2_MICROSTEPS      ;
  const int _y2_current         = Y2_CURRENT        ;
  const int _y2_microsteps       = Y2_MICROSTEPS      ;
  const int _z2_current         = Z2_CURRENT        ;
  const int _z2_microsteps       = Z2_MICROSTEPS      ;
  const int _e0_current         = E0_CURRENT        ;
  const int _e0_microsteps       = E0_MICROSTEPS      ;
  const int _e1_current         = E1_CURRENT        ;
  const int _e1_microsteps       = E1_MICROSTEPS      ;
  const int _e2_current         = E2_CURRENT        ;
  const int _e2_microsteps       = E2_MICROSTEPS      ;
  const int _e3_current         = E3_CURRENT        ;
  const int _e3_microsteps       = E3_MICROSTEPS      ;
  const int _e4_current         = E4_CURRENT        ;
  const int _e4_microsteps       = E4_MICROSTEPS      ;
  const int _tmc_sw_mosi       = TMC_SW_MOSI      ;
  const int _tmc_sw_miso       = TMC_SW_MISO      ;
  const int _tmc_sw_sck        = TMC_SW_SCK       ;
  #if ENABLED(MONITOR_DRIVER_STATUS)
    const int _current_step_down     = CURRENT_STEP_DOWN    ;
  #endif
  const int _x_hybrid_threshold     = X_HYBRID_THRESHOLD    ;
  const int _x2_hybrid_threshold    = X2_HYBRID_THRESHOLD   ;
  const int _y_hybrid_threshold     = Y_HYBRID_THRESHOLD    ;
  const int _y2_hybrid_threshold    = Y2_HYBRID_THRESHOLD   ;
  const int _z_hybrid_threshold       = Z_HYBRID_THRESHOLD      ;
  const int _z2_hybrid_threshold      = Z2_HYBRID_THRESHOLD     ;
  const int _e0_hybrid_threshold     = E0_HYBRID_THRESHOLD    ;
  const int _e1_hybrid_threshold     = E1_HYBRID_THRESHOLD    ;
  const int _e2_hybrid_threshold     = E2_HYBRID_THRESHOLD    ;
  const int _e3_hybrid_threshold     = E3_HYBRID_THRESHOLD    ;
  const int _e4_hybrid_threshold     = E4_HYBRID_THRESHOLD    ;
  #if ENABLED(SENSORLESS_HOMING)
    const int _x_homing_sensitivity  = X_HOMING_SENSITIVITY ;
    const int _y_homing_sensitivity  = Y_HOMING_SENSITIVITY ;
    const int _z_homing_sensitivity  = Z_HOMING_SENSITIVITY ;
  #endif
  #if ENABLED(TMC_Z_CALIBRATION)
    const int _calibration_current = CALIBRATION_CURRENT;
    const int _calibration_extra_height = CALIBRATION_EXTRA_HEIGHT;
  #endif
  const char *_tmc_adv = TMC_ADV;
#endif
#if ENABLED(HAVE_L6470DRIVER)
  const int _x_microsteps      = X_MICROSTEPS     ;
  const int _x_overcurrent   = X_OVERCURRENT  ;
  const int _x_stallcurrent  = X_STALLCURRENT ;
  const int _x2_microsteps     = X2_MICROSTEPS    ;
  const int _x2_overcurrent  = X2_OVERCURRENT ;
  const int _x2_stallcurrent = X2_STALLCURRENT;
  const int _y_microsteps      = Y_MICROSTEPS     ;
  const int _y_overcurrent   = Y_OVERCURRENT  ;
  const int _y_stallcurrent  = Y_STALLCURRENT ;
  const int _y2_microsteps     = Y2_MICROSTEPS    ;
  const int _y2_overcurrent  = Y2_OVERCURRENT ;
  const int _y2_stallcurrent = Y2_STALLCURRENT;
  const int _z_microsteps      = Z_MICROSTEPS     ;
  const int _z_overcurrent   = Z_OVERCURRENT  ;
  const int _z_stallcurrent  = Z_STALLCURRENT ;
  const int _z2_microsteps     = Z2_MICROSTEPS    ;
  const int _z2_overcurrent  = Z2_OVERCURRENT ;
  const int _z2_stallcurrent = Z2_STALLCURRENT;
  const int _e0_microsteps     = E0_MICROSTEPS    ;
  const int _e0_overcurrent  = E0_OVERCURRENT ;
  const int _e0_stallcurrent = E0_STALLCURRENT;
  const int _e1_microsteps     = E1_MICROSTEPS    ;
  const int _e1_overcurrent  = E1_OVERCURRENT ;
  const int _e1_stallcurrent = E1_STALLCURRENT;
  const int _e2_microsteps     = E2_MICROSTEPS    ;
  const int _e2_overcurrent  = E2_OVERCURRENT ;
  const int _e2_stallcurrent = E2_STALLCURRENT;
  const int _e3_microsteps     = E3_MICROSTEPS    ;
  const int _e3_overcurrent  = E3_OVERCURRENT ;
  const int _e3_stallcurrent = E3_STALLCURRENT;
  const int _e4_microsteps     = E4_MICROSTEPS    ;
  const int _e4_overcurrent  = E4_OVERCURRENT ;
  const int _e4_stallcurrent = E4_STALLCURRENT;
#endif
const int _i2c_slave_address  = I2C_SLAVE_ADDRESS ;
#if ENABLED(SPINDLE_LASER_ENABLE)
  const bool _spindle_laser_enable_invert   = SPINDLE_LASER_ENABLE_INVERT  ;
  const bool _spindle_laser_pwm             = SPINDLE_LASER_PWM            ;
  const bool _spindle_laser_pwm_invert      = SPINDLE_LASER_PWM_INVERT     ;
  const int _spindle_laser_powerup_delay   = SPINDLE_LASER_POWERUP_DELAY  ;
  const int _spindle_laser_powerdown_delay = SPINDLE_LASER_POWERDOWN_DELAY;
  const bool _spindle_dir_change            = SPINDLE_DIR_CHANGE           ;
  const bool _spindle_invert_dir            = SPINDLE_INVERT_DIR           ;
  const bool _spindle_stop_on_dir_change    = SPINDLE_STOP_ON_DIR_CHANGE   ;
  const float _speed_power_slope    = SPEED_POWER_SLOPE   ;
  const int _speed_power_intercept  = SPEED_POWER_INTERCEPT ;
  const int _speed_power_min     = SPEED_POWER_MIN    ;
  const int _speed_power_max    = SPEED_POWER_MAX   ;
  const float _speed_power_slope      = SPEED_POWER_SLOPE     ;
  const int _speed_power_intercept  = SPEED_POWER_INTERCEPT ;
  const int _speed_power_min       = SPEED_POWER_MIN      ;
  const int _speed_power_max      = SPEED_POWER_MAX     ;
#endif
#if ENABLED(FILAMENT_WIDTH_SENSOR)
  const int _filament_sensor_extruder_num = FILAMENT_SENSOR_EXTRUDER_NUM;
  const int _measurement_delay_cm        = MEASUREMENT_DELAY_CM       ;
  const float _filwidth_error_margin        = FILWIDTH_ERROR_MARGIN       ;
  const int _max_measurement_delay       = MAX_MEASUREMENT_DELAY      ;
  const int _default_measured_filament_dia = DEFAULT_MEASURED_FILAMENT_DIA;
#endif
const float _proportional_font_ratio = PROPORTIONAL_FONT_RATIO;
#if ENABLED(CUSTOM_USER_MENUS)
  const char *_user_script_done = USER_SCRIPT_DONE;
  const char *_user_desc_1 =  USER_DESC_1;
  const char *_user_gcode_1 =  USER_GCODE_1;
  const char *_user_desc_2 =  USER_DESC_2;
  const char *_user_gcode_2 =  USER_GCODE_2;
  const char *_user_desc_3 =  USER_DESC_3;
  const char *_user_gcode_3 =  USER_GCODE_3;
  const char *_user_desc_4 =  USER_DESC_4;
  const char *_user_gcode_4 =  USER_GCODE_4;
  const char *_user_desc_5 =  USER_DESC_5;
  const char *_user_gcode_5 =  USER_GCODE_5;
#endif
#if defined(ACTION_ON_KILL)
    const char *_action_on_kill =  ACTION_ON_KILL;
#endif
#if defined(ACTION_ON_PAUSE)
    const char *_action_on_pause =  ACTION_ON_PAUSE;
#endif
#if defined(ACTION_ON_RESUME)
    const char *_action_on_resume =  ACTION_ON_RESUME;
#endif
#if ENABLED(I2C_POSITION_ENCODERS)
  const int _i2cpe_encoder_cnt         = I2CPE_ENCODER_CNT        ;
  const int _i2cpe_enc_1_addr          = I2CPE_ENC_1_ADDR         ;
  const int _i2cpe_enc_1_axis          = I2CPE_ENC_1_AXIS         ;
  const int _i2cpe_enc_1_type          = I2CPE_ENC_1_TYPE         ;
  const int _i2cpe_enc_1_ticks_unit    = I2CPE_ENC_1_TICKS_UNIT   ;
  const int _i2cpe_enc_1_ticks_rev     = I2CPE_ENC_1_TICKS_REV    ;
  const int _i2cpe_enc_1_ec_method     = I2CPE_ENC_1_EC_METHOD    ;
  const float _i2cpe_enc_1_ec_thresh     = I2CPE_ENC_1_EC_THRESH    ;
  const int _i2cpe_enc_2_addr          = I2CPE_ENC_2_ADDR         ;
  const int _i2cpe_enc_2_axis          = I2CPE_ENC_2_AXIS         ;
  const int _i2cpe_enc_2_type          = I2CPE_ENC_2_TYPE         ;
  const int _i2cpe_enc_2_ticks_unit    = I2CPE_ENC_2_TICKS_UNIT   ;
  const int _i2cpe_enc_2_ticks_rev   = I2CPE_ENC_2_TICKS_REV  ;
  const int _i2cpe_enc_2_ec_method     = I2CPE_ENC_2_EC_METHOD    ;
  const float _i2cpe_enc_2_ec_thresh     = I2CPE_ENC_2_EC_THRESH    ;
  const int _i2cpe_enc_3_addr          = I2CPE_ENC_3_ADDR         ;
  const int _i2cpe_enc_3_axis          = I2CPE_ENC_3_AXIS         ;
  const int _i2cpe_enc_4_addr          = I2CPE_ENC_4_ADDR         ;
  const int _i2cpe_enc_4_axis          = I2CPE_ENC_4_AXIS         ;
  const int _i2cpe_enc_5_addr          = I2CPE_ENC_5_ADDR         ;
  const int _i2cpe_enc_5_axis          = I2CPE_ENC_5_AXIS         ;
  const int _i2cpe_def_type            = I2CPE_DEF_TYPE           ;
  const int _i2cpe_def_enc_ticks_unit  = I2CPE_DEF_ENC_TICKS_UNIT ;
  const int _i2cpe_def_ticks_rev       = I2CPE_DEF_TICKS_REV      ;
  const int _i2cpe_def_ec_method       = I2CPE_DEF_EC_METHOD      ;
  const float _i2cpe_def_ec_thresh       = I2CPE_DEF_EC_THRESH      ;
  const float _i2cpe_err_thresh_abort  = I2CPE_ERR_THRESH_ABORT ;
  const int _i2cpe_time_trusted        = I2CPE_TIME_TRUSTED       ;
  const int _i2cpe_min_upd_time_ms     = I2CPE_MIN_UPD_TIME_MS    ;
#endif
#if ENABLED(MAX7219_DEBUG)
  const int _max7219_clk_pin   = MAX7219_CLK_PIN  ;
  const int _max7219_din_pin   = MAX7219_DIN_PIN  ;
  const int _max7219_load_pin  = MAX7219_LOAD_PIN ;
  const int _max7219_debug_stepper_head  = MAX7219_DEBUG_STEPPER_HEAD ;
  const int _max7219_debug_stepper_tail  = MAX7219_DEBUG_STEPPER_TAIL ;
  const int _max7219_debug_stepper_queue = MAX7219_DEBUG_STEPPER_QUEUE;
#endif
