//write include statements

//write using statements

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
//include statements
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
#include "dna.h"

int main() 
{
	int exitchoice = 0;
	//create a menu
	while (exitchoice != 1) 
	{
		//create a variable to control the loop
		int choice = 0;

		//display the options
		cout << "\n Menu \n";
		cout << "1 - Factorial \n";
		cout << "2 - Greatest Common Divisor \n";
		cout << "3 - Exit \n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		//make a menu function
		if (choice == 1) 
		{
			int num = 0; 
			cout << "Enter a number you wish to get the factorial of: ";
			cin >> num;
			//display the results
			cout << "The factorial of " << num << " is: " << factorial(num) << "\n";
			exitchoice = 0;
		}
		else if (choice == 2)
		{
			int num1 = 0, num2 = 0;
			cout << "Enter two numbers you wish to find the gcd of \n";

			//get input from the user
			cout << "First Number: ";
			cin >> num1;
			cout << "Second Number: ";
			cin >> num2;
			//display the results
			cout << "\n The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << "\n";
			exitchoice = 0;
		}
		else if (choice == 3)
		{
			cout << "\n Are you sure you want to exit? Enter '1' for confirmation: ";
			cin >> exitchoice;
		}
	}
	return 0;
}