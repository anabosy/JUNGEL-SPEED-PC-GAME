#include "Player.h"



Player::Player()
{
	m_mousHand = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(OPEN_HAND));
}


Player::~Player()
{

}

unique_ptr<sf::Sprite>& Player::getMousHand()
{
	return m_mousHand;
}
void Player::changeHand(bool status)
{
	if (!status)
	{
		m_mousHand->setTexture(*SingletonTexture::instance().getTexture(CLOSED_HAND));

	}
	else
	{
		m_mousHand->setTexture(*SingletonTexture::instance().getTexture(OPEN_HAND));
	}
}
void Player::changeHandPosition(float x, float y)
{
	m_mousHand->setPosition(x, y);
}
