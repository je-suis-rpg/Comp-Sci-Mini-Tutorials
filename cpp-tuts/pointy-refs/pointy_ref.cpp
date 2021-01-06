#include <iostream>

// Quick file to make use of and play
// with pointers and references 

using namespace std;

int main (void)
{
  //declare some variables, some ints, some
  //arrays and whatnot. 

  int int1 = 10;
  int int2 = 34;
  float float1 = 9.8f;

  // Do not forget to tell the compiler to reserve
  // the memory BEFORE we store the ints in memory.
  // [] is crucial here. 

  int array1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

  //declare pointers and point them at the address
  //of the variables just declared. 

  int* pint1 = &int1; 
  int* pint2 = &int2;
  float* pfloat1 = &float1;

  // How does this work with arrays mind?
  // We don't have to use the address operand in this case
  // The compiler can tell that array1 is an array1 and the implementation
  // already thinks of this like this &array1[0]. 
  
  int* first_for_array1 = array1;

  //Lets print some things to the screen so we can see if what
  //we think is going to happen, erm, happens...

  cout << "Stored int1 value: =  \n" << int1 << ends;
  cout << "Stored int1 value: =  \n" << *pint1 << ends;
  cout << "Stored address of int1 = \n" << pint1 << ends;
  cout << "Stored int2 value: \n" << int2 << ends;
  cout << "Stored int2 value: =  \n" << *pint2 << ends;
  cout << "Stored address of int1 = \n" << pint2 << ends;
  cout << "Stored float1 value: \n" << float1 << ends;
  cout << "Stored int2 value: =  \n" << *pfloat1 << ends;
  cout << "Stored address of int1 = \n" << pfloat1 << ends;


  // lets print the numbers out from the array in a for loop
  // We gain access to the memory using something called pointer
  // arithematic. We increment the pointer by one each time through the
  // loop so we 'walk' along the memory collecting each value as we go.

  //This is one of the syntax that we can use:

  for(int i = 0; i < 9; i++)
    {
      cout << *first_for_array1 << " \n";
      ++first_for_array1; //move pointer to next element
    }
  cout << ends;


  // .. and here is another version of the syntax that
  // we can use.

  for(int i = 0; i < 9; i++)
    {
      // we could also printf if we wanted too....

      //TODO Something is wrong with the syntax. Can you find out
      //where? 

      cout << "\nelement i in array: " << *(first_for_array1 + i) << ends;

    }

    

  
}
