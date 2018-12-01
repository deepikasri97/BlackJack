#include "Card.h"


Card::Card(CardSuit suit, CardValue value) : _suit(suit), _value(value){
	//constructor
}

Card::~Card(){
	//destructor
}

CardSuit Card::getSuit(){
	return _suit;
}

CardValue Card::getValue(){
	return _value;
}
