#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include <cctype>

using namespace std;
//part a:
//write sufficient test case to test the following 3 functions found in the cctype library.
//(toupper, islower, isdigit)
//You will need to write enough test cases for each function. think about what we talked
//about. If you are writing more than 7 for any of thhese functions, then you have some
//unnecessary test cases. All test cases for these three functions will go into parta.cpp
//do not just test valid classifiers and conversions. make some that should not be affected. 

//skeleton for all test cases:
//TEST_CASE("functionName - short description as to what is being tested")
//{
    //your code goes here
//curly bracket:p

TEST_CASE("toupper - testing upper boundary of an a")
{
    char achar = 'a';
    char result;
    
    result = char( toupper( achar ) );
    REQUIRE( result == 'A' );
}


TEST_CASE("toupper - testing lower boundary of an z")
{
    char zchar = 'z';
    char result;
    
    result = char( toupper( zchar ) );
    REQUIRE( result == 'Z' );
}

TEST_CASE("toupper - testing middle boundary of an m")
{
    char mchar = 'm';
    char result;
    
    result = char( toupper( mchar ) );
    REQUIRE( result == 'M' );
}

TEST_CASE("toupper - testing upper boundary of an A")
{
    char Achar = 'A';
    char result;
    
    result = char( toupper( Achar ) );
    REQUIRE( result == 'A' );
}


TEST_CASE("toupper - testing lower boundary of an Z")
{
    char Zchar = 'Z';
    char result;
    
    result = char( toupper( Zchar ) );
    REQUIRE( result == 'Z' );
}

TEST_CASE("toupper - testing middle boundary of an M")
{
    char Mchar = 'M';
    char result;
    
    result = char( toupper( Mchar ) );
    REQUIRE( result == 'M' );
}

//now for islower

TEST_CASE("islower - testing upper boundary of an a")
{
    char achar = 'a';
    bool result;
    
    result = char ( islower (achar) );
    REQUIRE( result == true );
}


TEST_CASE("islower - testing lower boundary of an z")
{
    char Zchar = 'z';
    bool result;
    
    result = char ( islower (Zchar) );
    REQUIRE( result == true );
}


TEST_CASE("islower - testing middle boundary of an m")
{
    char mchar = 'm';
    bool result;
    
    result = char ( islower (mchar) );
    REQUIRE( result == true );
}

TEST_CASE("islower - testing upper boundary of an A")
{
    char achar = 'A';
    bool result;
    
    result = char ( islower (achar) );
    REQUIRE( result == false );
}


TEST_CASE("islower - testing lower boundary of an Z")
{
    char Zchar = 'Z';
    bool result;
    
    result = char ( islower (Zchar) );
    REQUIRE( result == false );
}


TEST_CASE("islower - testing middle boundary of an M")
{
    char mchar = 'M';
    bool result;
    
    result = char ( islower (mchar) );
    REQUIRE( result == false );
}


//now for isdigit
TEST_CASE("isdigit - testing upper boundary of a 0")
{
    char zerochar = '0';
    bool result;
    
    result = int ( isdigit ( zerochar ) );
    REQUIRE( result == true );
}


TEST_CASE("isdigit - testing lower boundary of a 9")
{
    char ninechar = '9';
    bool result;
    
    result = int ( isdigit ( ninechar ) );
    REQUIRE( result == true );
}


TEST_CASE("isdigit - testing middle boundary of a 5")
{
    char fivechar = '5';
    bool result;
    
    result = int ( isdigit ( fivechar ) );
    REQUIRE( result == true );
}


TEST_CASE("isdigit - testing a period")
{
    char periodchar = '.';
    bool result;
    
    result = int ( isdigit ( periodchar ) );
    REQUIRE( result == false );
}

TEST_CASE("isdigit - testing an a")
{
    char achar = 'a';
    bool result;
    
    result = int ( isdigit ( achar ) );
    REQUIRE ( result == false );
}


TEST_CASE("isdigit - testing an A")
{
    char Achar = 'A';
    bool result;
    
    result = int ( isdigit ( Achar ) );
    REQUIRE ( result == false );
}
