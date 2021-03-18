#include <iostream>
//#include "out_of_challenge_solution.h"
#include "march_solution.h"

using namespace std;
int main() {
	Solution solution = Solution(1.0, 0.0, 0.0);
	//auto *node = new ListNode(2);
	//auto *node2 = new ListNode(1, node);
	//vector<int> prices{9,8,7,1,2};
	//cout << solution.encode("aasdasdaaaa") << endl;
	//cout << solution.maxProfit(prices, 3) << endl;
	vector<double> result = solution.randPoint();
	for(const auto &item : result){
		cout << item << endl;
	}

	return 0;
}
