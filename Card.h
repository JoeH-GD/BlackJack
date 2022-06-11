#pragma once

class Card {

public:
	enum Suit
	{
		SPADES,
		HEARTS,
		DIAMONDS,
		CLUBS
	};

	enum Points
	{
		ACE = 1,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		KING,
		QUEEN,
		JACK

	};
	//constructor to check the get value func
	Card();

	void Flip();
	int GetValue()const;

private:


	bool isFaceUp = false;

	Points mCurrentCardPoints;
	Suit mCurrentSuit;




};

