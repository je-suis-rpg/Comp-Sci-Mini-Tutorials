// Wiz.cpp (Wizard Implementation File.)

#include "wiz-with-p.h"

// This needs be included as it contains the
// class definition. Just imagine it being cut and pasted at the
// top there. 

using namespace std;

void Wizard::fight()
{
  std::cout << "recieved fighting command\n" << std::ends;
  std::cout << "Do I have enough points?\n" << std::ends;

  // Obervation to note - an object can refer to it's own
  // members. Could I refer to the pointer too - rather than
  // it's identifier? 

  if(mMagicPoints > 4) //Turns out this is correct implementation
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







