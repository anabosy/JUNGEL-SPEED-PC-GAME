#pragma once
#include "GameItems.h"
#include<iostream>
#include<memory>
#include<vector>
#include"Cards.h"
#include"Stick.h"

using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_shared;
using std::make_unique;

class Stick :
	public GameItems
{
public:
	Stick();
	~Stick();
	void setUnderTheStick(shared_ptr<Cards> card);
private:
	vector<shared_ptr<Cards>> m_underStakeCaards;

	unique_ptr<sf::Sprite> m_stickImg;

	unique_ptr<sf::Sprite> m_openCardHeap;
};

