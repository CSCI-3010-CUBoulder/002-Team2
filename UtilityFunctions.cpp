#include "UtilityFunctions.h"

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums) {
  double acc = 0;
  for (int i = 0; i < nums.size(); i++) {
    acc += nums[i];
  }
  return acc;
}
 
double Sign(double num){
	return num >=0 ? 1 : -1;
}

// Jason
std::vector<int> MultiplesFilter(std::vector<int> elements, int divides_by)
{
    std::vector<int> ret_vec;
    for( int i=0; i<elements.size(); i++ )
    {
        if( elements[i] % divides_by != 0 )
        {
            ret_vec.push_back( elements[i] );
        }
    }
    return ret_vec;
}
