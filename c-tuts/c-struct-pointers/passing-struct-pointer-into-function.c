#include <stdio.h>


// POINTERS AND STRUCTS in C //

// passing pointers to structs into the printf functions
// passing a struct into a function whereby that function accesses 
// the structs members. 



// NOTE: Structs in C++ are public by default. C has no notion of 
// privacy. Also comment on differences to LISP/PYTHON
 


// STRUCTS


struct test
	{   //MEMBERS
		int firstval; 
		int secondval; 
			
	};

// FUNCTION PROTOTYPE

int struct_add (struct test structure, int user_addend);


int main (void)
{
	
	// Declare a struct
	
	
	
	struct test teststruct;


    // Create a pointer to the struct	

	struct test* ptest = &teststruct;
	
	
	teststruct.firstval  = 67;
	teststruct.secondval = 34;
	
	// You can use pointer deref here so you can access the
	// different members of a specific struct.  
	
	printf("This is a value from struct: %i\n", ptest->firstval);
	printf("This is a value from struct: %i\n", ptest->secondval);
	
	// Use the function that accepts a pointer to a struct...
	// which by default is the name of the struct object (Like arrays)
	// and increases one of its data members.
	
	printf("This is the result of your function: %i\n", (struct_add(teststruct, 10)));
	printf("The value above should be: 77\n"); 
	
	// Print WHERE the struct is living in memory. ie It's offset. 
	
	printf("This is ptest: %i\n", ptest);
}

// FUNCTION DEFINITIONS

int struct_add (struct test structure, int user_addend)
{   // take an int and add it to the struct member firstval. 
	
	// You cannot use the same symbol in the function definition 
	// as you used to specify the functions parameters. 
	
	
	int a = user_addend;
	
	// Maybe too verbose, but you get the idea..
	// return = structure.firstval + a; (?)
	
	int ret_val;
	
	ret_val = structure.firstval + a;
	
	return ret_val;
}
