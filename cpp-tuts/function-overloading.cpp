#include <iostream>
#include <cmath>

using namespace std;

// To Contonue - continue with function 
// overloading. 

// Function Overloading is the ability to define two 
// functions that have the same name but have different 
// parameter lists (and therefore function signitures...) 

// We can also then use a previous declared function as a 
// function helper in the same functin. (Similar to a helper function
// in lisp.. )


// Function Prototypes - this just demonstrates the ability 
// that we can print out coordinate points in different ways. 

void PrintPoint(float x, float y, float z);
void PrintPoint(float p[3]);


int main (void)
{
	PrintPoint(1.0f, 2.0f, 3.0f);
	PrintPoint(-5.0f, 3.5f, 1.2f);
	
	float point1[3] = {-12.0f, 5.6f, 8.9f};
	
	//use array version 
	
	PrintPoint(point1);
}

//Function Declarations

void PrintPoint(float x, float y, float z)
{
	cout << "<" << x << "," << y << ", " << z << ">" << ends;
}

void PrintPoint(float p[3])
{
	
	PrintPoint(p[0], p[1], p[3]);
}

	
