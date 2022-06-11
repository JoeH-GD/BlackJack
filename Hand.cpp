#include "Hand.h"
#include "Card.h"

void Hand::getCard(Card* newCardPointer)
{
	cardPointers.push_back(newCardPointer);
}

int Hand::getTotalValue() const
{
	if (cardPointers.empty())
	{
		return 0;
	}

	if (cardPointers[0]->GetValue() == 0)
	{
		return 0;
	}

	int valueSum = 0;
	for (size_t i = 0; i < cardPointers.size(); i++)
	{
		valueSum += cardPointers[i]->GetValue();
		if (valueSum <= 10 && cardPointers[i]->GetValue() == 1) valueSum += cardPointers[i]->GetValue() + 10;
	}

	bool containsAce = false;
	for (size_t i =0; i < cardPointers.size(); ++i)
	{
		if (cardPointers[i]->GetValue() == Card::ACE)
		{
			containsAce = true;
		}
	}
	
	if (containsAce && valueSum <= 11)
	{
		valueSum += 10;
	}

	return valueSum;

}


void Hand::clear()
{
	for (size_t i = cardPointers.size()-1; i >=0; i--)
	{
		cardPointers.pop_back();
		
	}

	cardPointers[0] = nullptr;
}
