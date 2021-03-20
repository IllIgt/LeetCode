//
// Created by alexey on 19.03.2021.
//
#include "march_solution.h"
#include <stack>
#include <algorithm>
//non-recursive DFS with stack
bool Solution::canVisitAllRooms(vector<vector<int>>& rooms){
	stack<int> roomsStack({0});
	vector<bool> visitedRooms(rooms.size(), false);
	visitedRooms[0] = true;
	while(!roomsStack.empty()) {
		vector<int> roomKeys = rooms[roomsStack.top()];
		roomsStack.pop();
		for(const auto &key : roomKeys) {
			if (!visitedRooms[key]) {
				roomsStack.push(key);
				visitedRooms[key] = true;
			}
		}
	}
	return all_of(visitedRooms.begin(), visitedRooms.end(), [](bool i){ return i; });
}