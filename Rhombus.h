/*
* @ClassName: Rhombus.h
* @Function: Header file of Rhombus.cpp, a inheritance hierarchy class derived from Shape calss,
* representing concrete geometric shape of Rhombus. It inherits members and methods from Shape class,
* override some of the methods, and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include "Shape.h"

class Rhombus : public Shape
{
public:
	Rhombus(); //Default constructor
	Rhombus(int d); //A constructor that accepts initial values for the Rhombus's diameter
	Rhombus(int d, const string & des); //A constructor that accepts initial values for the Rhombus's width and height,
	Rhombus(const Rhombus& r) = default; //Default copy constructor
	~Rhombus() = default; //Default destructor

	int getId() const; //Override the getId() from Shape class, get the id of Rhombus object

	int getDiagonalHorizontal() const; //Get DiagonalHorizontal of Rhombus object

	int heightBBox() const; //A method to compute the height of bounding box, an override of Shape class
	int widthBBox() const;//A method to compute the width of bounding box, an override of Shape class

	double geoArea() const; //A method to compute the object's geometric area, an override of Shape class
	double geoPerimeter() const; //A method to compute the object's geometric perimeter, an override of Shape class
	int scrArea() const; //A method to compute the object's screen area, an override of Shape class
	int scrPerimeter() const; //A method to compute the object's screen perimeter, an override of Shape class

	void draw(Canvas & canvas, int row, int col, char fChar, char bChar = ' ') const; //A method to draw a textual image for the object on a given drawing surface named Canvas, an override of Shape class

private:
	int diagonalHorizontal; //length of horizontal attribute of the Rhombus object, unique member of Rhombus class
};


