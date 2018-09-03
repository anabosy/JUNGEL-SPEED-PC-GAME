#pragma once
#include<SFML\Graphics.hpp>
#include <memory>
#include"UserPlayer.h"



using std::unique_ptr;
using std::shared_ptr;
using std::make_shared;
using std::make_unique;

class Screen
{
public:
	Screen();
	~Screen();
	void virtual run(sf::RenderWindow &window, int &screennum);

protected:

	unique_ptr<sf::Sprite> m_playbutton, m_closebutton, m_helpbutton;
	sf::Color m_buttonColor;


	unique_ptr< UserPlayer> m_player;

	unique_ptr< sf::RectangleShape>  m_backgroundtexture;

};

