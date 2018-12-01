#include "CardStack.h"

//constructor gets passed the amount of card decks that the stack should contain
CardStack::CardStack(int amountOfDecks){
	//generateStack(amountOfDecks);
}

CardStack::~CardStack(){
	//destructor
}

//this function shuffles the card stack
void CardStack::shuffle(){
	//shuffle the stack
}

//this function removes a card from the stack and returns that card
Card CardStack::getCard(){
	Card temp = _stack[0];
	_stack.erase(_stack.begin());
	return temp;
}

//this function adds the card passed by the argument to the back of the stac,
void CardStack::addCard(Card newCard){
	_stack.push_back(newCard);
}

//this function generates a card stack, containing an amount of decks as specified by the argument 
void CardStack::generateStack(int amountOfDecks){
	int generated = 0;
	while (generated < amountOfDecks) {
		for (int suit = 0; suit < 4; suit++) {
			for (int val = 1; val < 14; val++) {
				_stack.push_back(Card(static_cast<CardSuit>(suit), static_cast<CardValue>(val)));
			}
		}
		generated++;
	}
}