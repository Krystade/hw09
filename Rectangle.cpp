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

void Rectangle::print(){
	cout << "l: " << l << "\nw: " << w << endl;
}
void Rectangle::updateDimensions(int l, int w){

}


#endif /* RECTANGLE_CPP_ */
