#ifndef _PLAYER_H_
#define _PLAYER_H_


#include"Rules.h"
#include"Hand.h"
#include"Field.h"
#include<map>


namespace GameLocic {

	class Player
	{
	private:		
		Hand* hand;
		Field* field;
	public:
		void Walk(Hand& hand);
	};
}

#endif // !_PLAYER_H_