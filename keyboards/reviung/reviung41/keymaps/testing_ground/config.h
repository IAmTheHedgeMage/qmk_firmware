#pragma once

#include "config_common.h"
#define VENDOR_ID 0x7807
#define PRODUCT_ID 0xDCCB
#define DEVICE_VER 0x0001
#define MANUFACTURER gtips
#define PRODUCT reviung41
#define MATRIX_ROWS 7
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS \
    { F4, F5, F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS \
    { D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6
#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 11
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_ANIMATIONS
#endif
#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
#define TAPPING_TERM 120

#define IGNORE_MOD_TAP_INTERRUPT
/*
#define TAPPING_FORCE_HOLD
*/
#define BILATERAL_COMBINATIONS
/*
#define COMBO_COUNT 1
*/
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL