#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "1.3/Fraction.cpp"
#include "1.3/Fraction.hpp"

TEST_CASE( "Arguments initialized") {
    long int a1 = 1, b1 = 2;
    unsigned short int a2 = 3, b2 = 99;
    Fraction testing1;
    REQUIRE( testing1.toString(a1, a2) == "1.3");
    REQUIRE( testing1.toString(b1, b2) == "2.99");
}
