#include "UtilityFunctions.h"

//Griffen
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
	std::vector<int>::iterator it;
	it = a.begin();
	for(unsigned int i = 0; i < a.size(); i++){
		it += 1;
		for(unsigned int i2 = 0; i2 < b.size(); i2++){
			if(a[i] == a[i2]){
				a.erase(it);
			}
		}
	}
	return a;
}