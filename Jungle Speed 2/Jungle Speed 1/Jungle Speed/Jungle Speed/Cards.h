#pragma once
#include<SFML\Graphics.hpp>
#include<memory>
#include"SingletonTexture.h"
#include "GameItems.h"
#include"Macros.h"
#include<string>

using std::string;
using std::unique_ptr;
using std::make_unique;

class Cards :
	public GameItems
{
public:
	Cards();
	Cards(IMG img);
	IMG getIMGType();
	~Cards();
	void show(sf::RenderWindow &window , sf::Vector2f position);
protected:

	unique_ptr<sf::Sprite> m_cardPic;
	 IMG m_cardType;

};

