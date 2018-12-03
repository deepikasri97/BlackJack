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
		std::vector<std::shared_ptr<Card>> generateDeck();
		void generateStack(int amountOfDecks);

		//on init, _stack will contain 52 unique copies of std::shared_ptr<Card>>
		//and an x copies of each of those std::shared_ptr<Card>> when more decks are added
		std::vector<std::shared_ptr<Card>> _stack;
};

