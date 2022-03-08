//write include statements for string and vector


/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/


/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/

//using string, so include string
#include<string>

/*
Write prototype for function get_gc_content that accepts
a const reference string parameter and returns a double
*/
double get_gc_content (const std::string dna);

/*
Write prototype for function get_dna_complement that
accepts a string and returns a string
*/
std::string get_dna_complement(std::string dna);

/*
Write prototype for function get_reverse_string that 
accepts a string parameter and returns a string
*/
std::string get_reverse_string(std::string dna);

//extra functions to make my life easier
void display_menu();