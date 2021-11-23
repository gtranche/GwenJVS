#ifndef GWENJVS_KEYMAP_H
#define GWENJVS_KEYMAP_H

#include "config.h"

namespace GwenJVS {

// KB scancodes

//Original
#if GAME == STD
const WORD kKbNode0Player0[kNumButtons] = {
	0x3C,	// test		F2
	0x02,	// start	1
	0x0A,	// service	9
	0xC8,	// up		up
	0xD0,	// down		down
	0xCB,	// left		left
	0xCD,	// right	right
	0x2C,	// btn1		z
	0x2D,	// btn2		x
	0x2E,	// btn3		c
	0x2F,	// btn4		v
	0x30,	// btn5		b
	0x31	// btn6		n
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		F2
	0x03,	// start	2
	0x0B,	// service	1
	0x17,	// up		a
	0x25,	// down		s
	0x24,	// left		d
	0x26,	// right	f
	0x1E,	// btn1		g
	0x1F,	// btn2		h
	0x20,	// btn3		j
	0x21,	// btn4		k
	0x22,	// btn5		l
	0x23	// btn6		;
};

//KOF SS
#elif GAME == KSS
const WORD kKbNode0Player0[kNumButtons] = {
	0x3C,	// test		F2
	0x02,	// start	=
	0x0A,	// service	9
	0xC8,	// up		up
	0xD0,	// down		down
	0xCB,	// left		left
	0xCD,	// right	right
	0x2C,	// btn1		z
	0x2D,	// btn2		x
	0x2E,	// btn3		c
	0x2F,	// btn4		v
	0x30,	// btn5		b
	0x31	// btn6		n
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		F2
	0x04,	// start	3
	0x0B,	// service	1
	0x17,	// up		i
	0x25,	// down		k
	0x24,	// left		j
	0x26,	// right	l
	0x1e,	// btn1		a
	0x1f,	// btn2		s
	0x20,	// btn3		d
	0x21,	// btn4		f
	0x22,	// btn5		g
	0x23	// btn6		m
};


//Rumble Fish2
#elif GAME == RF2
const WORD kKbNode0Player0[kNumButtons] = {
	0x3C,	// test		F2
	0x02,	// start	=
	0x25,	// service	k
	0xC8,	// up		up
	0xD0,	// down		down
	0xCB,	// left		left
	0xCD,	// right	right
	0x2C,	// btn1		z
	0x2D,	// btn2		x
	0x2E,	// btn3		c
	0x2F,	// btn4		v
	0x30,	// btn5		b
	0x31	// btn6		n
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		F2
	0x03,	// start	2
	0x0B,	// service	1
	0x16,	// up		u
	0x17,	// down		i
	0x18,	// left		o
	0x19,	// right	P
	0x1e,	// btn1		a
	0x1f,	// btn2		s
	0x20,	// btn3		d
	0x21,	// btn4		f
	0x22,	// btn5		g
	0x23	// btn6		m
};


//Power Instinct 5
#elif GAME == PI5
const WORD kKbNode0Player0[kNumButtons] = {
	0x3C,	// test		F2
	0x02,	// start	=
	0x0A,	// service	9
	0xC8,	// up		up
	0xD0,	// down		down
	0xCB,	// left		left
	0xCD,	// right	right
	0x2C,	// btn1		z
	0x2D,	// btn2		x
	0x2E,	// btn3		c
	0x2F,	// btn4		v
	0x30,	// btn5		b
	0x31	// btn6		n
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		F2
	0x03,	// start	2
	0x0B,	// service	1
	0x12,	// up		e
	0x20,	// down		d
	0x1f,	// left		s
	0x21,	// right	f
	0x13,	// btn1		r
	0x15,	// btn2		y
	0x18,	// btn3		o
	0x14,	// btn4		t
	0x17,	// btn5		i
	0x19	// btn6		p
};


// Fighting Ex Layer
#elif GAME == FEL
const WORD kKbNode0Player0[kNumButtons] = {
	0x2F,	// test		V
	0x30,	// start	B
	0xD1,	// service	page down
	0x11,	// up		Z
	0x1F,	// down		S
	0x1E,	// left		A
	0x20,	// right	D
	0x15,	// btn1		Y
	0x16,	// btn2		U
//	0x1C,	// btn1		enter
//	0x2D,	// btn2		x
	0x17,	// btn3		I
	0x23,	// btn4		H
	0x24,	// btn5		J
	0x25	// btn6		K
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		3
	0xCF,	// start	End
	0x0B,	// service	1
	0x19,	// up		P
	0x27,	// down		semi colon
	0x26,	// left		L
	0x12,	// right	e
	0x47,	// btn1		num7
	0x48,	// btn2		num8
	0x49,	// btn3		num9
	0x4B,	// btn4		num4
	0x4C,	// btn5		num5
	0x4D	// btn6		num6
};

// Space Invaders Extreme
#elif GAME == SIE
const WORD kKbNode0Player0[kNumButtons] = {
	0x2F,	// test		V
	0x01,	// start	escape
	0xD1,	// service	page down
	0xC8,	// up		up
	0xD0,	// down		down
	0xCB,	// left		left
	0xCD,	// right	right
	0x1D,	// btn1		ctrl
	0x2A,	// btn2		Shift
//	0x1C,	// btn1		enter
//	0x2D,	// btn2		x
	0x0E,	// btn3		backspace
	0x1C,	// btn4		enter
	0x24,	// btn5		J
	0x25	// btn6		K
};

const WORD kKbNode0Player1[kNumButtons] = {
	0x3C,	// test		3
	0xCF,	// start	End
	0x0B,	// service	1
	0x19,	// up		P
	0x27,	// down		semi colon
	0x26,	// left		L
	0x12,	// right	e
	0x47,	// btn1		num7
	0x48,	// btn2		num8
	0x49,	// btn3		num9
	0x4B,	// btn4		num4
	0x4C,	// btn5		num5
	0x4D	// btn6		num6
};


// XInput mapping
#elif GAME == WIN || GAME == WLG 
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_X,					// btn1
	XUSB_GAMEPAD_Y,					// btn2
	XUSB_GAMEPAD_RIGHT_SHOULDER,	// btn3
	XUSB_GAMEPAD_A,					// btn4
	XUSB_GAMEPAD_B,					// btn5
	XUSB_GAMEPAD_RIGHT_THUMB,		// btn6 
	XUSB_GAMEPAD_LEFT_SHOULDER,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};

