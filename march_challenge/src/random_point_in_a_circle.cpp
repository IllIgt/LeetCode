//
// Created by alexey on 18.03.2021.
//
#include "march_solution.h"
#include <cmath>

vector<double> Solution::randPoint() {
	double hypotenuse = this->_radius * sqrt((double)rand() / RAND_MAX);
	double ang = (double)rand() / RAND_MAX * 2 * M_PI;
	double cos_angle = cos(ang) * hypotenuse;
	double sin_angle = sin(ang) * hypotenuse;
	return vector<double>{this->_x_center + cos_angle, this->_y_center + sin_angle};
}