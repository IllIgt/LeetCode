//
// Created by alexey on 21.03.2021.
//

#include "UndergroundSystem.h"

void UndergroundSystem::checkIn(int id, string stationName, int t) {
	checks[id] = pair(stationName, t);
}

void UndergroundSystem::checkOut(int id, string stationName, int t) {
	pair<string, int> stationAndTime = checks[id];
	checks.erase(id);
	routes[stationAndTime.first + "-" + stationName].first++;
	routes[stationAndTime.first + "-" + stationName].second += t-stationAndTime.second;
}

double UndergroundSystem::getAverageTime(string startStation, string endStation) {
	pair<double, double> trafficData = routes[startStation + "-" + endStation];
	return trafficData.second/trafficData.first;
}