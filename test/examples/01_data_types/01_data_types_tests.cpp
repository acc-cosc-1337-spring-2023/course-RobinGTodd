#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test echo variable function", "do values echo") 
{
	REQUIRE(echo_variable(5) == 5);
}

/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add to double_1_w_0_function", "do values echo")
{
	// REQUIRE(add_to_double_1(0) == .9);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Test get char ascii valuefunction", "are chars stored as numbers")
{
	REQUIRE(get_char_ascci_value('A')==65);
	REQUIRE(get_char_ascci_value('a') == 97);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

