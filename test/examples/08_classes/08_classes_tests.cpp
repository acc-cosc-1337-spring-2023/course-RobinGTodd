#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking one param constructor")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test checking get balance ")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test Checking deposit") {
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);

	// account.deposit(50);
	// REQUIRE(account.get_balance() == 550;)
}