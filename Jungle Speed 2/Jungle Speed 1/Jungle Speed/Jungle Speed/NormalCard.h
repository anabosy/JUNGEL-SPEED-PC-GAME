#pragma once
#include "Cards.h"
class NormalCard :
	public Cards
{
public:
	NormalCard(string path, string cardName,sf::Color color);
	NormalCard();

	~NormalCard();
private:
	 COLOR m_cardColor;
};

