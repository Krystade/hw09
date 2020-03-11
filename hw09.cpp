//============================================================================
// Name        : hw09.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw09.h"


int main() {
	Rectangle * prect = new Rectangle(10, 15);
	cout << "Rectangle\nPerimeter\n";
	printPerimeter(*prect);
	cout << "\nArea\n";
	printArea(*prect);
	Triangle * ptri = new Triangle(3, 4, 5);
	cout << "\nTriangle\nPerimeter\n";
	printPerimeter(*ptri);
	cout << "\nArea\n";
	printArea(*ptri);
	cout << endl;
	prect->print();
	ptri->print();

	return 0;
}


void printPerimeter(Shape s){
	cout << s.calcPerimeter();
}
void printArea(Shape s){
	cout << s.calcArea();
}
