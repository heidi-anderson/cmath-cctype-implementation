#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include <cmath>

using namespace std;

//write sufficient test case to test the following 2 functions found
//in the cmath library. (pow and log10). You will need to write enough
//test cases for each function. Think about what we talked about. If
//you are writing more than 5 for any of these functions, then you have
//some unnecessary test cases. All test cases for these functions will
//go into partb.cpp. Do not just test easy power data or log10 data.
//Challenge it. 

//pow function
TEST_CASE("pow -2.35 to the 5.67 power")
{
    double base = 2.35;
    double exponent = 5.67;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(127.04418));
}


TEST_CASE("pow - 4 to the 0.5 power")
{
    double base = 4.0;
    double exponent = 0.5;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(2.0));
}


TEST_CASE("pow - 0 to the 3.45 power")
{
    double base = 0.0;
    double exponent = 3.45;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(0.0));
}


TEST_CASE("pow - 5.63 to the 0.0 power")
{
    double base = 5.63;
    double exponent = 0.0;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(1.0));
}

//now for log10 function
TEST_CASE("log10 - with parameter 1000.0")
{
    double param = 1000.0;
    double result;
    
    result = log10(param);
    REQUIRE(result == Approx(3.000));
}


TEST_CASE("log10 - with parameter 1.425")
{
    double param = 1.425;
    double result;
    
    result = log10(param);
    REQUIRE(result == Approx(0.153815));
}


 TEST_CASE("log10 - with parameter 1.0")
{
    double param = 1.0;
    double result;
    
    result = log10(param);
    REQUIRE(result == Approx(0.000));
}   


TEST_CASE("log10 - with parameter 425.10")
{
    double param = 425.10;
    double result;
    
    result = log10(param);
    REQUIRE(result == Approx(2.62849));
}