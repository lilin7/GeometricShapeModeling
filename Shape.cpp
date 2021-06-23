/*
* @ClassName: Shape.cpp
* @Function: An abstract class which serves as a common interface to all classes in the inheritance hierarchy, 
* but also makes polymorphism possible through Shape* and Shape& variables.
* @author: Lin Li 
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Shape.h"
#include <iostream>
#include <typeinfo>
#include <iomanip>
#include <sstream>
using namespace std;

//Default constructor
Shape::Shape() : name("default shape name"), description("default shape description"){}

//A constructor that accepts initial values for the Shape's description and name.
Shape::Shape(string d, string n) : description(d), name(n){
	id = getId();
}

//Three accessor(getter) methods, one for each attribute;
/*
* Get the id (static member) of Shape object, increment 1 for each object including that of derived class
* @param void
* @return int
*/
int Shape::getId() const {
	countID++;
	return countID;
}
/*
* Get the name of Shape object
* @param void
* @return string
*/
string Shape::getName() const {
	return this->name;
}
/*
* Get the description of Shape object
* @param void
* @return string
*/
string Shape::getDescription() const {
	return this->description;
}

//Two mutator (setter) methods to set the object's name and description;
/*
* Set the name for Shape object
* @param string
* @return void
*/
void Shape::setName(string n){
	name = n;
}
/*
* Set the description for Shape object
* @param string
* @return void
*/
void Shape::setDescription(string d){
	description = d;
}

/*
* A method that generates and returns a string representation (static type) for the Shape object
* @param void
* @return string
*/
string Shape::staticType() const{
	return typeid(this).name();
}
/*
* A method that generates and returns a string representation (dynamic type) for the shape object
* @param void
* @return string
*/
string Shape::dynamicType() const{
	return typeid(*this).name();
}

/*
* A toString method that print information of object of Shape and its derived classes
* @param void
* @return string
*/
string Shape::toString() const
{
	stringstream ss;
	ss << "Shape Information" << endl;
	ss << "------------------" << endl;
	ss << left << setw(18) << "Static type:" << staticType() << endl;
	ss << left << setw(18) << "Dynamic type:" << dynamicType() << endl;
	ss << left << setw(18) << "Shape name:" << getName() << endl;
	ss << left << setw(18) << "Description:" << getDescription() << endl;
	ss << left << setw(18) << "id:" << getId() << endl;
	ss << left << setw(18) << "B. box width:" << widthBBox() << endl;
	ss << left << setw(18) << "B. box height:" << heightBBox() << endl;
	ss << left << setw(18) << "Scr area:" << scrArea() << endl;
	ss << left << setw(18) << "Geo area:" << fixed << setprecision(2) << geoArea() << endl;
	ss << left << setw(18) << "Scr perimeter:" << scrPerimeter() << endl;
	ss << left << setw(18) << "Geo perimeter:" << fixed << setprecision(2) << geoPerimeter();

	return ss.str();
}

/*
* operator << overload
* @param ostream &, const Shape &
* @return ostream &
*/
ostream & operator << (ostream & out, const Shape & shape)
{
	out << shape.toString();
	return out;
}

//initilize the static int member to count the id of objects of Shape class and its derived classes
int Shape::countID = 0;
