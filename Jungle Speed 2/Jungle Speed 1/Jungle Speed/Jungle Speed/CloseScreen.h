#pragma once
#include<SFML\Graphics.hpp>
#include "Screen.h"
class CloseScreen :
	public Screen
{
public:
	CloseScreen();
	~CloseScreen();
	void run(sf::RenderWindow &window, int &screennum);
};

