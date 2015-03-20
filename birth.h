/*
 * birth.h
 *
 *  Created on: Nov 24, 2014
 *      Author: ehngxin
 */

#ifndef BIRTH_H_
#define BIRTH_H_

#include <string>
#include <iostream>

using namespace std;

class birth {
public:
	birth(int m, int d, int y);
	virtual ~birth();
	void printDate();
private:
	int month;
	int day;
	int year;
};

#endif /* BIRTH_H_ */
