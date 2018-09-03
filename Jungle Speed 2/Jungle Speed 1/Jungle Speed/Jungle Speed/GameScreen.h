#pragma once
#include<SFML\Graphics.hpp>
#include "Screen.h"
#include"Board.h"

class GameScreen :
	public Screen
{
public:
	GameScreen();
	~GameScreen();
	void run(sf::RenderWindow &window, int &screennum);
	void startGame();

private:

	unique_ptr< Board > m_MyBoard;
};

