#pragma once
#include<SFML\Graphics.hpp>
#include "GameItems.h"
#include"SingletonTexture.h"
#include<memory>

using std::unique_ptr;
using std::make_unique;
class Player :
	public GameItems
{
public:
	Player();
	~Player();
	unique_ptr<sf::Sprite>& getMousHand();

	void changeHand(bool status); // if false open hand  if true is close

	void changeHandPosition(float x, float y);

private:
	unique_ptr<sf::Sprite> m_mousHand; 
};

