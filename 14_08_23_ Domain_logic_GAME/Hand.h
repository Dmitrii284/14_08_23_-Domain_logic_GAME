#pragma once
#include "Card.h"

namespace GameLocic{
class Hand
{
private:
	Card* card;
public:
	void Take(Card& card); // взять карту с колоды
	
};

}