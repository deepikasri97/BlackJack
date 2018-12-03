#include "Player.h"


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
  cout << Name << "Do you Want a hit ? (Y/N): ";
  char response;
  cin >> response;
  return (response == "y' || response == 'Y');
 }
 
 //this function calls when the player wins the game
 void Player::Win() const
  {
    cout << Name << "Wins \n";
  }
            
 //this functions calls when the player loses the game         
 void Player::Lose() const
 {
   cout << Name << "loses \n";
 }
 
 //this function calls when the player pushes
 void Player::push() const
 {
   cout << Name << "pushes\n";
 }
 
 //this function checks whether the player is busted or not
 void Player::IsBusted() const
 {
   return (GetTotal()>21);
 }
            
 //this function calls when players busts
 void Player::Bust() const
  {
    cout << Name << "Busts\n";
  }
            
          
