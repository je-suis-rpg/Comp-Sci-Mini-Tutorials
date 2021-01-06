// Game Stats
// Decalring and Initializing vars

//  Most of this can be created using the C functions 
//  too which is really easy to see how that can happen also


#include <iostream>
using namespace std;

int main()
{
	//Initialize vars
	
	int score;
	double distance;
	char playAgain;
	bool sheildsUp;
	
	short lives, aliensKilled;
	
	//Bind them to some variables
	
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	sheildsUp = true;
	lives = 3;
	
	aliensKilled = 10;
	
	double engineTemp = 6572.89;
	
	//It's these here where LISP generating C++  code
	//would be awesome. Do I really need to type all this 
	//out! 
	//Print out all variables to screen
	
	cout << "\nscore: " << score << ends;
	cout << "distance:" << distance << ends;
	cout << "playAgain: " << playAgain << ends;
	cout << "lives: " << lives << ends;
	cout << "aliensKilled: " << engineTemp << ends;
	cout << "enginesTemp: " << engineTemp << ends;
	
	int fuel;
	
	//Ask for how much fuel
	
	cout << "How much fuel ";
	
	//Accept input asking for how much fuel
	
	cin >> fuel;
	
	cout << "feul: " << fuel << ends;
	
	//redefine a typedef. To save typing...
	
	typedef unsigned short int ushort;
	
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << ends;
	
	return 0;
}

	
