//
// Created by alexey on 15.03.2021.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
	unordered_map<string, string> tinyURLs;
	int ID = 0;
	string dName = "http://tinyurl.com/";

public:
	int numFactoredBinaryTrees(vector<int> &arr);
	static bool hasAllCodes(const string& s, int k);
	ListNode* swapNodes(ListNode* head, int k);
	// Encodes a URL to a shortened URL.
	string encode(string longUrl);
	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl);
	int maxProfit(vector<int>& prices, int fee);
};
#endif //LEETCODE_SOLUTION_H
