//write include statements
#include <iostream>
#include "variables.h"
//write namespace using statement for cout
//?I am uncertain of what this statement is asking of me, given 
//we are not supposed to be using namespace std?

int main()
{
	//establish an int variable named num
	int num;
	//prompt user for input
	std::cout <<"Give me a number: " ".\n";
	//collect input
	std::cin >> num;
	//create an int variable named 'result' and call the function
	int result = multiply_numbers(num);
	//display the results to the screen
	std::cout <<"The result of " << num << "multiplied by 5 is: " << result << ".\n";

	//create an int variable named num1 and assign it the value 4
	int num1 = 4;
	//call the multiply_numbers function with num1 as its parameter,
	//assign its return value to the result variable
	result = multiply_numbers(num1);
	//display the result variable to the screen
	std::cout << "The result of " << num1 << "is: " << result;
	return 0;
}
