/*
 * Shape.h
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <math.h>
using namespace std;

class Shape{
public:
	Shape();
	Shape(int x, int y);
	virtual ~Shape();
	void print();

	virtual double calcPerimeter();
	virtual double calcArea();
	virtual void move(int x, int y);
	virtual void updateDimensions();
private:
	int x; // x-coordinate
	int y; // y-coordinate
};



#endif /* SHAPE_H_ */
