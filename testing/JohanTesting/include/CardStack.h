#pragma once

#include <vector>
#include <memory>
#include <algorithm> //includes std::random_shuffle()
#include "Card.h"

class CardStack{
	public:
		CardStack(int amountOfDecks);
		~CardStack();

		void shuffle();
		std::shared_ptr<Card> getCard();
		void addCard(std::shared_ptr<Card> newCard);

	private:
		void generateDeck();
		void generateStack(int amountOfDecks);

		std::vector<std::shared_ptr<Card>> _deck;	//will contain 52 card pointers
		std::vector<std::shared_ptr<Card>> _stack;	//will contain x copies of the shared_ptrs in _deck, and pass them around in the program
};

