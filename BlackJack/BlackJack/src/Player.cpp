#include "Player.h"
#include <string>


//constructor 
Player::Player(const string& name):
      Player(name)
  
{
}

//destructor
Player::~Player()
{
}

/*
* public functions
*/

//this function checks whether the player hits for another card
bool Player:: IsHitting() const
{
  std::cout << Name << "Do you Want a hit ? (Y/N): ";
  char response;
  std::cin >> response;
  return (response == 'y' || response == 'Y');
 }
 
 //this function calls when the player wins the game
 void Player::Win() const
  {
    std::cout << Name << "Wins \n";
  }
            
 //this functions calls when the player loses the game         
 void Player::Lose() const
 {
   std::cout << Name << "loses \n";
 }
 
 //this function calls when the player pushes
 void Player::push() const
 {
   std::cout << Name << "pushes\n";
 }
 
 //this function checks whether the player is busted or not
 void Player::IsBusted() const
 {
   return (GetTotal()>21);
 }
            
 
            
          
