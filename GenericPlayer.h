#pragma once
#include <string>
#include "Hand.h"

class GenericPlayer : public Hand {

private:
	std::string name;

public:

	virtual bool IsHitting() = 0;
	std::string GetName();
	bool isBusted();

	void Bust();

};
