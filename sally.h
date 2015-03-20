/*
 * sally.h
 *
 *  Created on: Nov 20, 2014
 *      Author: ehngxin
 */

#ifndef SALLY_H_
#define SALLY_H_
#include <iostream>
using namespace std;

class sally {
public:
	sally();
	sally(int x, int y);
	virtual ~sally();
	void printRegular();
	void printConst() const;
	void show();
private:
	int var_a;
	int var_b;
};

#endif /* SALLY_H_ */
