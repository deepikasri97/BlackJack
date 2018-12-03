#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>


class Player
{
public:
	Player(const string& name= " ");
	virtual ~Player();
	
	//returns whether the player wants to hit with another card
	virtual bool IsHitting() const = 0;
	
	//returns whether player has busted - has total greater than 21
	void IsBusted() const;
	 
	//announces if the player wins
	void Win() const;
	
	//announces if the player loses
	void Lose() const;
	
	//announces if the player pushes
	void push() const;
	
	
	
private:
	string Name;
};

