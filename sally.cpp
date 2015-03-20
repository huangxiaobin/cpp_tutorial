/*
 * sally.cpp
 *
 *  Created on: Nov 20, 2014
 *      Author: ehngxin
 */
#include "sally.h"

sally::sally() {
	// TODO Auto-generated constructor stub
	cout << "i am constructor" << endl;
}

sally::sally(int x, int y)
:var_a(x), var_b(y)
{
	// TODO Auto-generated constructor stub
	cout << "i am constructor" << endl;
}

sally::~sally() {
	// TODO Auto-generated destructor stub
	cout << "i am destructor" << endl;
}

void sally::show() {
	// TODO Auto-generated constructor stub
	cout << "var_a " << var_a << endl;
	cout << "var_b " << var_b << endl;
}

void sally::printRegular() {
	// TODO Auto-generated constructor stub
	cout << "i am regular function" << endl;
}


void sally::printConst() const{
	// TODO Auto-generated constructor stub
	cout << "i am regular function" << endl;
}
