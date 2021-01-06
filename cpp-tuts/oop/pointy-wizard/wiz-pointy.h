// wiz-pointy.h (Wizard Header File)

// These header files just contain declarations for
// classes and library functions. Implementations belong in
// cpp files. Ideally of same name. 

#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>


class Wizard
{
public:
  //Methods
  void fight();
  void talk();
  void castSpell();

  // These functions will be part of the class interface
  void setArmour(int armour);
  void setMagicPoints(int magic_points);
  std::string getName();
    

  //Experimenting with making
  //the following data members private
  
  //Data members
private:
  std::string mName;
  int mHitPoints;
  int mMagicPoints;
  int mArmour;
};


#endif // WIZARD_H

