/* Copyright 2017 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#include "daishan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_tkl_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,  ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL,    KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,
        MO(FN1),   ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,                  KC_RSFT,              KC_UP,
        KC_LCTL,    KC_LGUI,    KC_LALT,                      KC_SPC,                       KC_RALT,    MO(FN1),    MO(FN2),   KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT),

    [FN1] = LAYOUT_tkl_ansi(
        _______,          _______, _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, _______,     _______, _______, _______,
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,      _______, _______, _______,
        _______,  DESK_01, KC_UP,   DESK_03, DESK_02, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,       _______, _______, _______,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, DESK_04, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    WINLEFT, WINRGHT, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______,                  _______,              _______,
        _______,    _______,    _______,                     _______,                       _______,    _______,    __F13__,   _______,     _______, _______, _______),

    [FN2] = LAYOUT_tkl_ansi(
        _______,          _______, _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, _______,     _______, _______, KC_MPLY,
        _______, SHRUG,   POOP,    FLIPTAB, FLIPTA2, THUMBUP, _______, _______, _______, _______, _______,  _______, _______,  _______,     _______, _______, _______,
        _______,  KC_MUTE, KC_VOLU, RGBSWRL, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,       _______, KC_MUTE, _______,
        _______,   KC_MPRV, KC_VOLD, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, KC_WH_U, KC_WH_D, _______,                  KC_MPLY,              KC_VOLU,
        _______,    TG(CAP),    _______,                      TG(GAM),                      _______,    __F13__,    _______,   RGB_TOG,     KC_MPRV, KC_VOLD, KC_MNXT),

    [CAP] = LAYOUT_tkl_ansi(
        _______,          _______, _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, _______,     _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,     _______, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,     _______, _______, _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,              _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______,     _______, _______, _______),

    [GAM] = LAYOUT_tkl_ansi(
        _______,          _______, _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, _______,     _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,     _______, _______, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,     _______, _______, _______,
        KC_GRV,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,              _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______,     _______, _______, _______),
};
