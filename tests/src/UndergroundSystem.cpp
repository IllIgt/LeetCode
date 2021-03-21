//
// Created by alexey on 21.03.2021.
//
#include <gtest/gtest.h>
#include "UndergroundSystem.h"

using namespace testing;

TEST(marchChallengeCase, UndergroundSystemTest) {
	UndergroundSystem undergroundSystem = UndergroundSystem();
	int t1 = 1;
	int t2 = 12;
	int t3 = 3;
	int t4 = 22;
	undergroundSystem.checkIn(123, "Welton", t1);
	undergroundSystem.checkOut(123, "NotWelton", t2);
	undergroundSystem.checkIn(1, "Welton", t3);
	undergroundSystem.checkOut(1, "NotWelton", t4);
	double result = undergroundSystem.getAverageTime("Welton", "NotWelton");
	ASSERT_DOUBLE_EQ(result, (double)(t2+t4-t1-t3)/2);
}

