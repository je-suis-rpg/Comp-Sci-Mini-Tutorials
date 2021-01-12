// Multiple_return_values.cpp ////////


// RETURNING MULTIPLE VALUES USING POINTERS


// Sometimes you need to return more than one value 
// from a function. You can do this via 1) Pointers and
// 2) referencing. 

// USING POINTERS ////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>

// Define function

void GetRandomCoords(int* outX, int* outY)
{
	// Generate a random pair of co-ordinates
	
	*outX = rand() % 801;
	*outY = rand() % 601;
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
	
	// Call function that takes pointers as parameters
	
	GetRandomCoords(&x, &y);
	
	
	// REMEMBER THIS:
	
	// 1) int var_1 = 8;
	// 2) int* pvar_1 = &var_1;
	// 3) *pvar_1 = 9;
	
	// This is what is happening in this function...
	
	// 1) int* outX gets bound to &x (which is line 2 above)
	// 2) By dereferancing -> *outX = &x;
	// 3) In the process of putting the function on the stack
	//    C++ has bound the address of x to OutX, which as we know
	//    is a dereferenced pointer. 
	// 4) Question: The same as *&x? 
	
	// Print new coordinates
	
	printf("New X: %i New Y: %i\n", x, y);
}

	
	
