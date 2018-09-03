#include "ComputerPlayer.h"



ComputerPlayer::ComputerPlayer()
{

}


ComputerPlayer::~ComputerPlayer()
{
}
ComputerPlayer::ComputerPlayer(int playerNumber)
{
	m_playerNumber = playerNumber;
}
int ComputerPlayer::getPlayerNum()
{
	return m_playerNumber;
}
