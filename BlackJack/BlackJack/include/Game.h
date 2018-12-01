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

	// Subsequently, the game deals two cards to each hand and stores it in private vector 'Hands'
	void dealHands();

	// The game then itirates through hands (dealer last)
	void iterateThroughHands();
	
	// In this itiration, the function playHand is called which asks player what they want to do and deals ectra cards 
	void playHand();

	~Game();
private:

	// This is a vector containing all hands (each hand containing two cards and a reference to player)
	std::vector<Hand> hands;
	// This vector has a fixed size and in this vecotr we could indicate where slots of the table, player has betted on
	std::vector<Player> tableSlots;
};

