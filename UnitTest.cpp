#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "1.3/Fraction.cpp"
#include "1.3/Fraction.hpp"

TEST_CASE( "Arguments initialized") {
    string a1 = "1.99";
    string a2 = "2.2455";
    Fraction testing1;
    REQUIRE( testing1.toNumber(a1) == 1.99);
    REQUIRE( testing1.toNumber(a2) == 2.2455);
}
