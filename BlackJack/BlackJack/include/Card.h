#pragma once

//enum for the 4 different card suits
enum CardSuit{diamonds, clubs, hearts, spades};

//enum for the different card values, start counting at value 1, so a static cast can be used to acquire numeric card values
enum CardValue{ace = 1, two, three, four, five, six, seven, eight, nine, jack, queen, king};

class Card{
	public:
		Card(CardSuit suit, CardValue value);
		~Card();

		CardSuit getSuit();
		CardValue getValue();

	private:
		const CardSuit _suit;
		const CardValue _value;
};

