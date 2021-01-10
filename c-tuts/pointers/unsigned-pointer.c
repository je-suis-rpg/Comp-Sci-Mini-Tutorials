#include<stdio.h>


// Demonstrating the creation of pointers of 
// different types

int main ()
{
   // Declare a var
   
   char unsigned test;
   
   // Declare a pointer and bind to address of var

   char unsigned *testpointer = &test;
   
   // Bind var and increment ..verbose?
   // Does something look odd here? 

   test = 255;
   test = 255 + 1;
   
   
   // Print out vars 
   // If you were compiler, what would you do?   

   printf("This should be 0 (variable directly): %i\n", test);
   printf("This should also be 0 (pointer dereferancing): %i\n", *testpointer);
   printf("THis is the address of test: %x\n", &test);
}
