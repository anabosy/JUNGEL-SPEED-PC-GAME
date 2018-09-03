#pragma once
#include<SFML\Graphics.hpp>
#include<vector>
#include<memory>

#include"Screen.h"
#include"MenuScreen.h"
#include"CloseScreen.h"
#include"StatusScreen.h"
#include"GameScreen.h"
#include"HelpScreen.h"


using std::unique_ptr;
using std::make_unique;
using std::vector;

class Controller
{
public:
	Controller();
	~Controller();
	void run();
private:

	vector<unique_ptr<Screen>> m_screens;
	int m_NextScreen;

};