//GG Strive
#elif GAME == GGS
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_A,					// btn1
	XUSB_GAMEPAD_Y,					// btn2
	XUSB_GAMEPAD_B,	// btn3
	XUSB_GAMEPAD_X,					// btn4
	XUSB_GAMEPAD_LEFT_THUMB,					// btn5
	XUSB_GAMEPAD_RIGHT_SHOULDER,		// btn6 
	XUSB_GAMEPAD_LEFT_SHOULDER,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};

// Ghost n goblins
#elif GAME == GGR
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_X,					// btn1
	XUSB_GAMEPAD_A,					// btn2
	XUSB_GAMEPAD_Y,	// btn3
	XUSB_GAMEPAD_B,					// btn4
	XUSB_GAMEPAD_LEFT_THUMB,					// btn5
	XUSB_GAMEPAD_RIGHT_SHOULDER,		// btn6 
	XUSB_GAMEPAD_LEFT_SHOULDER,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};

//GranBlue
#elif GAME == GBF
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_X,					// btn1
	XUSB_GAMEPAD_Y,					// btn2
	XUSB_GAMEPAD_B,	// btn3
	XUSB_GAMEPAD_A,					// btn4
	XUSB_GAMEPAD_LEFT_THUMB,					// btn5
	XUSB_GAMEPAD_RIGHT_SHOULDER,		// btn6 
	XUSB_GAMEPAD_LEFT_SHOULDER,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};

//Puyo Puyo
#elif GAME == PPT
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_A,					// btn1
	XUSB_GAMEPAD_B,					// btn2
	XUSB_GAMEPAD_LEFT_SHOULDER,	// btn3
	XUSB_GAMEPAD_X,					// btn4
	XUSB_GAMEPAD_Y,					// btn5
	XUSB_GAMEPAD_RIGHT_THUMB,		// btn6 
	XUSB_GAMEPAD_LEFT_THUMB,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};
