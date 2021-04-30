// gigabotpelletxl.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#include "gigabotpellet.h"

#undef MSG_GIGABOT3
#define MSG_GIGABOT3 "Gigabot X XL"

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #undef  HOMING_FEEDRATE_XY
  #undef  HOMING_FEEDRATE_Z
  #undef  MANUAL_Y_HOME_POS
  
  #define HOMING_FEEDRATE_XY (33*60)
  #define HOMING_FEEDRATE_Z  (3*60)
  #define MANUAL_Y_HOME_POS 754.5
#endif


#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  Y_BED_SIZE

  #define Y_BED_SIZE   754.5
#endif
