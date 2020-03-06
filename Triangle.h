/*
 * Triangle.h
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
*/

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle : public Shape{
public:
	Triangle(int s1, int s2, int s3);
private:
	int s1; // side one
	int s2; // side two
	int s3; // side three
};


#endif /* TRIANGLE_H_ */
