/*
* @ClassName: Oblique.h
* @Function: Header file of Oblique.cpp, a inheritance hierarchy class derived from Shape and Isosceles calsses,
* representing concrete geometric shape of Oblique. It inherits members and methods from Shape and Isosceles classes,
* override some of the methods, and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include "Shape.h"
#include "Isosceles.h"

class Oblique : public Isosceles
{
public:
	Oblique(); //Default constructor
	Oblique(int b); //A constructor that accepts initial values for the Oblique's base
	Oblique(int b, const string & des); //A constructor that accepts initial values for the Oblique's base and description
	Oblique(const Oblique& ob) = default; //Default copy constructor
	~Oblique() = default; //Default destructor

	int getId() const; //Override the getId() from Shape and Isosceles calsses, get the id of Oblique object

	int heightBBox() const; //A method to compute the height of bounding box, an override of Shape and Isosceles calsses
	int widthBBox() const;//A method to compute the width of bounding box, an override of Shape and Isosceles calsses

	double geoArea() const; //A method to compute the object's geometric area, an override of Shape and Isosceles calsses
	double geoPerimeter() const; //A method to compute the object's geometric perimeter, an override of Shape and Isosceles calsses
	int scrArea() const; //A method to compute the object's screen area, an override of Shape and Isosceles calsses
	int scrPerimeter() const; //A method to compute the object's screen perimeter, an override of Shape and Isosceles calsses

	void draw(Canvas & canvas, int row, int col, char fChar, char bChar = ' ') const; //A method to draw a textual image for the object on a given drawing surface named Canvas, an override of Shape and Isosceles calsses
};



