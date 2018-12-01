// Class implementations
#include "Game.h"
#include <iostream>


Game::Game()
{
	// Add hand of dealer in vector 'Hands' when constructer is called?
}


Game::~Game()
{
	
}

// when game starts, the player should indicate how many hands they want to play
// Itirate through all players and ask how many hands they want to play
void Game::setTableslots() 
{
	// Fill tableSlots vector with players example { Dealer, Player 1, Player 2, Player 2, Player 1 etc }
}

void Game::dealHands()
{
	// itirate though tableSlots backwards
	//		use getTopTwoCards() in class 'Deck'
	//		construct object 'hand' by passing trough player and cards
	//		Push_back hand into std::vector 'Hands'
}

void Game::playHands()
{
	// itirate backwards through std::vector 'hands'
	//		Given player options: new card and stop
	//		If new card: getTopCard() in class 'Deck'
	//		If score exceeds 21: terminate
	//		Terminate hand
}


