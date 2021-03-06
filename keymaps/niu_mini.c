#include "niu_mini.h"
#include "keymap_nordic.h"
#include "keymap_norwegian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = {
		{KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC},
		{KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, NO_OSLH, NO_AE},
		{KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, NO_MINS, KC_ENT},
		{KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(1), KC_SPC, KC_SPC, TG(3), KC_BSLS, NO_ALGR, KC_RBRC , NO_AA}
			// NOTE MO(2) does not correspond to an actual key since the NIU only comes
			// in MIT layout
		},

	[1] = {
		{KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS},
		{KC_TRNS, KC_EXLM, NO_QUO2, KC_HASH, NO_DLR, KC_PERCENT, NO_AMPR, NO_SLSH, NO_LPRN, NO_RPRN, NO_EQL, NO_QUES},
		{KC_TRNS, NO_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NO_LCBR, NO_RCBR, NO_LBRC, NO_RBRC, NO_PLUS, KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
		},

	[2] = {
		{KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS},
		{KC_TRNS, RGB_TOG, RGB_MOD, KC_TRNS, BL_TOGG, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_F11, KC_F12},
		{KC_TRNS, NO_LESS, NO_GRTR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
	},

	[3] = {
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_7, KC_KP_8, KC_KP_9, KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_0},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_1, KC_KP_2, KC_KP_3, KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
	}
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {
		case 1:
			// do nothing for now
			if (event.pressed) {
				;
			}
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
