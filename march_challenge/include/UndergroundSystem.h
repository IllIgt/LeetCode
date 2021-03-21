//
// Created by alexey on 21.03.2021.
//

#ifndef LEETCODE_UNDERGROUNDSYSTEM_H
#define LEETCOE_UNDERGROUNDSYSTEM_H
#include <string>
#include <unordered_map>

using namespace std;

class UndergroundSystem {
private:
	unordered_map<int, pair<string, int>> checks;
	unordered_map<string, pair<double, double>> routes;
public:
	UndergroundSystem() = default;
	void checkIn(int id, string stationName, int t);
	void checkOut(int id, string stationName, int t);
	double getAverageTime(string startStation, string endStation);
};





#endif //LEETCODE_UNDERGROUNDSYSTEM_H
