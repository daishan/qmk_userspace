#include "daishan.h"

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

const rgblight_segment_t PROGMEM daishan_layer_white[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 16, HSV_WHITE}
);

const rgblight_segment_t PROGMEM daishan_layer_osx[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 8, HSV_BLUE}
);

const rgblight_segment_t PROGMEM daishan_layer_game[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 8, HSV_GREEN}
);

const rgblight_segment_t PROGMEM daishan_layer_caps[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 8, HSV_RED}
);

const rgblight_segment_t PROGMEM daishan_layer_uc_linux[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_RED}, {2, 2, HSV_GREEN},
    {4, 2, HSV_RED}, {6, 2, HSV_GREEN},
    {8, 2, HSV_RED}, {10, 2, HSV_GREEN},
    {12, 2, HSV_RED}, {14, 2, HSV_GREEN}
);

const rgblight_segment_t PROGMEM daishan_layer_uc_osx[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_RED}, {2, 2, HSV_BLUE},
    {4, 2, HSV_RED}, {6, 2, HSV_BLUE},
    {8, 2, HSV_RED}, {10, 2, HSV_BLUE},
    {12, 2, HSV_RED}, {14, 2, HSV_BLUE}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM daishan_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    daishan_layer_white,
    daishan_layer_osx,
    daishan_layer_game,
    daishan_layer_caps,
    daishan_layer_uc_linux,
    daishan_layer_uc_osx
);

void keyboard_post_init_user(void) {
    rgblight_layers = daishan_rgb_layers;
}

layer_state_t prev_state = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    // blink in respective color if turning OSX layer on or off
    if (!layer_state_cmp(prev_state, OSX) && layer_state_cmp(state, OSX)) {
        rgblight_blink_layer(UGL_OSX, 1000);
    } else if (layer_state_cmp(prev_state, OSX) && !layer_state_cmp(state, OSX)){
        rgblight_blink_layer(UGL_NONE, 1000);
    }
    // blink in respective color if turning gaming layer on or off
    if (!layer_state_cmp(prev_state, GAM) && layer_state_cmp(state, GAM)) {
        rgblight_blink_layer(UGL_GAME, 1000);
    } else if (layer_state_cmp(prev_state, GAM) && !layer_state_cmp(state, GAM)) {
        rgblight_blink_layer(UGL_NONE, 1000);
    }
    // permanently notify if caps lock layer is on
    rgblight_set_layer_state(UGL_CAPS, layer_state_cmp(state, CAP));

    prev_state = state;
    return state;
}

void unicode_input_mode_set_user(uint8_t input_mode) {
    if (input_mode == UNICODE_MODE_LINUX) {
        rgblight_blink_layer(UGL_UC_LINUX, 1000);
    } else if (input_mode == UNICODE_MODE_MACOS) {
        rgblight_blink_layer(UGL_UC_OSX, 1000);
    } else {
        rgblight_blink_layer(UGL_NONE, 1000);
    }
}
