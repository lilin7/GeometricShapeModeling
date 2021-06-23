/*
* @ClassName: Rectangle.h
* @Function: Header file of Rectangle.cpp, a inheritance hierarchy class derived from Shape calss, 
* representing concrete geometric shape of Rectangle. It inherits members and methods from Shape class, 
* override some of the methods, and also has its own members and methods.
* @author: Lin Li 
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include "Shape.h"

class Rectangle: public Shape
{
public:
	Rectangle(); //Default constructor
	Rectangle(int h, int w); //A constructor that accepts initial values for the Rectangle's width and height
	Rectangle(int h, int w, string d); //A constructor that accepts initial values for the Rectangle's width and height,
	Rectangle(const Rectangle& s) = default; //Default copy constructor
	~Rectangle() = default; //Default destructor

	int getId() const; //Override the getId() from Shape class, get the id of Rectangle object

	int getHeight() const; //Get height of Rectangle object
	int getWidth() const; //Get width of Rectangle object

	int heightBBox() const; //A method to compute the height of bounding box, an override of Shape class
	int widthBBox() const;//A method to compute the width of bounding box, an override of Shape class
	
	double geoArea() const; //A method to compute the object's geometric area, an override of Shape class
	double geoPerimeter() const; //A method to compute the object's geometric perimeter, an override of Shape class
	int scrArea() const; //A method to compute the object's screen area, an override of Shape class
	int scrPerimeter() const; //A method to compute the object's screen perimeter, an override of Shape class

	void draw(Canvas & canvas, int row, int col, char fChar, char bChar = ' ') const; //A method to draw a textual image for the object on a given drawing surface named Canvas, an override of Shape class

private:
	int height; //height of the Rectangle object, unique member of Rectangle class
	int width;  //width of the Rectangle object, unique member of Rectangle class
};


