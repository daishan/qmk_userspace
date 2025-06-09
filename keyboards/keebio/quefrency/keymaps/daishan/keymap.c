#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#include "daishan.h"

/* no split backspace, so hardcoded RA7 to KC_NO compared to regular LAYOUT */
/* no 1U keys on right side of bottom row (arrows), so hardcoded RE6 to KC_NO */
#define LAYOUT_daishan( \
  LA1, LA2, LA3, LA4, LA5, LA6, LA7, RA1, RA2, RA3, RA4, RA5, RA6,      RA8, \
  LB1, LB2, LB3, LB4, LB5, LB6,      RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, \
  LC1, LC2, LC3, LC4, LC5, LC6,      RC1, RC2, RC3, RC4, RC5, RC6,      RC8, \
  LD1,      LD3, LD4, LD5, LD6, LD7, RD1, RD2, RD3, RD4,      RD6, RD7, RD8, \
  LE1, LE2, LE3,      LE5,      LE7, RE1, RE2,      RE4, RE5,      RE7, RE8 \
  ) \
  { \
    { LA1, LA2, LA3, LA4, LA5, LA6, LA7, KC_NO }, \
    { LB1, LB2, LB3, LB4, LB5, LB6, KC_NO, KC_NO }, \
    { LC1, LC2, LC3, LC4, LC5, LC6, KC_NO, KC_NO }, \
    { LD1, KC_NO, LD3, LD4, LD5, LD6, LD7, KC_NO }, \
    { LE1, LE2, LE3, KC_NO, LE5, KC_NO, LE7, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { RA1, RA2, RA3, RA4, RA5, RA6, KC_NO, RA8 }, \
    { RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8 }, \
    { RC1, RC2, RC3, RC4, RC5, RC6, KC_NO, RC8 }, \
    { RD1, RD2, RD3, RD4, KC_NO, RD6, RD7, RD8 }, \
    { RE1, RE2, KC_NO, RE4, RE5, KC_NO, RE7, RE8 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
  }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_daishan(
        KC_GESC, ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL,    KC_BSPC,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,
        MO(FN1),   ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,        KC_RSFT,  MO(FN1),
        KC_LCTL,   KC_LGUI,   KC_LALT,       MO(FN1), KC_SPC,         KC_SPC,  KC_BSPC,       KC_RALT,   MO(FN1),   MO(FN2),   KC_RCTL),


    [FN1] = LAYOUT_daishan(
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,
        _______,  DESK_01, KC_UP,   DESK_03, DESK_02, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, DESK_04, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    WINLEFT, WINRGHT, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______,        _______,  _______,
        _______,   _______,   _______,       _______, _______,        _______, KC_DEL,        _______,   _______,   __F13__,   _______),


    [FN2] = LAYOUT_daishan(
        _______, SHRUG,   POOP,    FLIPTAB, FLIPTA2, THUMBUP, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  KC_MUTE, KC_VOLU, RGBSWRL, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,
        _______,   KC_WBAK, KC_VOLD, KC_WFWD, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______,        KC_MPLY,  _______,
        _______,   TG(CAP),   _______,       _______, TG(GAM),        _______, _______,       _______,   __F13__,   _______,   RGB_TOG),


    [CAP] = LAYOUT_daishan(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,  _______,
        _______,   _______,   _______,       _______, _______,        _______, _______,       _______,   _______,   _______,   _______),


    [GAM] = LAYOUT_daishan(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_PCMM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,  _______,
        _______,   _______,   _______,       _______, _______,        _______, _______,       _______,   _______,   _______,   _______),
};
