#include "Hand.h"
#include "Card.h"


//constructor
Hand::Hand()
{
  m_Cards.reserve(5);
}

//destructor
Hand::~Hand()
{
  Clear();
}

/*
* public functions
*/

void Hand::Add(Card* pCard)
{
  m_Cards.push_back(pCard);
}

//this function clears the hand of all cards
void Hand::Clear()
{
  //iterate through vector, freeing all memory 
  vector<Card*>::iterator iter = m_Cards.begin();
  for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
  {
    delete *iter;
    *iter = 0;
  }
  
  //clear vector of pointers
  m_Cards.Clear();
  
  //this functions gets the hand total value
  int Hand::GetTotal() const
  {
    // if no cards are in hand, return 0
    if (m_Cards.empty())
    {
      return 0;
    }
    
    //if a first card has a value of 0, then card is face down; returns 0
    if (m_Cards[0] -> getValue() == 0)
    {
      return 0;
    }

    //add up card values, treats each ace as 1
    int total = 0;
    vector<Card*>::const_iterator iter;
    for (iter = m_Cards.begin(); iter!= m_Cards.end(); ++iter)
    {
      total += (*iter) -> getValue();
    }
    
    //determine if hand contains ace
    bool containsAce = false;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
      if ((*iter) -> getValue() == Card::ace)
      {
        containsAce = true;
      }
    }
    
    //if hand contains ace and total is low , treat ace as 11
    if (containsAce && total <= 11)
    {
      // add only 10 since we have already added 1 for ace 
      total += 10;
    }
    
    return total;
    
  }
    
   
    
