#include <stdio.h>

// passing pointers to structs into functions 
// 1) define a struct
// 2) Create a pointer the struct
// 3) Access the a struct member by passing the pointer to the 
//    to struct member, rather than passing by value. 



int main (void)
{
	
	// Define a struct
	
	struct test
	{   //Declare its members...
		int firstval; 
		int secondval; 
			
	};
	
	struct test teststruct;


    

	struct test* ptest = &teststruct;
	
	ptest->firstval  = 67;
	ptest->secondval = 34;
	
	// You can use the pointer notation here too. 
	
	printf("This is a value from struct: %i\n", ptest->firstval);
	printf("This is a value from struct: %i\n", ptest->secondval);
}

