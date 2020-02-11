#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <vector>


/**
  Sum adds all numbers in a vector.

  @params:
    num - is a std::vector<double> of numbers to be summed
  @output:
    all numbers in nums summed together
*/
double Sum(std::vector<double> nums);

double Sign(double num);

// Jason
// takes a vector of integers and removes all elements evenly divisible by the passed in int
std::vector<int> MultiplesFilter(std::vector<int>, int divides_by);

//Griffen
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

#endif
