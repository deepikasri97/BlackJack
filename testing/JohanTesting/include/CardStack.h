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
		CardPtr getCard();
		void addCard(CardPtr newCard);

	private:
		std::vector<CardPtr> generateDeck();
		void generateStack(int amountOfDecks);

		//on init, _stack will contain 52 unique copies of std::shared_ptr<Card>>
		//and an x copies of each of those std::shared_ptr<Card>> when more decks are added
		std::vector<CardPtr> _stack;
};

