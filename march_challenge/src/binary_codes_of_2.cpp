//
// Created by alexey on 13.03.2021.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "march_solution.h"
#include <unordered_set>

bool Solution::hasAllCodes(const string& s, int k) {
	unordered_set<int> binaries;
	int power_variations = (1 << k);
	for(int i = 0; i+k <= s.size(); ++i){
		binaries.insert(stoi(s.substr(i,k),nullptr,2));
		if (binaries.size() == power_variations) {return true;}
	}
	return false;
}

