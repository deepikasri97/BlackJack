// Class implementations
#include "Game.h"
#include <iostream>


Game::Game()
{
	// Add hand of dealer in vector 'Hands' when constructer is called
}


Game::~Game()
{
	
}

void Game::playHand()
{
	// Ask players questions
	// Take card out of deck and add cards to hand
	// Terminate hand
}

void Game::iterateThroughHands()
{
	for (Hand data : hands)
		std::cout << "Iterating through hand" << std::endl;
}

