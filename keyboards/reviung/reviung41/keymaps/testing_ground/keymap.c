#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _COLEMAK_DH,
    _SYMBOL,
    _NAVIGATION,
    _GAMER,
    _FUNCTION,
    _FIRMWARE
};

enum my_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK_DH,
  GAMER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  [_BLANK] = LAYOUT_reviung41(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
*/
  [_QWERTY] = LAYOUT_reviung41(
    KC_GRV,                KC_Q, KC_W,         KC_E,         KC_R,         KC_T,               KC_Y, KC_U,         KC_I,         KC_O,         KC_P,    KC_BSPC,
    KC_ESC,                KC_A, LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,               KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), KC_SCLN, KC_QUOT,
    LT(_FIRMWARE, KC_APP), KC_Z, KC_X,         KC_C,         KC_V,         KC_B,               KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH, KC_RGUI,
                                                      KC_LEAD, LT(_SYMBOL, KC_TAB), KC_SPC, LT(_NAVIGATION, KC_ENT), LT(_FUNCTION, KC_DEL)
  ),

  [_COLEMAK_DH] = LAYOUT_reviung41(
    _______, KC_Q, KC_W,         KC_F,         KC_P,         KC_B,                KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN, _______,
    _______, KC_A, LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,                KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), KC_O,    KC_QUOT,
    _______, KC_Z, KC_X,         KC_C,         KC_D,         KC_V,                KC_K, KC_H,         KC_COMM,      KC_DOT,       KC_SLSH, _______,
                                                    _______, _______, _______, _______, _______
  ),

  [_SYMBOL] = LAYOUT_reviung41(
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                KC_EQL,  KC_7, KC_8, KC_9, KC_BSLS, _______,
    _______, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_UNDS,                KC_SLSH, KC_4, KC_5, KC_6, KC_MINS, _______,
    _______, KC_CIRC, KC_AMPR, KC_LCBR, KC_RCBR, XXXXXXX,                KC_ASTR, KC_1, KC_2, KC_3, KC_PLUS, _______,
                                           _______, _______, _______, KC_0, KC_DOT
  ),

  [_NAVIGATION] = LAYOUT_reviung41(
    _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,                XXXXXXX, KC_HOME, KC_END, KC_PGUP, KC_PGDN, _______,
    _______, KC_MS_L, KC_MS_R, KC_MS_D,  KC_MS_U, XXXXXXX,                XXXXXXX, KC_UP,   KC_DOWN,  KC_LEFT, KC_RGHT,  KC_ACL1,
    _______, XXXXXXX, XXXXXXX, KC_BTN2,  KC_BTN1, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0,
                                            _______, _______, _______, _______, _______
  ),

  [_GAMER] = LAYOUT_reviung41(
    KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T,               KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSPC,
    KC_ENT,        KC_A, KC_S, KC_D, KC_F, KC_G,               KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    MO(_FIRMWARE),       KC_Z, KC_X, KC_C, KC_V, KC_B,               KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RGUI,
                                   KC_LCTL, KC_ESC, KC_SPC, KC_RALT, KC_RSFT
  ),  

  [_FUNCTION] = LAYOUT_reviung41(
    KC_INS,  XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,                XXXXXXX, KC_F1, KC_F2,  KC_F3,  KC_F4,  XXXXXXX,
    KC_CAPS, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX,                XXXXXXX, KC_F5, KC_F6,  KC_F7,  KC_F8,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX,                XXXXXXX, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX,
                                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_FIRMWARE] = LAYOUT_reviung41(
    XXXXXXX, XXXXXXX, GAMER,   COLEMAK_DH, QWERTY,  XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PWR,
                                                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case COLEMAK_DH:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK_DH);
      }
      return false;
    case GAMER:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAMER);
      }
      return false;
    default:
      return true;
  }
}


