#include "dobos.h"

// Custom action to filter KC_GRV. Send an ESC when pressed as is and
// KC_GRV when pressed in combination with KC_RALT. To achieve this,
// we must also send key up events for KC_RALT.

static bool custom_grv_pressed = false;

bool process_custom_grv(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_ESC:
            if (record->event.pressed) {
                if (get_mods() & MOD_BIT(KC_RALT)) {
                    // Send release codes for the modifier than a KC_GRV
                    custom_grv_pressed = true;
                    unregister_mods(MOD_BIT(KC_RALT));
                    register_code(KC_GRV);
                    register_mods(MOD_BIT(KC_RALT));

                    // Do not send KC_ESC
                    return false;
                } else {
                    // Pass through KC_ESC
                    return true;
                }
            } else {
                if (custom_grv_pressed) {
                    // Modifier status?
                    custom_grv_pressed = false;

                    bool ralt_pressed = get_mods() & MOD_BIT(KC_RALT);

                    if (ralt_pressed) {
                        unregister_mods(MOD_BIT(KC_RALT));
                    }

                    unregister_code(KC_GRV);

                    if (ralt_pressed) {
                        register_mods(MOD_BIT(KC_RALT));
                    }

                    // Do not send KC_ESC release
                    return false;
                } else {
                    // Pass through KC_ESC release
                    return true;
                }
            }
        default:
            return true; // Process all other keycodes normally
    }
}
