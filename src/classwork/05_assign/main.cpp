//write include statements
#include<string>
#include<iostream>
#include "sequence.h"

//write using statements for cin cout

/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{
	std::cout <<"blep";
	//initialize menu choice variable
	int choice = 0;

	while (choice != 3)
		

		//perform the promised menu functions
		if (choice == 1) {
			//initialize DNA string
			std::string gc_dna;
			//get the DNA strand from the user
			std::cout << "\nPlease enter a valid DNA strand to get the GC content of: ";
			std::cin >> gc_dna;

			//run the get_gc_content function
			double gc = get_gc_content(gc_dna);

			//display the results
			std::cout << "The GC content of " << gc_dna << " is: " << gc << std::endl;
			//stop menu function from repeating itself
			choice = 0;
		}
		else if (choice == 2) {
			//initialize dna string
			std::string dna = "";

			//get dna strand from the user
			std::cout << "\nPlease enter a valid DNA strand to get the complement of: ";
			std::cin >> dna;

			//run get_dna_complement to get the function
			std::string complement = get_dna_complement(dna);

			//display the results
			std::cout << "\nThe complement of \n" << dna << "\nis \n" << complement;
			//stop menu function from repeating itself
			choice = 0;
		}
		else if (choice == 0) {
			//I wonder if this will work
			display_menu();

			//ask user for input
			std::cout << "\nInput Choice: ";
			std::cin >> choice;
			std::cout << std::endl;
		}
		else {
			std::cout << "Invalid menu choice, please try again. \n" << "Enter a menu choice: ";
			std::cin >> choice;
		}
	std::cout << "Exiting Now, Have a Nice Day!\n";
	return 0;
}

