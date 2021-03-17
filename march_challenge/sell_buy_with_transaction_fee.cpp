//
// Created by alexey on 16.03.2021.
//
#include "solution.h"
#include <iostream>
#include  <algorithm>

using namespace ::std;

int Solution::maxProfit(vector<int>& prices, int fee) {
	int profit = 0;
	int stockPrice = -0x3f3f3f3f;
	for(const auto &item : prices){
		stockPrice = max(stockPrice, profit - item);
		profit = max(profit, stockPrice + item - fee);
	}
	return profit;
}