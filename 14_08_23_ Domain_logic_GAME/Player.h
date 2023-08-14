#pragma once
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