#pragma once
#include"Macros.h"
#include <memory>

using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;

class SingletonTexture
{
public:
	
	static SingletonTexture& instance();
	unique_ptr<sf::Texture>& getTexture(IMG type);
	~SingletonTexture();

private:
	SingletonTexture();
	SingletonTexture(const SingletonTexture&);
	void allocate();
	void setRepeated();
	void create();
	void loadFromFile();
	void makeSmoothy();
	
	unique_ptr<sf::Texture> g1;
	unique_ptr<sf::Texture> b1;
	unique_ptr<sf::Texture> y1;
	unique_ptr<sf::Texture> r1;
	
	unique_ptr<sf::Texture> g2;
	unique_ptr<sf::Texture> b2;
	unique_ptr<sf::Texture> y2;
	unique_ptr<sf::Texture> r2;
	
	unique_ptr<sf::Texture> g3;
	unique_ptr<sf::Texture> b3;
	unique_ptr<sf::Texture> y3;
	unique_ptr<sf::Texture> r3;
	
	unique_ptr<sf::Texture> g4;
	unique_ptr<sf::Texture> b4;
	unique_ptr<sf::Texture> y4;
	unique_ptr<sf::Texture> r4;
	
	unique_ptr<sf::Texture> g5;
	unique_ptr<sf::Texture> b5;
	unique_ptr<sf::Texture> y5;
	unique_ptr<sf::Texture> r5;
	
	unique_ptr<sf::Texture> g6;
	unique_ptr<sf::Texture> b6;
	unique_ptr<sf::Texture> y6;
	unique_ptr<sf::Texture> r6;
	
	unique_ptr<sf::Texture> g7;
	unique_ptr<sf::Texture> b7;
	unique_ptr<sf::Texture> y7;
	unique_ptr<sf::Texture> r7;
	
	unique_ptr<sf::Texture> g8;
	unique_ptr<sf::Texture> b8;
	unique_ptr<sf::Texture> y8;
	unique_ptr<sf::Texture> r8;
	
	unique_ptr<sf::Texture> g9;
	unique_ptr<sf::Texture> b9;
	unique_ptr<sf::Texture> y9;
	unique_ptr<sf::Texture> r9;
	
	unique_ptr<sf::Texture> g10;
	unique_ptr<sf::Texture> b10;
	unique_ptr<sf::Texture> y10;
	unique_ptr<sf::Texture> r10;
	
	unique_ptr<sf::Texture> g11;
	unique_ptr<sf::Texture> b11;
	unique_ptr<sf::Texture> y11;
	unique_ptr<sf::Texture> r11;
	
	unique_ptr<sf::Texture> g12;
	unique_ptr<sf::Texture> b12;
	unique_ptr<sf::Texture> y12;
	unique_ptr<sf::Texture> r12;
	
	unique_ptr<sf::Texture> g13;
	unique_ptr<sf::Texture> b13;
	unique_ptr<sf::Texture> y13;
	unique_ptr<sf::Texture> r13;
	
	unique_ptr<sf::Texture> g14;
	unique_ptr<sf::Texture> b14;
	unique_ptr<sf::Texture> y14;
	unique_ptr<sf::Texture> r14;
	
	unique_ptr<sf::Texture> g15;
	unique_ptr<sf::Texture> b15;
	unique_ptr<sf::Texture> y15;
	unique_ptr<sf::Texture> r15;

	unique_ptr<sf::Texture> g16;
	unique_ptr<sf::Texture> b16;
	unique_ptr<sf::Texture> y16;
	unique_ptr<sf::Texture> r16;

	unique_ptr<sf::Texture> g17;
	unique_ptr<sf::Texture> b17;
	unique_ptr<sf::Texture> y17;
	unique_ptr<sf::Texture> r17;

	unique_ptr<sf::Texture> g18;
	unique_ptr<sf::Texture> b18;
	unique_ptr<sf::Texture> y18;
	unique_ptr<sf::Texture> r18;

	unique_ptr<sf::Texture> sOutType1;
	unique_ptr<sf::Texture> sColorType2;        //S_COLOR_TYPE_2
	unique_ptr<sf::Texture> sInType3;           //S_IN_TYPE_3
	unique_ptr<sf::Texture> stick;              // STICK
	unique_ptr<sf::Texture> openHand;           //OPEN_HAND
	unique_ptr<sf::Texture> colsedHand;         // COLSED_HAND
	unique_ptr<sf::Texture> hapeClosedCard;     // HAPE_CLOSED_CARD           
	unique_ptr<sf::Texture> hapeOpenCard;       // HAPE_OPEN_CARD
	unique_ptr<sf::Texture> playButton;         // PLAY_BUTTON
	unique_ptr<sf::Texture> closeButton;        // COLSE_BUTTON
	unique_ptr<sf::Texture> helpButton;         // HELP_BUTTON
	unique_ptr<sf::Texture> gameBg;             // GAME_BG_IMG
	unique_ptr<sf::Texture> muneBg;             //MENU_BG_IMG
};
