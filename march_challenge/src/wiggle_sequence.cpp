//
// Created by alexey on 18.03.2021.
//
#include "march_solution.h"
#include <iostream>

int Solution::wiggleMaxLength(vector<int> &nums) {
	if(nums.empty()){return 0;}
	int rise_len = 1;
	int dawn_len = 1;
	for(int i=0; i < nums.size()-1; ++i) {
		if (nums[i+1] > nums[i]){
			rise_len = dawn_len + 1;
		} else if(nums[i+1] < nums[i]) {
			dawn_len = rise_len + 1;
		}
	}
	return max(rise_len, dawn_len);
}