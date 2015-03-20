/*
 * people.h
 *
 *  Created on: Nov 24, 2014
 *      Author: ehngxin
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

#include <string>
#include <iostream>

using namespace std;

#include "birth.h"

class people {
public:
	people(string n, birth b);
	void printInfo();
	virtual ~people();
private:
 	string name;
	birth birthday;
};

#endif /* PEOPLE_H_ */
