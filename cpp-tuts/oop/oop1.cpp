// oop1.cpp

// File to experiment with some OOP concepts

// Using the book C++ for games programming.
// This code simply declares a wizard class and
// the client code then simply prints out some
// stuff 

#include <iostream>
#include <cmath>

// Class definition of a wizard

class Wizard
{
public:
  //Methods
  void fight();
  void talk();
  void castSpell();

  //Data members

  std::string mName;
  int mHitPoints;
  int mMagicPoints;
  int mArmour;
};


//Implementation of the methods above. 

void Wizard::fight()
{
  std::cout << "recieved fighting command\n" << std::ends;
  std::cout << "Do I have enough points?\n" << std::ends;

  // Obervation to note - an object can refer to it's own
  // members. Could I refer to the pointer too - rather than
  // it's identifier? 

  if(mMagicPoints > 4)
    {
      std::cout << "I'm attacking! Wish me luck!\n" << std::ends;
    }
  else
    {
      std::cout << "Not enough points I'm afraid" << std::ends;
    }
}

void Wizard::talk()
{
  std::cout << "fighting-talk-init\n" << std::ends;
}

void Wizard::castSpell()
{
  std::cout << "I have cast a spell, ha ha\n" << std::ends;
}

//Then lets use this code that we have made

int main (void)
{
  // Instantiate an instance of the wizard class

  Wizard wiz0;

  // Set the magic points to something .. 

  wiz0.mMagicPoints = 2;

  wiz0.castSpell();

  wiz0.talk();

  wiz0.fight();

  std::cout << "You have successfully used the wizard class\n" << std::ends;

  wiz0.mMagicPoints = 40;

  wiz0.castSpell();
}

 
