/*
 * birth.cpp
 *
 *  Created on: Nov 24, 2014
 *      Author: ehngxin
 */

#include "birth.h"

birth::birth(int m, int d, int y) {
	// TODO Auto-generated constructor stub
	month = m;
	day = d;
	year = y;
}

birth::~birth() {
	// TODO Auto-generated destructor stub
}

void birth::printDate() {
	cout << month << "/"  << day << "/" << year << endl;
}

