//
// Created by alexey on 13.03.2021.
//
#include <algorithm>
#include "march_solution.h"
#include <unordered_map>

int Solution::numFactoredBinaryTrees(vector<int> &arr) {
	unordered_map<int, long> treeHash;
	long result = 0;
	int modulo = 1e9 + 7;

	sort(arr.begin(), arr.end());

	for(auto const & i : arr) {
		treeHash[i] = 1;
		for (auto const & item : treeHash) {
			if(i % item.first == 0 && treeHash.count(i/item.first)) {
				treeHash[i] = treeHash[i] + item.second * treeHash[i/item.first];
			}
		}
		result += treeHash[i];
	}

	return result % modulo;
}
