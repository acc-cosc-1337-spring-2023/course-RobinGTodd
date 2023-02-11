#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get anded result") {
	REQUIRE(get_anded_result(true, true)==true);
	REQUIRE(get_anded_result(true, false)==false);
	REQUIRE(get_anded_result(false, true)==false);
	REQUIRE(get_anded_result(false, false) == false);
}

TEST_CASE("Test get ored result") {
	REQUIRE(get_ored_result(true, true)==true);
	REQUIRE(get_ored_result(true, false)==true);
	REQUIRE(get_ored_result(false, true)==true);
	REQUIRE(get_ored_result(false, false) == false);
}

TEST_CASE("Test get notted result") {
	REQUIRE(get_notted_result(true)==false);
	REQUIRE(get_notted_result(false)==true);
}

TEST_CASE("Test get order of operations", "! && ||") 
{
	REQUIRE(get_bool_order_of_ops(true, false, true)==true);
	REQUIRE(get_bool_order_of_ops(false, true, false)==true);
	REQUIRE(get_bool_order_of_ops(false, false, false)==false);
}

TEST_CASE("Verify get is over time function")
{
	REQUIRE(get_is_over_time(39)==false);
	REQUIRE(get_is_over_time(40)==false);
	REQUIRE(get_is_over_time(41)==true);
}