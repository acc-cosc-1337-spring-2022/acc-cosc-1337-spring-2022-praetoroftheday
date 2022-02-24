#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

//HW
//capture a number from the keyboard and call
//functions get_letter_grade_using_if and 
//get_letter_grade_using_switch to display the letter
//grade to the screen

//Create a main menu
int main()
{
	//create variables
	int grade;
	int main_menu;
	string letter_grade;

	//display the main menu
	cout << "MAIN MENU";
	cout << "Enter the corresponding number to the path you would like to take.";
	cout << "1- Calculate your letter grade using if";
	cout << "2- Calculate your letter grade using switch";
	cout << "3- Exit the program";
	cin >> main_menu;

	switch(main_menu)
	{
		case 1:
			cout << "Enter your grade in integer format: ";
			cin >> grade;
			letter_grade = get_letter_grade_using_if(grade);
			cout << "Your letter grade is: " << letter_grade;
			break;
		case 2:
			cout << "Enter your grade in integer format: ";
			cin >> grade;
			letter_grade = get_letter_grade_using_switch(grade);
			cout << "Your letter grade is: " << letter_grade;
			break;
		case 3:
			cout << "Goodbye!";
			break;
		default:
			cout << "ERROR: Menu choice out of range. Rerun program and enter an elligible number";
			break;
	}


}