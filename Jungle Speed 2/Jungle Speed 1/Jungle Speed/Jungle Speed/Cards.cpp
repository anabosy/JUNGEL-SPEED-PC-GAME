#include "Cards.h"



Cards::Cards()
{

}

Cards::Cards(IMG img)
{
	m_cardPic = make_unique<sf::Sprite>(*SingletonTexture::instance().getTexture(img));
	m_cardType = img;
}

Cards::~Cards()
{
}

void Cards::show(sf::RenderWindow &window, sf::Vector2f position)
{

}

bool operator==(Cards& c1, Cards& c2)
{
	return c1.getIMGType() == c2.getIMGType();
}

IMG Cards::getIMGType()
{
	return m_cardType;
}