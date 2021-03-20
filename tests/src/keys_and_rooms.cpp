//
// Created by alexey on 20.03.2021.
//
#include <gtest/gtest.h>
#include "march_solution.h"

using namespace testing;

TEST(marchChallengeCase, keysAndRoomsPositiveTest) {
	Solution solution;
	vector<int> innerVect1 {1, 3};
	vector<int> innerVect2 {3, 1};
	vector<int> innerVect3 {0};
	vector<int> innerVect4 {2};
	vector<vector<int>> vect {innerVect1, innerVect2, innerVect3, innerVect4};
	ASSERT_TRUE(solution.canVisitAllRooms(vect));
}

