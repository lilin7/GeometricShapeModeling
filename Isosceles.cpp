/*
* @ClassName: Isosceles.cpp
* @Function: An abstract class which inherited from Shape class, and serves as a common 
* interface to triangle classes in the inheritance hierarchy
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Shape.h"
#include "Isosceles.h"
using namespace std;

//Default constructor
Isosceles::Isosceles(){}

//A constructor that accepts initial values for the Shape's description and name.
Isosceles::Isosceles(string d, string n) : Shape(d, n) {}

/*
* Get base of Isosceles object
* @param void
* @return int
*/
int Isosceles::getBase() const{
	return base;
}

/*
* Get height of Isosceles object
* @param void
* @return double
*/
double Isosceles::getHeight() const{
	return height;
}

/*
* Set base of Isosceles object
* @param int
* @return void
*/
void Isosceles::setBase(int b) {
	base = b;
}

/*
* Set height of Isosceles object
* @param int
* @return void
*/
void Isosceles::setHeight(double h){
	height = h;	
}