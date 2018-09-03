#pragma once
#include<iostream>
#include<memory>
#include<vector>
#include"Cards.h"
#include"Stick.h"
#include"UserPlayer.h"
#include"ComputerPlayer.h"

using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_shared;
using std::make_unique;

class Board
{
public:
	Board(int numOfcompPlayers = 3);
	~Board();
	void gameController();
private:

	vector<shared_ptr<Cards>> m_CardsVec;

	vector<vector<shared_ptr<Cards>>> m_shuffledCardVec;

	unique_ptr<Stick> m_Stick;

	vector<unique_ptr<ComputerPlayer>> m_compPlayerVec;

	unique_ptr<sf::Sprite> m_ClosedcardHape;

	unique_ptr<sf::Sprite> m_openCardheap;

	int m_numOfcompPlayers;
	
};

