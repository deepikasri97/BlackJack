#pragma once

#include "Card.h"
#include <vector>

class CardStack{
	public:
		CardStack(int amountOfDecks);
		~CardStack();

		void shuffle();
		Card getCard();
		void addCard(Card newCard);

	private:
		void generateStack(int amountOfDecks);

		std::vector<Card> _stack;
};

