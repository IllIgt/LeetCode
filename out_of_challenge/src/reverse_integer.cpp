//
// Created by alexey on 17.03.2021.
//
#include "out_of_challenge_solution.h"
#include <iostream>

using namespace std;

int Solution::reverse(int x) {
	long tmp = 0;
	int dev_sign = 1;
	if (x<0) {dev_sign = -1;}
	while(x != 0) {
		tmp = tmp * 10 + x%10*dev_sign;
		cout << tmp << endl;
		x = x / 10;
	}
	if (tmp > INT32_MAX | tmp < INT32_MIN){
		return 0;
	} else {
		return tmp * dev_sign;
	}
}
