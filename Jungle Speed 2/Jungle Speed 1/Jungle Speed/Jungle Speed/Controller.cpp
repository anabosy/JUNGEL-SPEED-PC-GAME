#include "Controller.h"
#include"Macros.h"


Controller::Controller()
{

	m_screens.push_back(make_unique<MenuScreen>());
	m_screens.push_back(make_unique<HelpScreen>());
	m_screens.push_back(make_unique<GameScreen>());
	m_screens.push_back(make_unique<StatusScreen>());
	m_screens.push_back(make_unique<CloseScreen>());
	m_NextScreen = 0;
}


Controller::~Controller()
{
}
void Controller::run()
{
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HIGHT), "Jungle Speed", sf::Style::Close | sf::Style::Resize);

	while (true)
	{
		m_NextScreen = m_NextScreen % 5;
		m_screens[m_NextScreen]->run(window, m_NextScreen);
	}


}
