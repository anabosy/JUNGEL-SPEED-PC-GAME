#include "Stick.h"



Stick::Stick()
{
	m_stickImg = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(STICK));

	m_openCardHeap = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(HAPE_OPEN_CARD));
}


Stick::~Stick()
{
}

void Stick::setUnderTheStick(shared_ptr<Cards> card)
{
	m_underStakeCaards.emplace_back(card);
}
