#ifndef _HAND_H_
#define _HAND_H_

#include "Card.h"

namespace GameLocic{
class Hand
{
private:
	Card* card;
public:
	void Take(Card& card); // ����� ����� � ������
	
};

}

#endif // !_HAND_H_
