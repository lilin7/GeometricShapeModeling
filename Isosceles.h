/*
* @ClassName: Isosceles.cpp
* @Function: Header file of Isosceles.cpp, an abstract class which inherited from Shape class, 
* and serves as a common interface to triangle classes in the inheritance hierarchy
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include "Shape.h"
//#include <string>
using namespace std;

class Isosceles : public Shape
{
public:
	Isosceles(); //Default constructor
	Isosceles(string d, string n); //A constructor that accepts initial values for the Shape's description and name.
	Isosceles(const Isosceles& s) = default; //Default copy constructor
	~Isosceles() = default; //Default destructor

	//Three accessor(getter) methods, one for each attribute;
	virtual int getId() const = 0; //Get the id (static member) of object at construction
	int getBase() const; //Get the base of object
	double getHeight() const; //Get the height of object

	//Two mutator (setter) methods to set the object's base and height;
	void setBase(int); //Set the base of object
	void setHeight(double);//Set the height of object

	//A method to compute the height of bounding box, will be override by all derived classes
	virtual int heightBBox() const = 0;

	//A method to compute the width of bounding box, will be override by all derived classes
	virtual int widthBBox() const = 0;;

	//A method to compute the object's geometric area, will be override by all derived classes
	virtual double geoArea() const = 0;

	//A method to compute the object's geometric perimeter, will be override by all derived classes
	virtual double geoPerimeter() const = 0;

	//A method to compute the object's screen area: the number of characters that form the textual image of the shape, will be override by all derived classes
	virtual int scrArea() const = 0;

	//A method to compute the object's screen perimeter : the number of characters on the borders of the textual image of the shape;
	virtual int scrPerimeter() const = 0;

	//A method to draw a textual image for the shape object on a given drawing surface named Canvas, will be override by all derived classes
	virtual void draw(Canvas & canvas, // a drawing surface
		int row, // the y (row ) coordinate of the bounding box to be drawn .
		int col, // the x ( column ) coordinate of the bounding box to be drawn .
		char foreChar = '*', // foreground char
		char backChar = ' ') // background char
		const = 0;

protected:
	int base; //length of base of the triangle object, unique member of Isosceles class and classes derived from it
	double height;  //height of the triangle object, unique member of Isosceles class and classes derived from it
};
