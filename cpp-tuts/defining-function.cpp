#include <iostream>

//Experiment declaring my own function in C++. 
//Quite easy I have to say. Not as crazy as C. Becomes a 
//tad more powerful. 

using namespace std;

float circle_area(float radius);


int main()
{
	float input = 0.0f; 
	
	cout << "Please enter radius required\n";
	
	cin >> input; 
	
	cout << "This is the area of the circle\n" << circle_area(input) << ends;
}

float circle_area(float radius)
{
	float PI = 3.14f;
	
	return PI * radius * radius;
}

	
