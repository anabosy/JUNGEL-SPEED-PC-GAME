#pragma once
#include "Player.h"
class ComputerPlayer :
	public Player
{
public:
	ComputerPlayer();
	ComputerPlayer(int playerNumber);
	~ComputerPlayer();
	int getPlayerNum();


private:
	int m_playerNumber;
};

