#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <ctime>
#include <sstream>
#include <iosfwd>
#include<string>



using std::string;
using std::ifstream;
using std::ofstream;
using namespace std;
enum IMG {B_TYPE_1, G_TYPE_1, R_TYPE_1,Y_TYPE_1,
	B_TYPE_2, G_TYPE_2, R_TYPE_2, Y_TYPE_2,
	B_TYPE_3, G_TYPE_3, R_TYPE_3, Y_TYPE_3,
	B_TYPE_4, G_TYPE_4, R_TYPE_4, Y_TYPE_4,
	B_TYPE_5, G_TYPE_5, R_TYPE_5, Y_TYPE_5, 
	B_TYPE_6, G_TYPE_6, R_TYPE_6, Y_TYPE_6,
	B_TYPE_7, G_TYPE_7, R_TYPE_7, Y_TYPE_7,
	B_TYPE_8, G_TYPE_8, R_TYPE_8, Y_TYPE_8,
	B_TYPE_9, G_TYPE_9, R_TYPE_9, Y_TYPE_9,
	B_TYPE_10, G_TYPE_10, R_TYPE_10, Y_TYPE_10,
	B_TYPE_11, G_TYPE_11, R_TYPE_11, Y_TYPE_11,
	B_TYPE_12, G_TYPE_12, R_TYPE_12, Y_TYPE_12,
	B_TYPE_13, G_TYPE_13, R_TYPE_13, Y_TYPE_13,
	B_TYPE_14, G_TYPE_14, R_TYPE_14, Y_TYPE_14,
	B_TYPE_15, G_TYPE_15, R_TYPE_15, Y_TYPE_15,
	B_TYPE_16, G_TYPE_16, R_TYPE_16, Y_TYPE_16,
	B_TYPE_17, G_TYPE_17, R_TYPE_17, Y_TYPE_17,
	B_TYPE_18, G_TYPE_18, R_TYPE_18, Y_TYPE_18,

    S_OUT_TYPE_1, S_COLOR_TYPE_2 , S_IN_TYPE_3 ,     STICK,
	OPEN_HAND ,   CLOSED_HAND ,    HAPE_CLOSED_CARD ,HAPE_OPEN_CARD,
    PLAY_BUTTON , CLOSE_BUTTON ,   HELP_BUTTON , GAME_BG , MENU_BG

};
enum COLOR {RED , BLUE, YELLOW, GREEN};

const unsigned int CARD_WIDTH = 20;
const string B_TYPE_1_IMG = "photos/1.png";
const string G_TYPE_1_IMG = "photos/2.png";
const string R_TYPE_1_IMG = "photos/3.png";
const string Y_TYPE_1_IMG = "photos/4.png";

const string B_TYPE_2_IMG = "photos/5.png";
const string G_TYPE_2_IMG = "photos/6.png"; 
const string R_TYPE_2_IMG = "photos/7.png";
const string Y_TYPE_2_IMG = "photos/8.png";

const string B_TYPE_3_IMG = "photos/9.png" ;
const string G_TYPE_3_IMG = "photos/10.png";
const string R_TYPE_3_IMG = "photos/11.png"; 
const string Y_TYPE_3_IMG = "photos/12.png";

const string B_TYPE_4_IMG = "photos/13.png";
const string G_TYPE_4_IMG = "photos/14.png"; 
const string R_TYPE_4_IMG = "photos/15.png";
const string Y_TYPE_4_IMG = "photos/16.png";

const string B_TYPE_5_IMG = "photos/17.png";
const string G_TYPE_5_IMG = "photos/18.png"; 
const string R_TYPE_5_IMG = "photos/19.png"; 
const string Y_TYPE_5_IMG = "photos/20.png";

const string B_TYPE_6_IMG = "photos/21.png";
const string G_TYPE_6_IMG = "photos/22.png";
const string R_TYPE_6_IMG = "photos/23.png";
const string Y_TYPE_6_IMG = "photos/24.png";

