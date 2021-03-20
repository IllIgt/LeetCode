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
	double _radius;
	double _x_center;
	double _y_center;

public:
	Solution()= default;
	Solution(double radius, double x_center, double y_center) {
		_radius = radius;
		_x_center = x_center;
		_y_center = y_center;
	}
	vector<double> randPoint();
	int numFactoredBinaryTrees(vector<int> &arr);
	static bool hasAllCodes(const string& s, int k);
	ListNode* swapNodes(ListNode* head, int k);
	string encode(string longUrl);
	string decode(string shortUrl);
	int maxProfit(vector<int>& prices, int fee);
	int wiggleMaxLength(vector<int>& nums);
	bool canVisitAllRooms(vector<vector<int>>& rooms);

};
#endif //LEETCODE_SOLUTION_H
