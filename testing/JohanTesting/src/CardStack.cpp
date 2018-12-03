#include "CardStack.h"

/*
 * constructor and destructor
 */

//constructor gets passed the amount of card decks that the stack should contain
CardStack::CardStack(int amountOfDecks){
	generateStack(amountOfDecks);
}

//destructor
CardStack::~CardStack(){}

/*
 * public functions
 */

//this function shuffles the card stack
void CardStack::shuffle(){
	std::random_shuffle(_stack.begin(), _stack.end());		//shuffle the stack
}

//this function removes a card from the stack and returns that card
std::shared_ptr<Card> CardStack::getCard(){
	std::shared_ptr<Card> temp = std::move(_stack.front());	//move the ptr here, so the top entry of the stack can be deleted
	_stack.erase(_stack.begin());							//delete the top entry of the stack (which is now a nullptr)
	return std::move(temp);									//move the shared ptr to the caller
}

//this function adds the card passed by the argument to the back of the stac,
void CardStack::addCard(std::shared_ptr<Card> newCard){
	_stack.push_back(std::move(newCard));		//move the card back into the vector
}

/*
 * private functions
 */

//this function generates one card deck, which can be accessed by shared pointers
std::vector<std::shared_ptr<Card>> CardStack::generateDeck() {
	std::vector<std::shared_ptr<Card>> deck;
	for (int suit = 0; suit < 4; suit++) {		//iterate over the different suit types
		for (int val = 1; val < 14; val++) {	//iterate over the different values
			std::shared_ptr<Card> p = std::make_shared<Card>(static_cast<CardSuit>(suit), static_cast<CardValue>(val));
			deck.push_back(p);
		}
	}
	return std::move(deck);
}

//this function generates a card stack, containing an amount of decks as specified by the argument 
void CardStack::generateStack(int amountOfDecks){
	//generate one deck of cards
	std::vector<std::shared_ptr<Card>> deck = generateDeck();
	
	int generated = 0;
	while (generated < amountOfDecks) {	//generate an amount of decks as specified by the argument
		for (auto i : deck) {			//iterate over _deck, access by value, the type of i is shared_ptr<Card>
			_stack.push_back(i);		//push a copy of the pointer on the card stack
		}
		generated++;
	}
}