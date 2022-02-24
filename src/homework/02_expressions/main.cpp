//write include statements
#include "expressions.h"
#include <iostream>

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	//create the variables
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//prompt user for input for meal amount
	std::cout << "Enter the amount your meal cost in US Dollars: ";

	//use the  cn object to capture the number from the keyboard
	//and assign to meal_amount
	std:: cin >> meal_amount;

	//call the sales_tax_amount with meal_amount with meal_amount as its parameter
	//assign the return value to tax_amount
	tax_amount = get_sales_tax_amount(meal_amount);

	//ask for input for the tip rate
	std::cout << "Enter tip rate in decimal format (e.g. 20% = 0.2): ";

	//capture the tip rate from the keyboard and assign the value to tip_rate
	std::cin >> tip_rate;

	//use get_tip_amount for its self-explanatory function
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//add tip_amount, tax_amount, and meal_amount and assign the number to total. 
	total = tip_amount + tax_amount + meal_amount;

	//display a receipt
	std::cout << "Meal Amount: $" << meal_amount;
	std::cout << "Sales Tax: $" << tax_amount;
	std::cout << "Tip Amount: $" << tip_amount;
	std::cout << "Total: $" << total;
	return 0;
}
