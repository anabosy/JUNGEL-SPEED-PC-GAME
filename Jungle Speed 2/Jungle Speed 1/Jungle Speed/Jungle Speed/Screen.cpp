#include "Screen.h"
#include "Macros.h"
#include"SingletonTexture.h"

Screen::Screen()
{
	

    //=====================================================
	m_playbutton = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(PLAY_BUTTON));

	//=====================================================

	m_closebutton = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(CLOSE_BUTTON));
	//======================================================

	m_helpbutton = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(HELP_BUTTON));


	m_buttonColor = m_playbutton->getColor();
	
	//==========================================================
	

	m_player = make_unique<UserPlayer>();

	//==========================================================
	m_backgroundtexture = make_unique< sf::RectangleShape>(sf::Vector2f(SCREEN_WIDTH, SCREEN_HIGHT));

	m_backgroundtexture->setPosition(0, 0);
}


Screen::~Screen()
{

}

void Screen::run(sf::RenderWindow &window, int &screennum)
{

}

