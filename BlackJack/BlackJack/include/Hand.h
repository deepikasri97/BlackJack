#pragma once
#include <string>
#include <vector>
#include "Card.h"

class Hand
{
public:
	Hand();
	virtual ~Hand();
	
	//adds a card to the hand
	void Add(Card* pCard);
	
	//clears hand of all cards
	void Clear();
	
	//gets hand total value
	int GetTotal() const;
	
private:
	vector<Card*> m_Cards;
	
};