#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_180;
}
// Success?
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    render_logo();
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _COLEMAK_DH:
            oled_write_P(PSTR("COLEMAK_DH\n"), false);
            break;
        case _QWERTY:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("SYMBOL\n"), false);
            break;
        case _NAVIGATION:
            oled_write_P(PSTR("NAVIGATION\n"), false);
            break;
        case _GAMER:
            oled_write_P(PSTR("GAMER\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("FUNCTION\n"), false);
            break;
        case _FIRMWARE:
            oled_write_P(PSTR("FIRMWARE\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    return false;
}
#endif

LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    //MISSING PRIMARY IDENTIFIERS
    SEQ_THREE_KEYS(KC_M, KC_C, KC_M) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Current Medication'");
    }
    SEQ_THREE_KEYS(KC_M, KC_P, KC_O) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Prescriber Office'");
    }
    SEQ_THREE_KEYS(KC_M, KC_M, KC_L) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Medication List'");
    }
    SEQ_THREE_KEYS(KC_M, KC_C, KC_H) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Chased Medication'");
    }
    SEQ_THREE_KEYS(KC_M, KC_X, KC_M) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'XMeds'");
    }
    SEQ_THREE_KEYS(KC_M, KC_T, KC_P) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Transferring Pharmacy'");
    }
    SEQ_THREE_KEYS(KC_M, KC_A, KC_N) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Admin Notes'");
    }
    SEQ_THREE_KEYS(KC_M, KC_S, KC_N) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Social Security Number'");
    }
    SEQ_THREE_KEYS(KC_M, KC_Z, KC_T) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'Zendesk Tickets'");
    }
    SEQ_THREE_KEYS(KC_M, KC_R, KC_N) {
      SEND_STRING("DE Unsorted - Missing Primary Identifier - Used Peripheral: 'RX Number'");
    }
    //ULTRASORT
    SEQ_TWO_KEYS(KC_U, KC_L) {
      SEND_STRING("DE Unsorted - Used Method: 'Logo' to determine the intended account for this document");
    }
    SEQ_THREE_KEYS(KC_U, KC_O, KC_C) {
      SEND_STRING("DE Unsorted - Used Method: 'Open Chase' to determine the intended account for this document");
    }
    SEQ_THREE_KEYS(KC_U, KC_X, KC_M) {
      SEND_STRING("DE Unsorted - Used Method: 'XMeds' to determine the intended account for this document");
    }
    SEQ_THREE_KEYS(KC_U, KC_C, KC_P) {
      SEND_STRING("DE Unsorted - Used Method: 'Cover Page' to determine the intended account for this document");
    }
    SEQ_THREE_KEYS(KC_U, KC_A, KC_N) {
      SEND_STRING("DE Unsorted - Used Method: 'Admin Notes' to determine the intended account for this document");
    }
    SEQ_TWO_KEYS(KC_U, KC_B) {
      SEND_STRING("DE Unsorted - Used Method: 'Banner' to determine the intended account for this document");
    }
    //FOLLOW UP DISPOSITIONS
    SEQ_TWO_KEYS(KC_C, KC_C) {
      SEND_STRING("This document can be clarified by the customer: ");
    }
    SEQ_THREE_KEYS(KC_C, KC_P, KC_O) {
      SEND_STRING("This document cannot be clarified by customer, clarification required by providers office: ");
    }
    SEQ_THREE_KEYS(KC_C, KC_T, KC_P) {
      SEND_STRING("This document cannot be clarified by customer, clarification required by transferring pharmacy: ");
    }
    SEQ_TWO_KEYS(KC_D, KC_R) {
      SEND_STRING("Please see initial Follow Up request for clarification required.");
    }
    //ICD 10 Codes 
    SEQ_FOUR_KEYS(KC_7, KC_8, KC_0, KC_1) {
      SEND_STRING("T78.01 - Anaphylactic reaction due to peanuts");
    } 
    SEQ_FOUR_KEYS(KC_7, KC_8, KC_0, KC_5) {
      SEND_STRING("T78.05 - Anaphylactic reaction due to tree nuts and seeds");
    }
    SEQ_FOUR_KEYS(KC_7, KC_8, KC_0, KC_7) {
      SEND_STRING("T78.07 - Anaphylactic reaction due to milk and dairy products");
    }
    SEQ_FOUR_KEYS(KC_7, KC_8, KC_0, KC_8) {
      SEND_STRING("T78.08 - Anaphylactic reaction due to eggs");
    }
    SEQ_THREE_KEYS(KC_7, KC_8, KC_1) {
      SEND_STRING("T78.1 - Other adverse food reactions, not elsewhere classified");
    }
    SEQ_FIVE_KEYS(KC_0, KC_0, KC_1, KC_2, KC_9) {
      SEND_STRING("Z00.129 - Encounter for routine child health examination without abnormal findings");
    }
    SEQ_THREE_KEYS(KC_2, KC_9, KC_8) {
      SEND_STRING("Z29.8 - Encounter for other specified prophylactic measures");
    }
    SEQ_THREE_KEYS(KC_5, KC_1, KC_6) {
      SEND_STRING("Z51.6 - Encounter for desensitization to allergens");
    }
    SEQ_FOUR_KEYS(KC_9, KC_1, KC_8, KC_9) {
      SEND_STRING("Z91.89 - Other specified personal risk factors, not elsewhere classified");
    } 
  }
}