const string B_TYPE_7_IMG = "photos/25.png";
const string G_TYPE_7_IMG = "photos/26.png"; 
const string R_TYPE_7_IMG = "photos/27.png"; 
const string Y_TYPE_7_IMG = "photos/28.png";

const string B_TYPE_8_IMG = "photos/29.png"; 
const string G_TYPE_8_IMG = "photos/30.png";
const string R_TYPE_8_IMG = "photos/31.png";
const string Y_TYPE_8_IMG = "photos/32.png";

const string B_TYPE_9_IMG = "photos/33.png";
const string G_TYPE_9_IMG = "photos/34.png";
const string R_TYPE_9_IMG = "photos/35.png";
const string Y_TYPE_9_IMG = "photos/36.png";

const string B_TYPE_10_IMG = "photos/41.png";
const string G_TYPE_10_IMG = "photos/42.png";
const string R_TYPE_10_IMG = "photos/43.png"; 
const string Y_TYPE_10_IMG = "photos/44.png";

const string B_TYPE_11_IMG = "photos/37.png";
const string G_TYPE_11_IMG = "photos/38.png";
const string R_TYPE_11_IMG = "photos/39.png";
const string Y_TYPE_11_IMG = "photos/40.png";

const string B_TYPE_12_IMG = "photos/45.png";
const string G_TYPE_12_IMG = "photos/46.png";
const string R_TYPE_12_IMG = "photos/47.png"; 
const string Y_TYPE_12_IMG = "photos/48.png";

const string B_TYPE_13_IMG = "photos/49.png";
const string G_TYPE_13_IMG = "photos/50.png"; 
const string R_TYPE_13_IMG = "photos/51.png";
const string Y_TYPE_13_IMG = "photos/52.png";

const string B_TYPE_14_IMG = "photos/53.png";
const string G_TYPE_14_IMG = "photos/54.png"; 
const string R_TYPE_14_IMG = "photos/55.png"; 
const string Y_TYPE_14_IMG = "photos/56.png";

const string B_TYPE_15_IMG = "photos/57.png";
const string G_TYPE_15_IMG = "photos/58.png"; 
const string R_TYPE_15_IMG = "photos/59.png"; 
const string Y_TYPE_15_IMG = "photos/60.png";

const string B_TYPE_16_IMG = "photos/61.png";
const string G_TYPE_16_IMG = "photos/62.png";
const string R_TYPE_16_IMG = "photos/63.png";
const string Y_TYPE_16_IMG = "photos/64.png";

const string B_TYPE_17_IMG = "photos/65.png";
const string G_TYPE_17_IMG = "photos/66.png"; 
const string R_TYPE_17_IMG = "photos/67.png"; 
const string Y_TYPE_17_IMG = "photos/68.png";

const string B_TYPE_18_IMG = "photos/69.png";
const string G_TYPE_18_IMG = "photos/70.png"; 
const string R_TYPE_18_IMG = "photos/71.png"; 
const string Y_TYPE_18_IMG = "photos/72.png";

const string S_OUT_TYPE_1_IMG = "photos/73.png";
const string S_COLOR_TYPE_2_IMG = "photos/74.png";
const string S_IN_TYPE_3_IMG = "photos/75.png";
const string STICK_IMG = "photos/76.png";
const string OPEN_HAND_IMG = "photos/hand.png" ;
const string CLOSED_HAND_IMG = "photos/closedhand.png" ;

const string HAPE_CLOSED_CARD_IMG = "photos/77cards.png" ;
const string HAPE_OPEN_CARD_IMG = "photos/78openCards.png" ;

const string PLAY_BUTTON_IMG = "photos/playbutton.png";
const string CLOSE_BUTTON_IMG = "photos/closebutton.png";
const string HELP_BUTTON_IMG = "photos/helpbutton.png";
const string GAME_BG_IMG = "photos/79d.png";
const string MENU_BG_IMG = "photos/79.png";

//====================================================================================================================================
const string GAMESOUND = "sound/gameSound.wav";

const int SCREEN_WIDTH = 900;
const int SCREEN_HIGHT = 690;
