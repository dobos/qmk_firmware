/* Copyright 2024 Deemen17 <https://github.com/Deemen17>
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

#pragma once

#define USB_MAX_POWER_CONSUMPTION 350
#define WAIT_FOR_USB

#define WS2812_SPI_DRIVER SPID2
#define WS2812_SPI_USE_CIRCULAR_BUFFER

#define MATRIX_ROWS 14 //max supported
#define MATRIX_COLS 8

// #define SOFTWARE_ESC_BOOTLOADER

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING

#define RGBLIGHT_LED_COUNT 1
#define RGBLIGHT_LIMIT_VAL 192
#define RGBLIGHT_SLEEP
// #define RGB_DI_PIN B15
#define WS2812_DI_PIN B15
// #define APA102_DI_PIN B15

// #define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1023
// #define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 511
// #define DYNAMIC_KEYMAP_LAYER_COUNT     4

#define PHY_INDICATOR_NUM    0
#define LOGIC_INDICATOR_NUM  1
#define INDICATOR_FUNCT    {(1<<USB_LED_CAPS_LOCK)}
//#define INDICATOR_VAL      128
#define RGB_EXTRA_PROCESS_ENABLE