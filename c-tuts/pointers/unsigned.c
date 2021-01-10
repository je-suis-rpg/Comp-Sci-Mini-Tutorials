#include<stdio.h>

// A file demonstrating integer overflow
// of a 1 byte (8 bit) binary var.

int main()
{
  
  // Initialise 8 bit value to maximum
  // if 'casting' as signed.
  
  // Questions: Change to signed?
  //            What assumptons would/could the compiler make?
  
  char unsigned fred = 255;
  
  // Overflow!
  
  char unsigned a = fred + 1;
  
  // What would we expect to see printed in the terminal?

  printf("This should be 0: %i\n", a);
}


