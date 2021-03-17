//
// Created by alexey on 15.03.2021.
//
#include "march_solution.h"

string Solution::encode(string longUrl) {
	tinyURLs[dName + to_string(ID)] = longUrl;
	return dName + to_string(ID);
}
string Solution::decode(string shortUrl) {
	return tinyURLs[shortUrl];
}
