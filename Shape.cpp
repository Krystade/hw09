/*
 * Shape.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#include "Shape.h"

Shape::Shape(int x, int y){
	this->x = x;
	this->y = y;
}
Shape::~Shape(){

}
void Shape::print(){
	cout << "x: " << x << "\ny: " << y << endl;
}

void Shape::updateDimensions(){}

double Shape::calcPerimeter(){
	return 0.0;
}
double Shape::calcArea(){
	return 0.0;
}

void Shape::move(int x, int y){
	this->x = x;
	this->y = y;
}
