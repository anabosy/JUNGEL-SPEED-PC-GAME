#pragma once
#include<SFML\Graphics.hpp>

#include "Screen.h"



class MenuScreen :
	public Screen
{
public:
	MenuScreen();
	~MenuScreen();
	void run(sf::RenderWindow &window, int &screennum);
private:

	
};

