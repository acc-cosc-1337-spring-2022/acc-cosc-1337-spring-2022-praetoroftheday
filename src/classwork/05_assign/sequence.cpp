//write include statements 


/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/

//using vectors so include vectors
#include "sequence.h"
#include<iostream>
#include<string>
//#include<cstring>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content (const std::string dna)
{
    //initialize variable
    int gccounter = 0;
    
    //make a variable of dna that can be modified
    std::string reading_dna = dna;

    //check each letter of the string to see if it is a G or C
    for (int i = 0; i < dna.size(); i++) {
        if ((reading_dna[i] == 'C' || reading_dna[i] == 'G'|| reading_dna[i] == 'c' || reading_dna[i] == 'g')) {
            gccounter++;
        }
    }
    return (gccounter / (double) dna.size());
    //create an array to input the string into
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna)
{
    //create variable to store the reverse in
    std::string reverse = dna;

    //write the reverse of dna into rev
    for (int i = 0; i < dna.size(); i++) {
        reverse[i] = dna[(dna.size())-1-i];
    }
    //return rev
    return (reverse);
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
    //call function get_reverse_string(dna) and save results to a local variable
    std::string reverse_string = get_reverse_string(dna);
    std::cout << reverse_string;

    //initialize a variable to hold a complement
    std::string dna_complement;

    //iterate local string variable
    for (int i = 0; i < reverse_string.size(); i++) 
    {
        if ((reverse_string[i] == 'A' || reverse_string[i] == 'a')) {   
            //replace A with T
            dna_complement += 'T';
            std::cout << dna_complement[i];
        }
        else if ((reverse_string[i] == 'T' || reverse_string[i] == 't')) {
            //replace T with A
            dna_complement += 'A';
            std::cout << dna_complement[i];

        }
        else if ((reverse_string[i] == 'C' || reverse_string[i] == 'c')) {
            //replace C with G
            dna_complement += 'G';
            std::cout << dna_complement[i];

        }
        else if ((reverse_string[i] == 'G' || reverse_string[i] == 'g')) {
            //replace G with C
            dna_complement += 'C';
            std::cout << dna_complement[i];

        }
        else 
        {
            //give default if there is none
            std::cout << "Faulty DNA strand was given";
        }
    }
    return (dna_complement);
}





//extra functions to make my life easier
void display_menu() {
    std::cout << "\n \t \t MENU \t \n";
    std::cout << "1 - Get GC Content \n";
    std::cout << "2 - Get DNA Complement \n";
    std::cout << "3 - Exit \n";
}