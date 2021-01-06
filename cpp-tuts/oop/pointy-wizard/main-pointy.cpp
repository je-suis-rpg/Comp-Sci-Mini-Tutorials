// Main-pointycpp (This is the client file that uses the objects)

#include <iostream>
#include <string>
#include "wiz-pointy.h"


int main (void)
{
  // Instantiate an instance of the wizard class
  // But this time we are creating a pointer that POINTS to
  // the new instance, rather than having us copy it onto the
  // heap / stack (which one?) when we are running it. 

  Wizard*  pwiz0 = new Wizard;

  // Set the magic points to something ..
  // but this time 

  pwiz0->setMagicPoints(2);

  // See if we can cast a spell...I don't think
  // we have enough points to be fair. The implementation
  // suggests we need more than 4.

  pwiz0->castSpell();

  pwiz0->talk();

  pwiz0->fight();

  std::cout << "You have successfully used the wizard class\n" << std::ends;

  pwiz0->setMagicPoints(40);

  pwiz0->castSpell();
}



