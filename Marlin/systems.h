/**
 * systems.h
 * Macros and definitions used to separate configuration information into sections
 */
 
#ifndef SYSTEMS_H
#define SYSTEMS_H

#define RE3D
#define RE3D_CODES 1

#define STRINGIFY_MACRO(x) STR(x)
#define STR(x) #x
#define EXPAND(x) x
#define CONCAT(n1, n2) STRINGIFY_MACRO(EXPAND(n1)EXPAND(n2))
#define CONCAT3(n1, n2, n3) STRINGIFY_MACRO(EXPAND(n1)EXPAND(n2)EXPAND(n3))
#define CONCAT5(n1, n2, n3, n4, n5) STRINGIFY_MACRO(EXPAND(n1)EXPAND(n2)EXPAND(n3)EXPAND(n4)EXPAND(n5))
#define CONCAT_(a, b) a##b

//#define SYSTEM gigabot

//#define SYSTEM gigabotxl

//#define SYSTEM gigabotxlt

#define SYSTEM giga_terabot

#define SYSTEM_SETTINGS     CONCAT(SYSTEM,.h)
#define SYSTEM_SETTINGS_ADV CONCAT(SYSTEM,_adv.h)
#define SYSTEM_CODE         CONCAT(SYSTEM,.cpp)

#define SECTION(section)                    section
#define SUBSECTION(section, subsection)     CONCAT_(section, subsection)
#define IS_SECTION(section)                 (SYSTEM_SECTION == section)
#define IS_SUBSECTION(section, subsection)  (SYSTEM_SECTION == SUBSECTION(section, subsection))

#define SYSTEM_UNKNOWN -1

// These are for overriding definitions found in Configuration.h and Configuration_adv.h

#define INFO            101
#define MACHINE         102
#define EXTRUDER        103
#define TEMPERATURE     104
#define HOMING          105
#define MOTION          106
#define PROBES          107
#define LCD             108
#define EXTRAS          109
#define AZTEEG_X3_PRO   110
#define PINS            111
#define HIDDEN          112
#define SERIAL_BUF      113
#define CONDITIONALS    114
#define CALIBRATE	115
#define STEPPER		116
#define SAFETY		117
#define LEVELING	118

// These are for overriding definitions found in pins_RAMPS.h

#define PINS_LIMITS       201
#define PINS_STEPPERS     202
#define PINS_TEMPERATURE  203
#define PINS_HEATERS_FANS 204
#define PINS_LCD          205

// For --unknown-- sections. Never actually used.

#define SYSTEM_SECTION SYSTEM_UNKNOWN

#endif // SYSTEMS_H
