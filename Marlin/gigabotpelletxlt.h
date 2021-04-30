// gigabotpelletxlt.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabotpellet.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Gigabot X XLT"

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef HOMING_FEEDRATE_XY
  #undef  HOMING_FEEDRATE_Z
  #undef  MANUAL_X_HOME_POS
  #undef  MANUAL_Y_HOME_POS
  
  #define HOMING_FEEDRATE_XY (33*60)
  #define HOMING_FEEDRATE_Z  (3*60)
  #define MANUAL_Y_HOME_POS 754.5
#endif


#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define Y_BED_SIZE   754.5
  #define Z_MAX_POS    770

#endif
