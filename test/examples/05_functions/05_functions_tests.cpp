#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test value parameter", "knowns as a copy parameter")
{
	auto num = 10;
	val_ref_params(num);
	REQUIRE(num == 20);
}
