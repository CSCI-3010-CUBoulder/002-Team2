#include "UtilityFunctions.h"

int main( int argc, char *argv[] )
{
    // Test Sum from UtilityFunctions
    std::vector<double> test_nums_1 (4, 10);  // 4 copies of 10
    std::vector<double> test_nums_2;  // empty
    double ans_1 = Sum(test_nums_1);
    double ans_2 = Sum(test_nums_2);
    std::cout << "Answer 1: " << ans_1 << "\n";
    std::cout << "Answer 2: " << ans_2 << "\n";
}
