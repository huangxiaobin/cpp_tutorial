/*
 * mother.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: ehngxin
 */
#include <iostream>
#include "mother.h"

using namespace std;

mother::mother() {
	// TODO Auto-generated constructor stub
	cout << "mother construct" << endl;
}

mother::~mother() {
	// TODO Auto-generated destructor stub
	cout << "mother destruct" << endl;
}

void mother::say_name() {
	cout << "I am a Roberts" << endl;
}
