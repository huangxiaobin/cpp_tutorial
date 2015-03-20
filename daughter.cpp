/*
 * daughter.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: ehngxin
 */

#include "daughter.h"
#include <iostream>
using namespace std;

daughter::daughter()  {
	// TODO Auto-generated constructor stub
	cout << "daughter construct" << endl;
}

daughter::~daughter() {
	// TODO Auto-generated destructor stub
	cout << "daughter destruct" << endl;
}

void daughter::print_info() {
	publicv = 0;
	protectedv = 1;
	cout << publicv << endl;
	cout << protectedv << endl;
//	std::cout << privatev;
}

