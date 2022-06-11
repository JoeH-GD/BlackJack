#include "Card.h"

Card::Card(){

}

void Card::Flip() {

	!isFaceUp ? isFaceUp = true : isFaceUp = false;
}

int Card::GetValue() const
{
	if(isFaceUp)
	{
		if (mCurrentCardPoints >= ACE && mCurrentCardPoints < KING) return mCurrentCardPoints;
		else return 10;
	}
    
}
