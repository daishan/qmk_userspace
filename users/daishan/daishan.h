#include "quantum.h"


//#define _______ KC_TRNS

#define ___1___ KC_1
#define ___2___ KC_2
#define ___3___ KC_3
#define ___4___ KC_4
#define ___5___ KC_5
#define ___6___ KC_6
#define ___7___ KC_7
#define ___8___ KC_8
#define ___9___ KC_9
#define ___0___ KC_0

#define ___A___ KC_A
#define ___B___ KC_B
#define ___C___ KC_C
#define ___D___ KC_D
#define ___E___ KC_E
#define ___F___ KC_F
#define ___G___ KC_G
#define ___H___ KC_H
#define ___I___ KC_I
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ KC_L
#define ___M___ KC_M
#define ___N___ KC_N
#define ___O___ KC_O
#define ___P___ KC_P
#define ___Q___ KC_Q
#define ___R___ KC_R
#define ___S___ KC_S
#define ___T___ KC_T
#define ___U___ KC_U
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z

#define __F1___ KC_F1
#define __F2___ KC_F2
#define __F3___ KC_F3
#define __F4___ KC_F4
#define __F5___ KC_F5
#define __F6___ KC_F6
#define __F7___ KC_F7
#define __F8___ KC_F8
#define __F9___ KC_F9
#define __F10__ KC_F10
#define __F11__ KC_F11
#define __F12__ KC_F12

#define __F13__ KC_F13
#define __F14__ KC_F14
#define __F15__ KC_F15
#define __F16__ KC_F16

#define RGBSWRL RGB_MODE_SWIRL
#define RGBSTAT RGB_MODE_PLAIN
#define RGBBREA RGB_MODE_BREATHE

#define DESKUP  LCTL(LALT(KC_UP))
#define DESKDWN LCTL(LALT(KC_DOWN))
#define DESKLFT LCTL(LALT(KC_LEFT))
#define DESKRGT LCTL(LALT(KC_RGHT))
#define DESK_01 LCTL(KC_F1)
#define DESK_02 LCTL(KC_F2)
#define DESK_03 LCTL(KC_F3)
#define DESK_04 LCTL(KC_F4)

#define WINLEFT LGUI(KC_LEFT)
#define WINRGHT LGUI(KC_RGHT)


enum custom_keycodes {
    SHRUG = SAFE_RANGE,
    POOP,
    FLIPTAB,
    FLIPTA2,
    THUMBUP,
};

enum userspace_layers {
  BASE = 0,
  FN1,
  FN2,
  GAM,
  CAP,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_init_user(void);
