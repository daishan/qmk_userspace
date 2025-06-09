#include "daishan.h"

#ifdef RGBLIGHT_ENABLE
extern rgblight_config_t rgblight_config;
uint32_t currentRgbMode;
uint16_t currentRgbHue;
bool specialLayerActive = false;
#endif

/*
void matrix_init_user(void) {
    #ifdef UNICODE_ENABLE
    set_unicode_input_mode(UC_LINX);
    #endif
}
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            #ifdef UNICODE_ENABLE
            case SHRUG:
                send_unicode_string("¯\\_ツ_/¯");
                return false;

            case POOP:
                send_unicode_string("💩");
                return false;

            case FLIPTAB:
                send_unicode_string("(╯°□°╯) ͡ ┻━┻");
                return false;

            case FLIPTA2:
                send_unicode_string("(ノಠ痊ಠ)ノ彡┻━┻");
                return false;

            case THUMBUP:
                send_unicode_string("👍");
                return false;
            #endif
        }
    }
    return true;
};

// TODO: also toggle indicator LEDs for boards without underglow?
/*
#ifdef RGBLIGHT_ENABLE
void rememberRgbState(void) {
    if (!specialLayerActive) {
        currentRgbMode = rgblight_get_mode();
        currentRgbHue = rgblight_get_hue();
        specialLayerActive = true;
    }
}

void restoreRgbState(void) {
    if (specialLayerActive) {
        rgblight_mode_noeeprom(currentRgbMode);
        rgblight_sethsv_noeeprom(currentRgbHue, rgblight_config.sat, rgblight_config.val);
        specialLayerActive = false;
    }
}

uint32_t layer_state_set_user(uint32_t state) {
    // check layers from top to bottom
    if (IS_LAYER_ON(CAP)) {
        rememberRgbState();
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(21, rgblight_config.sat, rgblight_config.val);
    } else if (IS_LAYER_ON(GAM)) {
        rememberRgbState();
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(191, rgblight_config.sat, rgblight_config.val);
    } else {
        restoreRgbState();
    }
  return state;
}
#endif
*/
