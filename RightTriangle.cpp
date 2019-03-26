/*
* @ClassName: RightTriangle.cpp
* @Function: A inheritance hierarchy class derived from Shape and Isosceles calsses,
* representing concrete geometric shape of RightTriangle. It inherits members and methods from Shape and Isosceles classes,
* and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "RightTriangle.h"
using namespace std;

//Default constructor
RightTriangle::RightTriangle() {}

//A constructor that accepts initial values for the RightTriangle's base,
//also uses the base class Isosceles to initialize the RightTriangle object's description and name
RightTriangle::RightTriangle(int b) : Isosceles("Class RightTriangle", "RightTriangle")
{
	base = b;
	height = b;
}

//A constructor that accepts initial values for the RightTriangle's base,
//also uses the base class Isosceles to initialize the RightTriangle object's description and name
RightTriangle::RightTriangle(int b, const string & des) : Isosceles(des, "RightTriangle")
{
	base = b;
	height = b;
}

/*
* Override the getId() from Isosceles class, get the id of RightTriangle object
* @param void
* @return int
*/
int RightTriangle::getId() const {
	return id;
}

/*
* A method to compute the height of bounding box, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int RightTriangle::heightBBox() const {
	return height;
}
/*
* A method to compute the width of bounding box, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int RightTriangle::widthBBox() const {
	return base;
}
/*
* A method to compute the object's geometric area, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
double RightTriangle::geoArea() const {
	return static_cast<double>(height * base / 2.0);
}
/*
* A method to compute the object's geometric perimeter, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
double RightTriangle::geoPerimeter() const {
	return (2 + sqrt(2))*height;
}
/*
* A method to compute the object's screen area: the number of characters that form the textual image
* of the shape; an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int RightTriangle::scrArea() const {
	return static_cast<int>(height * (height + 1) / 2);
}

/*
* A method to compute the object's screen Perimeter: the number of characters on the borders
* of the textual image of the shape; an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int RightTriangle::scrPerimeter() const {
	return static_cast<int>(3 * (height - 1));
}

/*
* A method to draw a textual image for the object on a given drawing surface named Canvas
* an override of Shape and Isosceles calsses
* @param Canvas &, int, int, char, char
* @return void
*/
void RightTriangle::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	for (int i = 1; i <= this->getHeight(); i++)
	{
		for (int j = 1; j <= i; j++)
		{
			canvas.put(row + i - 1, col + j - 1, fChar);
		}
		for (int k = this->getHeight(); k > i; k--)
		{
			canvas.put(row + i - 1, col + k - 1, ' ');
		}
	}
}