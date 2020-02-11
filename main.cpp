#include "UtilityFunctions.h"
#include <iostream>

int main( int argc, char *argv[] )
{
    // Test Sum from UtilityFunctions
    std::vector<double> test_nums_1 (4, 10);  // 4 copies of 10
    std::vector<double> test_nums_2;  // empty
    double ans_1 = Sum(test_nums_1);
    double ans_2 = Sum(test_nums_2);
    std::cout << "Answer 1: " << ans_1 << "\n";
    std::cout << "Answer 2: " << ans_2 << "\n";

    std::vector<int> test_multiples;
    for( int i=1; i<=12; i++ )
    {
        test_multiples.push_back(i);
    }

    std::cout << "Multiples Filter test:" << std::endl << "Vector before function: ";
    for( int i=0; i<test_multiples.size(); i++ )
    {
        if( i != 0 )
        {
            std::cout << ", ";
        }
        std::cout << test_multiples[i];
    }
    std::cout << std::endl;

    std::vector<int> test_multiples_out = MultiplesFilter( test_multiples, 3 );

    std::cout << "Vector after MultiplesFilter with to_divide of 3: ";
    for( int i=0; i<test_multiples_out.size(); i++ )
    {
        if( i != 0 )
        {
            std::cout << ", ";
        }
        std::cout << test_multiples_out[i];
    }
    std::cout << std::endl;


    return 0;
}
