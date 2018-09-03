#pragma once
#include<SFML\Graphics.hpp>
#include "StatusScreen.h"
class LoserScreen :
	public StatusScreen
{
public:
	LoserScreen();
	~LoserScreen();
	void run(sf::RenderWindow &window, int &screennum);
};

