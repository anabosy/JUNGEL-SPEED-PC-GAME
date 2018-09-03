#pragma once
#include "StatusScreen.h"
#include<SFML\Graphics.hpp>
class WinerScreen :
	public StatusScreen
{
public:
	WinerScreen();
	~WinerScreen();
	void run(sf::RenderWindow &window, int &screennum);

};

