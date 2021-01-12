#include <stdio.h>

// PROGRAM DEMONSTRATING REFERENCES ///////////

// References are aliases to variables


int main (void)
{
	// Create some variables
	
	int value_one = 3;
	
	int value_two = 456;
	
	// Can you guess what is going to happen
	// here ;-)
	
	char unsigned int_over = 255;
	
	// Now create some references...
	
	int& refvalue_one = value_one;
	
	int& refvalue_two = value_two;
	
	char unsigned& refint_over = int_over;
	
	 // Now let us use these in anger.....
	 
	 
	 printf("Value One accessed via ref: %i\n", refvalue_one);
	 printf("Value Two accessed via ref: %i\n", refvalue_two);
	 
	 // Do something silly...
	 // What will the compiler do?...
	 
	 refint_over += 1;  

	// print ret int iver...what we will expect to see here? 
	
	printf("Value of refint_over: %i\n", refint_over);
}
 
