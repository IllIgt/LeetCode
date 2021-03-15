#include <iostream>
//#include "march_challenge/bi_trees_with_factors.h"
#include "march_challenge/swaping_nodes_ll.h"

int main() {
	Solution solution;
	auto *node = new ListNode(2);
	auto *node2 = new ListNode(1, node);
	cout << solution.swapNodes(node2, 1)->next->val << endl;
	return 0;
}