// XInput mapping
#elif GAME == RCG 
const USHORT kXInputMapping[kNumButtons] = {
	XUSB_GAMEPAD_BACK,				// test
	XUSB_GAMEPAD_START,				// start
	XUSB_GAMEPAD_GUIDE,				// service
	XUSB_GAMEPAD_DPAD_UP,			// up
	XUSB_GAMEPAD_DPAD_DOWN,			// down
	XUSB_GAMEPAD_DPAD_LEFT,			// left
	XUSB_GAMEPAD_DPAD_RIGHT,		// right
	XUSB_GAMEPAD_X,					// btn1
	XUSB_GAMEPAD_Y,					// btn2
	XUSB_GAMEPAD_RIGHT_SHOULDER,	// btn3
	XUSB_GAMEPAD_A,					// btn4
	XUSB_GAMEPAD_B,					// btn5
	XUSB_GAMEPAD_LEFT_SHOULDER,		// btn6 
	XUSB_GAMEPAD_RIGHT_THUMB,		// btn7 
	XUSB_GAMEPAD_LEFT_THUMB			// btn8 
};
#endif

const WORD kKbNode1Player0[kNumButtons] = {
	0x04,	// test		3
	0x0C,	// start	-
	0x03,	// service	2
	0x10,	// up		q
	0x11,	// down		w
	0x12,	// left		e
	0x13,	// right	r
	0x14,	// btn1		t
	0x15,	// btn2		y
	0x16,	// btn3		u
	0x17,	// btn4		i
	0x18,	// btn5		o
	0x19	// btn6		p
};

const WORD kKbNode1Player1[kNumButtons] = {
	0x04,	// test		3
	0x1A,	// start	[
	0x03,	// service	2
	0x2C,	// up		z
	0x2D,	// down		x
	0x2E,	// left		c
	0x2F,	// right	v
	0x30,	// btn1		b
	0x31,	// btn2		n
	0x32,	// btn3		m
	0x33,	// btn4		,
	0x34,	// btn5		.
	0x35	// btn6		/
};


#if OUTPUT == KEYBOARD
const static WORD* kKbMapping[kNumNodes][kNumPlayersPerNode] = {
	{ kKbNode0Player0, kKbNode0Player1 },
	//	{ kKbNode1Player0, kKbNode1Player1 }
};
#endif

// to use LT/RT, set the mapping in xinput_mapping to XUSB_GAMEPAD_GUIDE (since it can't be used as a normal button)
// then define XINPUT_REMAP_TO_LT/RT and give the BUTTONS_ enum for that button

#define XINPUT_REMAP_TO_RT
#undef XINPUT_REMAP_TO_LT	

#ifdef GAME == WIN || GAME == WLG || GAME == PPT
#define XINPUT_RT_BTN				kButton6
#endif

#if GAME == GBF || GAME == GGR || GAME == GGS
#define XINPUT_LT_BTN				kButton5
#endif

// DInput mapping
const USHORT kDInputMapping[kNumButtons] = {
	DS4_BUTTON_SHARE,				// test
	DS4_BUTTON_OPTIONS,				// start
	DS4_BUTTON_SHOULDER_RIGHT,		// service
	0,								// up - dpad directions are ignored as ds4 does it differently 
	0,								// down
	0,								// left
	0,								// right
	DS4_BUTTON_SQUARE,				// btn1
	DS4_BUTTON_TRIANGLE,			// btn2
	DS4_BUTTON_SHOULDER_LEFT,		// btn3
	DS4_BUTTON_CROSS,				// btn4
	DS4_BUTTON_CIRCLE,				// btn5
	DS4_BUTTON_TRIGGER_LEFT,		// btn6
};

// to use LT/RT as analogs as well as digitals
// then define DINPUT_ANALOG_LT/RT and give the BUTTONS_ enum for that button

#undef DINPUT_ANALOG_RT
#define DINPUT_ANALOG_LT	

#ifdef DINPUT_ANALOG_RT
#define DINPUT_RT_BTN				kButton6
#endif

#ifdef DINPUT_ANALOG_LT
#define DINPUT_LT_BTN				kButton6
#endif


} // namespace GwenJVS

#endif