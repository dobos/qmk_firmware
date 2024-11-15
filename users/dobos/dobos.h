#ifndef DOBOS_H
#define DOBOS_H

#include "quantum.h"

enum {
    TD_GRV_ESC = 0,
};

// Custom tap dance for the escape key
// Send KC_GRV when pressed once and KC_ESC when pressed twice quickly
// tap_dance_action_t tap_dance_actions[] = {
//     [ TD_GRV_ESC ] = ACTION_TAP_DANCE_DOUBLE(KC_GRV, KC_ESC)
// };

// Custom action to filter KC_GRV. Send an ESC when pressed as is and
// KC_GRV when pressed in combination with KC_RALT. To achieve this,
// we must also send key up events for KC_RALT.
bool process_custom_grv(uint16_t keycode, keyrecord_t *record);

#endif