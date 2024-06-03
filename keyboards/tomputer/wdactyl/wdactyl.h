#pragma once
#include QMK_KEYBOARD_H

// Standard Keymap
/*Actual keyboard position/connection
    L00, L01, L02, L03, L04, L05, R05, R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14, L15, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, R35, R34, R33, R32, R31, R30, \
	L40, L41, L42, L43, L44, L45, R45, R44, R43, R42, R41, R40, \
              L52, L53, L54, L55, R55, R54, R53, R52,           \
              L62, L63, L64,           R64, R63, R62


    Taking the thumb clusters (L55, L54, L64, L63, L62) and same from other side and moving them to the middle
    Effectively pretending I set this up the same as JanLunge did
*/
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05, L55, R55, R05, R04, R03, R02, R01, R00, \
	L10, L11, L12, L13, L14, L15, L54, R54, R15, R14, R13, R12, R11, R10, \
	L20, L21, L22, L23, L24, L25, L64, R64, R25, R24, R23, R22, R21, R20, \
	L30, L31, L32, L33, L34, L35, L63, R63, R35, R34, R33, R32, R31, R30, \
	L40, L41, L42, L43, L44, L45,           R45, R44, R43, R42, R41, R40, \
	 		  L52, L53,           L62, R62,           R53, R52 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ L40, L41, L42, L43, L44, L45 }, \
        {KC_NO,KC_NO, L52, L53, L54, L55 },\
        {KC_NO,KC_NO, L62, L63, L64, KC_NO},\
        { R00, R01, R02, R03, R04, R05 }, \
        { R10, R11, R12, R13, R14, R15 }, \
        { R20, R21, R22, R23, R24, R25 }, \
        { R30, R31, R32, R33, R34, R35 }, \
        { R40, R41, R42, R43, R44, R45 }, \
        {KC_NO,KC_NO, R52, R53, R54, R55 },\
        {KC_NO,KC_NO, R62, R63, R64, KC_NO},\
	}

//Before
/*

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, R06, R05, R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14, L15, L16, R16, R15, R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24, L25, L26, R26, R25, R24, R23, R22, R21, R20, \
    L30, L31, L32, L33, L34, L35, L36, R36, R35, R34, R33, R32, R31, R30, \
    L40, L41, L42, L43, L44, L45,           R45, R44, R43, R42, R41, R40, \
              L52, L53,           L56, R56,           R53, R52 \
    ) \
    { \
        { L00, L01, L02, L03, L04, L05, L06 }, \
        { L10, L11, L12, L13, L14, L15, L16 }, \
        { L20, L21, L22, L23, L24, L25, L26 }, \
        { L30, L31, L32, L33, L34, L35, L36 }, \
        { L40, L41, L42, L43, L44, L45, KC_NO }, \
        { KC_NO, KC_NO, L52, L53, KC_NO, KC_NO, L56 }, \
        { R00, R01, R02, R03, R04, R05, R06 }, \
        { R10, R11, R12, R13, R14, R15, R16 }, \
        { R20, R21, R22, R23, R24, R25, R26 }, \
        { R30, R31, R32, R33, R34, R35, R36 }, \
        { R40, R41, R42, R43, R44, R45, KC_NO }, \
        { KC_NO, KC_NO, R52, R53, KC_NO, KC_NO, R56 }, \
    }

*/
