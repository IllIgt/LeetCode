//
// Created by alexey on 15.03.2021.
//

#ifndef LEETCODE_SWAPING_NODES_LL_H
#define LEETCODE_SWAPING_NODES_LL_H

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
	ListNode* swapNodes(ListNode* head, int k);
};


#endif //LEETCODE_SWAPING_NODES_LL_H
