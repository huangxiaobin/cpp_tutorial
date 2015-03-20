/*
 * daughter.h
 *
 *  Created on: Nov 25, 2014
 *      Author: ehngxin
 */

#ifndef DAUGHTER_H_
#define DAUGHTER_H_
#include "mother.h"

class daughter : public mother {
public:
	daughter();
	virtual ~daughter();
	void print_info();
};

#endif /* DAUGHTER_H_ */
