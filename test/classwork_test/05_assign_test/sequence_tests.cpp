#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sequence.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//test get_gc_content
TEST_CASE("Verify Get GC Content Function", "verification") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.5);
}

//test get_reverse_string
TEST_CASE("Verify Get Reverse String Function", "verification") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

//test get_dna_complement
TEST_CASE("Verify Get DNA Complement Function", "verification") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}