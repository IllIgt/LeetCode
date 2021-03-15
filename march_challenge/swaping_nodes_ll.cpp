//
// Created by alexey on 15.03.2021.
//

#include "swaping_nodes_ll.h"

ListNode *Solution::swapNodes(ListNode *head, int k) {
	{
		ListNode *forwardNode = nullptr;
		ListNode *backwardNode = nullptr;
		ListNode *currentHead = head;
		int i = 1;
		while(currentHead) {
			if(i == k){
				forwardNode = currentHead;
				backwardNode = head;
			}
			currentHead = currentHead->next;
			if(backwardNode && currentHead) {
				backwardNode = backwardNode->next;
			}
			i++;
		}
		int tempVal = forwardNode->val;
		forwardNode->val = backwardNode->val;
		backwardNode->val = tempVal;

		return head;
	}
}