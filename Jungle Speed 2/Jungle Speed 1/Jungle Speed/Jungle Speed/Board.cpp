#include "Board.h"



Board::Board(int numOfcompPlayers)
{
	m_numOfcompPlayers = numOfcompPlayers;

	m_ClosedcardHape = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(HAPE_CLOSED_CARD));
	m_openCardheap = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(HAPE_OPEN_CARD));

	// ===================================================================================================
	m_Stick = make_unique<Stick>();

	// ===================================================================================================
	for (unsigned int i = 0; i < m_numOfcompPlayers; i++)
	{
		m_compPlayerVec.emplace_back(make_unique<ComputerPlayer>(i));
	}
	
	// ===================================================================================================

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_1));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_2));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_2));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_2));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_2));
	
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_3));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_3));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_1));
	
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_4));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_4));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_4));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_4));
	
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_5));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_5));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_5));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_5));
	
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_6));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_6));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_6));
	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_6));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_7));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_7));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_7));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_7));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_8));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_8));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_8));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_8));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_9));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_9));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_9));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_9));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_10));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_10));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_10));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_10));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_11));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_11));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_11));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_11));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_12));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_12));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_12));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_12));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_13));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_13));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_13));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_13));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_15));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_15));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_15));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_15));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_16));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_16));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_16));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_16));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_17));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_17));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_17));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_17));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_18));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_18));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_18));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_18));

	m_CardsVec.emplace_back(make_shared<Cards>(B_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(G_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(R_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(Y_TYPE_1));

	m_CardsVec.emplace_back(make_shared<Cards>(S_OUT_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(S_OUT_TYPE_1));
	m_CardsVec.emplace_back(make_shared<Cards>(S_OUT_TYPE_1));

	m_CardsVec.emplace_back(make_shared<Cards>(S_COLOR_TYPE_2));
	m_CardsVec.emplace_back(make_shared<Cards>(S_COLOR_TYPE_2));

	m_CardsVec.emplace_back(make_shared<Cards>(S_IN_TYPE_3));
	m_CardsVec.emplace_back(make_shared<Cards>(S_IN_TYPE_3));
	m_CardsVec.emplace_back(make_shared<Cards>(S_IN_TYPE_3));


	



}


Board::~Board()
{
}
void Board::gameController()
{

}
