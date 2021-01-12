// Multiple_return_values.cpp ////////


// RETURNING MULTIPLE VALUES USING REFERENCES


// Sometimes you need to return more than one value 
// from a function. You can do this via 1) Pointers and
// 2) referencing. 

// USING REFERENCES ////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>

// Define function - this time instead of pointers,
// use refs

void GetRandomCoords(int& outX, int& outY)
{
	// Generate a random pair of co-ordinates
	
	outX = rand() % 801;
	outY = rand() % 601;
}


int main (void)
{
	// Seed a random number generator with a function 
	// What would this function do?
	srand(time(0));
	
	// Initialise two variables that will (eventually) contain 
	// random generated co-ordinates
	
	int x = 0;
	int y = 0;
	
	// Output before x and y 
	
	printf("X: %i Y: %i\n", x, y);
	
	
	
	GetRandomCoords(x, y);
	
	
	// REMEMBER THIS:
	
	// int& outX = x ie. another way of accessing x
	// Then outX is changed, which, as we know, then changes
	// x itself. Which is what we wanted. :-) 
	
	
	
	// Print new coordinates 
	
	printf("New X: %i New Y: %i\n", x, y);
}

	
	
