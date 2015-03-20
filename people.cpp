/*
 * people.cpp
 *
 *  Created on: Nov 24, 2014
 *      Author: ehngxin
 */

#include "people.h"

people::people(string n, birth b)
:name(n), birthday(b)
{
	// TODO Auto-generated constructor stub

}

void people::printInfo() {
	cout << name << endl;
	birthday.printDate();
}

people::~people() {
	// TODO Auto-generated destructor stub
}
