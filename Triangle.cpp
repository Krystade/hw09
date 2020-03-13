/*
 * Triangle.cpp
 *
 *  Created on: Mar 5, 2020
 *      Author: jschmid20
 */

#include "Triangle.h"

Triangle::Triangle(int s1, int s2, int s3) : Shape(0, 0){
	this->s1 = s1;
	this->s2 = s2;
	this->s3 = s3;
}
Triangle::Triangle() : Shape(0, 0){
	this->s1 = 0;
	this->s2 = 0;
	this->s3 = 0;
}
void Triangle::print(){
	cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << endl;
}

double Triangle::calcPerimeter(){
	return s1 + s2 + s3;
}
double Triangle::calcArea(){
	double s = (s1 + s2 + s3)/2;
	return sqrt(s*(s - s1)*(s - s2)*(s - s3));
}
void Triangle::printPerimeter(){
	cout << calcPerimeter();
}
void Triangle::printArea(){
	cout << calcArea();
}
