/*
* @ClassName: RightTriangle.h
* @Function: Header file of RightTriangle.cpp, a inheritance hierarchy class derived from Shape and Isosceles calsses,
* representing concrete geometric shape of RightTriangle. It inherits members and methods from Shape and Isosceles classes,
* override some of the methods, and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include "Shape.h"
#include "Isosceles.h"

class RightTriangle : public Isosceles
{
public:
	RightTriangle(); //Default constructor
	RightTriangle(int b); //A constructor that accepts initial values for the RightTriangle's base
	RightTriangle(int b, const string & des); //A constructor that accepts initial values for the RightTriangle's base and description
	RightTriangle(const RightTriangle& ob) = default; //Default copy constructor
	~RightTriangle() = default; //Default destructor

	int getId() const; //Override the getId() from Shape and Isosceles calsses, get the id of RightTriangle object

	int heightBBox() const; //A method to compute the height of bounding box, an override of Shape and Isosceles calsses
	int widthBBox() const;//A method to compute the width of bounding box, an override of Shape and Isosceles calsses

	double geoArea() const; //A method to compute the object's geometric area, an override of Shape and Isosceles calsses
	double geoPerimeter() const; //A method to compute the object's geometric perimeter, an override of Shape and Isosceles calsses
	int scrArea() const; //A method to compute the object's screen area, an override of Shape and Isosceles calsses
	int scrPerimeter() const; //A method to compute the object's screen perimeter, an override of Shape and Isosceles calsses

	void draw(Canvas & canvas, int row, int col, char fChar, char bChar = ' ') const; //A method to draw a textual image for the object on a given drawing surface named Canvas, an override of Shape and Isosceles calsses
};



