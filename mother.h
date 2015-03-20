/*
 * mother.h
 *
 *  Created on: Nov 25, 2014
 *      Author: ehngxin
 */

#ifndef MOTHER_H_
#define MOTHER_H_

class mother {
public:
	mother();
	virtual ~mother();
	void say_name();
	int publicv;
protected:
	int protectedv;
private:
	int privatev;
};

#endif /* MOTHER_H_ */
