#include "decisions.h"
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	return credit_points / credit_hours;
}

//HW

//write code for function get_letter_grade_using_if
std::string get_letter_grade_using_if(int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return "A";
	}
	else if (grade >= 80 && grade <= 89)
	{
		return "B";
	}
	else if (grade >=70 && grade <= 79)
	{
		return "C";
	}
	else if (grade >= 60 && grade <= 69)
	{
		return "D";
	}
	else if (grade >= 00 && grade <=59)
	{
		return "F";
	}
	else
	{
		return "ERROR";
	}
}

//write code for function get_letter_grade_using_switch
std::string get_letter_grade_using_switch(int grade)
{
	switch(grade)
	{
		case 90 ... 100:
			return "A";
			break;
		case 80 ... 89:
			return "B";
			break;
		case 70 ... 79:
			return "C";
			break;
		case 60 ... 69:
			return "D";
			break;
		case 00 ... 59:
			return "F";
			break;
		default:
			return "ERROR";
			break;
	}
}