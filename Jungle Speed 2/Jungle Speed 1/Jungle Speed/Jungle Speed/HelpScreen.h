#pragma once
#include<SFML\Graphics.hpp>
#include "Screen.h"
class HelpScreen :
	public Screen
{
public:
	HelpScreen();
	~HelpScreen();
	void run(sf::RenderWindow &window, int &screennum);

private:

};

