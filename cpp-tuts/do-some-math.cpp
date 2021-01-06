#include <iostream>


int main()
{
	std::cout << "Lets do some math!\n" << std::ends;
	
	//works exactly like format t ~a (lisp) and the printf 
	//function
	std::cout << "7 + 3 =" << 7 + 3 << std::ends;
	std::cout << "Some multiplication: 7 x 3 = " << 7*3 << std::ends;
	
	int a = 7 + 3;
	 
	printf("\n 7 + 3 = %i\n", a);
	//Doesn't even matter here - just optimises it out here.
	printf("7 + 4 = %i\n", 7 + 4);
	printf("7 x 3 = %i\n", 7 * 3); 
	
	
	return 0;
}
	
