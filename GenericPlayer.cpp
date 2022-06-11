
#include <iostream>
#include "GenericPlayer.h"

std::string GenericPlayer::GetName()
{
	return name;
}

bool GenericPlayer::isBusted()
{
	bool isBusted = false;

	if (getTotalValue() >= 22) isBusted = true;
	return isBusted;
}

void GenericPlayer::Bust()
{
	std::cout << GetName() << ", you are busted! Total score: " << getTotalValue();
}
