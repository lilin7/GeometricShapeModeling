/*
* @ClassName: Rectangle.cpp
* @Function: A inheritance hierarchy class derived from Shape calss, representing concrete geometric shape of Rectangle
* It inherits members and methods from Shape class, override some of the methods, and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Rectangle.h"
using namespace std;

//Default constructor
Rectangle::Rectangle(){}

//A constructor that accepts initial values for the Rectangle's width and height,
//also uses the base class Shape to initialize the Rectangle object's description and name
Rectangle::Rectangle(int w, int h) : width(w), height(h), Shape("Class Rectangle", "Rectangle") {}

//A constructor that accepts initial values for the Rectangle's width and height,
//also uses the base class Shape to initialize the Rectangle object's description and name
Rectangle::Rectangle(int w, int h, string d) : width(w), height(h), Shape(d, "Rectangle"){}

/*
* Override the getId() from Shape class, get the id of Rectangle object
* @param void
* @return int
*/
int Rectangle::getId() const{ 
	return id;
}

/*
* Get height of Rectangle object
* @param void
* @return int
*/
int Rectangle::getHeight() const {
	return height;
}
/*
* Get width of Rectangle object
* @param void
* @return int
*/
int Rectangle::getWidth() const {
	return width;
}
/*
* A method to compute the height of bounding box, an override of Shape class
* @param void
* @return int
*/
int Rectangle::heightBBox() const{
	return height;
}
/*
* A method to compute the width of bounding box, an override of Shape class
* @param void
* @return int
*/
int Rectangle::widthBBox() const{
	return width;
}
/*
* A method to compute the object's geometric area, a override of Shape class
* @param void
* @return int
*/
double Rectangle::geoArea() const{
	return height * width;
}
/*
* A method to compute the object's geometric perimeter, a override of Shape class
* @param void
* @return int
*/
double Rectangle::geoPerimeter() const{
	return (height + width) * 2;
}
/*
* A method to compute the object's screen area: the number of characters that form the textual image 
* of the shape; an override of Shape class
* @param void
* @return int
*/
int Rectangle::scrArea() const{
	return height * width;
}

/*
* A method to compute the object's screen Perimeter: the number of characters on the borders 
* of the textual image of the shape; an override of Shape class
* @param void
* @return int
*/
int Rectangle::scrPerimeter() const{
	return (height + width) * 2 - 4;
}

/*
* A method to draw a textual image for the object on a given drawing surface named Canvas
* an override of Shape class
* @param Canvas &, int, int, char, char
* @return void
*/
void Rectangle::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	for (int r = 0; r < this->getHeight(); r++) // rows
	{
		for (int c = 0; c < this->getWidth(); c++) // columns
		{
			canvas[row + r][col + c] = fChar; // unchecked by vector
			// canvas .put (row + r, col + c, fChar ); // checked by Canvas
		}
	}
}