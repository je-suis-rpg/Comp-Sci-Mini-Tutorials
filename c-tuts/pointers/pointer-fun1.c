#include <stdio.h>

// POINTERS AND ADDRESSES (&) IN C

int main (void) 
{
	// Declare an int. Bind the int.
	
	int a = 7;
	
	// Set a pointer to the addressls of int.
	
	int* pa = &a;
	
	// PRINT VALUES ///////////////
	
	// Print out the address of a. Note the 'x'.

	printf("This is the address of a: %x\n", pa);
	
	// Print a (ie the int) by indirection
	
	printf("This is a, by indirection: %d\n", *pa);
}

