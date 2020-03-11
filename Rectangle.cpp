/*
 * Rectangle.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#ifndef RECTANGLE_CPP_
#define RECTANGLE_CPP_

#include "Rectangle.h"

Rectangle::Rectangle(int l, int w) : Shape(0, 0){
	this->l = l;
	this->w = w;
}
Rectangle::Rectangle() : Shape(0, 0){
	this->l = 0;
	this->w = 0;
}

double Rectangle::calcPerimeter(){
	return 2*this->l + 2*this->w;
}
double Rectangle::calcArea(){
	return this->l*this->w;
}

void Rectangle::printPerimeter(){
	cout << Rectangle::calcPerimeter();
}
void Rectangle::printArea(){
	cout << Rectangle::calcArea();
}
void Rectangle::print(){
	cout << "l: " << l << "\nw: " << w << endl;
}
void Rectangle::updateDimensions(int l, int w){
	this->l = l;
	this->w = w;
}


#endif /* RECTANGLE_CPP_ */
