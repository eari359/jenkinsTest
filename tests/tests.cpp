// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "my_add.h"

TEST_CASE( "add is working", "[my_add]" ) {
	REQUIRE(add(0, 0) == 0);	
	REQUIRE(add(1, 0) == 1);	
	REQUIRE(add(0, 1) == 1);	
	REQUIRE(add(1, 1) == 1);	
}

TEST_CASE( "failed test", "[my_add]" ) {
	REQUIRE(add(0, 0) == 1);	
}
