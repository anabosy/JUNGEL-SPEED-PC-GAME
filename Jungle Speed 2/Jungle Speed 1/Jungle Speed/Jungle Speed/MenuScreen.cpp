#include "MenuScreen.h"
#include"SingletonTexture.h"
#include"Macros.h"


MenuScreen::MenuScreen()
{
	
	m_backgroundtexture->setTexture(SingletonTexture::instance().getTexture(MENU_BG).get());


	//==================================================================================
	


	// ================================================================================


	m_playbutton->setPosition(700, 250);


	// ================================================================================

	m_closebutton->setPosition(50, 250);

	// ================================================================================


	m_helpbutton->setPosition(380, 450);


	

	

}


MenuScreen::~MenuScreen()
{

}
void MenuScreen::run(sf::RenderWindow &window, int &screennum)
{
	window.setMouseCursorVisible(false);

	



	while (window.isOpen())
	{


		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				// window closed
			case sf::Event::Closed:
				window.close();
				break;

				// key pressed
			case sf::Event::KeyPressed:
				if (sf::Keyboard::Escape)
					window.close();
				break;
			case sf::Event::MouseButtonPressed:

				if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
					m_player->changeHand(false);
				break;

			case sf::Event::MouseButtonReleased:
				m_player->changeHand(true);
				break;
				// we don't process other types of events
			default:
				break;
			}
		}

		sf::Vector2f mouspos;
		mouspos.x = sf::Mouse::getPosition(window).x;
		mouspos.y = sf::Mouse::getPosition(window).y;

		if (m_playbutton->getGlobalBounds().contains(mouspos))
		{
			m_playbutton->setColor(sf::Color::Black);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
			{
				screennum += 2;
				break;
			}
		}
		else
		{
			m_playbutton->setColor(m_buttonColor);
		}
		if (m_closebutton->getGlobalBounds().contains(mouspos))
		{
			m_closebutton->setColor(sf::Color::Black);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
			{
				window.close();
				break;
			}
		}
		else
		{
			m_closebutton->setColor(m_buttonColor);
		}
		if (m_helpbutton->getGlobalBounds().contains(mouspos))
		{
			m_helpbutton->setColor(sf::Color::Black);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
			{
				screennum += 1;
				break;
			}
		}
		else
		{
			m_helpbutton->setColor(m_buttonColor);
		}


		//change the position of the player mouse ( hand ) 
		m_player->changeHandPosition(sf::Mouse::getPosition(window).x - 70.f, sf::Mouse::getPosition(window).y - 110.f);

		window.clear();
		window.draw(*m_backgroundtexture);
		
		window.draw(*m_playbutton);
		window.draw(*m_closebutton);
		window.draw(*m_helpbutton);
		window.draw(*m_player->getMousHand());

		window.display();
	}
}

