#include "Card.h"

/*
 * constructor and destructor
 */

//constructor
Card::Card(CardSuit suit, CardValue value) : _suit(suit), _value(value){}

//destructor
Card::~Card(){}

/*
 * public functions
 */

//this function returns the suit of the card
CardSuit Card::getSuit(){
	return _suit;
}

//this function returns the value of the card
CardValue Card::getValue(){
	return _value;
}
