#pragma once
#include <vector>
#include "Hand.h"
#include "Player.h"

class Game
{
public:
	// Constructer deals two hard to dealers hand?
	// Create object denk and then shuffels?
	Game();
	
	// when game starts, the player should indicate how many hand they want to play
	// Ask itirate through all players and ask how many hands they watn to play
	void setTableslots();

	// Subsequently, the game deals two cards to each hand and stores it in private vector 'hands'
	void dealHands();
	
	// In this itiration, the function playHands is called which asks player what they want to do and deals ectra cards 
	void playHands();

	~Game();
private:

	// This is a vector containing all hands (each hand containing two cards and a reference to player)
	std::vector<Hand> hands;
	// This vector has a fixed size and in this vector player could indicate which slots he wants to bet
	std::vector<Player> tableSlots;
};

