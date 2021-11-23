#ifndef GWENJVS_CONFIG_H
#define GWENJVS_CONFIG_H

namespace GwenJVS {


#define WIN 1
#define GGR 2
#define GGS 3
#define GBF 4
#define STD 5
#define KSS 6
#define RF2 7
#define PI5 8
#define FEL 9
#define WLG 10
#define PPT 11
#define SIE 12
#define RCG 13


#define KEYBOARD 1
#define XINPUT 2

	/*
	Define GAME
	Xinput
	WIN		Standard Xinput mapping
	GGR		Mapping for Ghost n goblins resurection
	GGS		Mapping for Guilty Gear Strive
	GBF		Mapping for Grand blue Fantasy
	WLG		Mapping for Wild Guns with inverted joysticks
	RCG     Mapping for River City Girls

	Keyboard
	STD		Standard Keyboard Mapping
	KSS		Mapping for KOF Sky Stage
	RF2		Mapping for Rumble Fish 2
	PI5		Mapping for Power Instinct 5
	FEL		Mapping for Fighting Ex Layer
	PPT		Mapping for Puyo puyo Tetris
	SIE		Mapping for Space Invaders Extreme

	*/

#define GAME SIE

#if GAME == STD || GAME == KSS || GAME == RF2 || GAME == PI5 || GAME == FEL || GAME == SIE
#define OUTPUT KEYBOARD
#elif GAME == WIN || GAME == GGR || GAME == GGS || GAME == GBF || GAME == WLG || GAME == PPT || GAME == RCG
#define OUTPUT	XINPUT
#endif


const int kPollingRate = 250;
const int kReadTimeout = 60000;
const int kIdleTimeout = 3600000;
const char kDefaultPort[] = "COM2";
const char kLogLocation[] = "E:\\NESiCAxLive\\Log";

const int kNumPlayersPerNode = 2;
const int kNumNodes = 1;
const int kNumButtons = 15; // test + start + service + UDLR + btn 1-8

} // namespace GwenJVS

#endif