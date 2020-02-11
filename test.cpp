#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

// includes as you need them
#include "catch.hpp"
#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function

TEST_CASE( "MultiplesFilter" ) {
    std::vector<int> test_multiples;
    for( int i=1; i<=12; i++ )
    {
        test_multiples.push_back(i);
    }
    
    std::vector<int> expected_out;
    expected_out.push_back(1);
    expected_out.push_back(2);
    expected_out.push_back(4);
    expected_out.push_back(1);
    expected_out.push_back(7);
    expected_out.push_back(8);
    expected_out.push_back(10);
    expected_out.push_back(11);
    std::vector<int> test_multiples_out = MultiplesFilter( test_multiples, 3 );

    bool verified = true;
    int s1 = expected_out.size();
    int s2 = test_multiples_out.size();
    int maxsize = s1 < s2 ? s1 : s2;
    for( int i=0; i<maxsize; i++ )
    {
        verified = verified && expected_out[i] == test_multiples_out[i];
    }
    REQUIRE( s1 == s2 );
}

// Each SECTION should test one aspect of that function
