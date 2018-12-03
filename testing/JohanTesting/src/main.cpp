// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "main.h"
#include "Game.h"
#include "Card.h"
#include "CardStack.h"
#include <iostream>

int main()
{
    std::cout << "Hello Everyone!\n"; 

	Card c1 = Card(static_cast<CardSuit>(0), static_cast<CardValue>(0));
	std::cout << c1.getSuit() << std::endl;
	std::cout << c1.getValue() << std::endl;

	//declare vector for cards
	std::vector<Card> stackje;

	//generate a deck of cards
	for (int suit = 0; suit < 4; suit++) {
		for (int val = 1; val < 14; val++) {
			stackje.push_back(Card(static_cast<CardSuit>(suit), static_cast<CardValue>(val)));
		}
	}

	//for (int i = 0; i < 52; i++) {
	//	std::cout << stackje[i].getValue() << " " << stackje[i].getSuit << std::endl;
	//}

	std::cout << stackje.size() << std::endl;

	//create a card stack from the CardStack class
	CardStack cs = CardStack(6);

	CardPtr kaart1 = cs.getCard();	//a ptr is being moved from getCard() to here
	CardPtr kaart2 = cs.getCard();

	cs.shuffle(); //shuffle the card stack

	CardPtr kaart3 = cs.getCard();	//deck is now shuffled

	std::cout << "kaart1, suit: " << kaart1->getSuit() << ", value: " << kaart1->getValue() << std::endl;
	std::cout << "kaart2, suit: " << kaart2->getSuit() << ", value: " << kaart2->getValue() << std::endl;
	std::cout << "kaart3, suit: " << kaart3->getSuit() << ", value: " << kaart3->getValue() << std::endl;

	cs.addCard(kaart1);				//pass a copy of kaart1
	cs.addCard(std::move(kaart2));	//move kaart2, this is better
	//kaart1 now still is a valid pointer
	//kaart2 now is a nullptr

	std::cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
