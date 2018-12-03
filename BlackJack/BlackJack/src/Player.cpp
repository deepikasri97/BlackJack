#include "Player.h"



Player::Player(const string& name):
Player(name)
  
{
}


Player::~Player()
{
}

bool Player:: IsHitting() const
{
  cout << Name << "Do you Want a hit ? (Y/N): ";
  char response;
  cin >> response;
  return (response == "y' || response == 'Y');
 }
 
 void Player::Lose() const
 {
   cout << Name << "loses \n";
 }
       
 void Player::push() const
 {
   cout << Name << "pushes\n";
 }
          
 void Player::IsBusted()const
 {
   return (GetTotal()>21);
 }
            
            
            
          
