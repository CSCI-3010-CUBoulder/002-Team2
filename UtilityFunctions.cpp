#include "UtilityFunctions.h"

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums) {
  double acc = 0;
  for (int i = 0; i < nums.size(); i++) {
    acc += nums[i];
  }
  return acc;
}
