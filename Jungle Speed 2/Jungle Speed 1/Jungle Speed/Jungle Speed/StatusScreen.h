#pragma once
#include<SFML\Graphics.hpp>
#include "Screen.h"
class StatusScreen :
	public Screen
{
public:
	StatusScreen();
	~StatusScreen();
	void virtual run(sf::RenderWindow &window, int &screennum);
private:
	
};

