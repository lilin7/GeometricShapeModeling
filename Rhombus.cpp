/*
* @ClassName: Rhombus.cpp
* @Function: A inheritance hierarchy class derived from Shape calss, representing concrete geometric shape of Rhombus
* It inherits members and methods from Shape class, override some of the methods, and also has its own members and methods.
* @author: Lin Li 
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Rhombus.h"
using namespace std;

//Default constructor
Rhombus::Rhombus() {}

//A constructor that accepts initial values for the Rhombus's diagonalHorizontal,
//also uses the base class Shape to initialize the Rhombus object's description and name
Rhombus::Rhombus(int d) : Shape("Class Rhombus", "Rhombus")
{
	if (d % 2 == 0)
		diagonalHorizontal = d+1;
	else
		diagonalHorizontal = d;
}

//A constructor that accepts initial values for the Rhombus's diagonalHorizontal,
//also uses the base class Shape to initialize the Rhombus object's description and name
Rhombus::Rhombus(int d, const string & des) : Shape(des, "Rhombus")
{
	if (d % 2 == 0)
		diagonalHorizontal = ++d;
	else
		diagonalHorizontal = d;
}

/*
* Override the getId() from Shape class, get the id of Rhombus object
* @param void
* @return int
*/
int Rhombus::getId() const {
	return id;
}

/*
* Get diagonalHorizontal of Rhombus object
* @param void
* @return int
*/
int Rhombus::getDiagonalHorizontal() const {
	return diagonalHorizontal;
}

/*
* A method to compute the height of bounding box, an override of Shape class
* @param void
* @return int
*/
int Rhombus::heightBBox() const {
	return diagonalHorizontal;
}
/*
* A method to compute the width of bounding box, an override of Shape class
* @param void
* @return int
*/
int Rhombus::widthBBox() const {
	return diagonalHorizontal;
}
/*
* A method to compute the object's geometric area, a override of Shape class
* @param void
* @return int
*/
double Rhombus::geoArea() const {
	return diagonalHorizontal * diagonalHorizontal / 2.00;
}
/*
* A method to compute the object's geometric perimeter, a override of Shape class
* @param void
* @return int
*/
double Rhombus::geoPerimeter() const {
	return 2.00*sqrt(2)*diagonalHorizontal;
}
/*
* A method to compute the object's screen area: the number of characters that form the textual image
* of the shape; an override of Shape class
* @param void
* @return int
*/
int Rhombus::scrArea() const {
	const double n = floor(diagonalHorizontal / 2);
	return static_cast<int>(2 * n*(n + 1) + 1);
}

/*
* A method to compute the object's screen Perimeter: the number of characters on the borders
* of the textual image of the shape; an override of Shape class
* @param void
* @return int
*/
int Rhombus::scrPerimeter() const {
	return 2 * (diagonalHorizontal - 1);
}

/*
* A method to draw a textual image for the object on a given drawing surface named Canvas
* an override of Shape class
* @param Canvas &, int, int, char, char
* @return void
*/
void Rhombus::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	auto n = ceil(this->getDiagonalHorizontal() / 2.0);
	for (int r = 1; r <= this->getDiagonalHorizontal(); r++)
	{
		if (r <= n)
		{
			for (int c = 1; c <= this->getDiagonalHorizontal(); c++)
			{
				if (c< r + n && c > n - r)
					canvas.put(row + r - 1, col + c - 1, fChar);
				else
					canvas.put(row + r - 1, col + c - 1, bChar);
			}
		}
		else
		{
			for (int c = 1; c <= this->getDiagonalHorizontal(); c++)
			{
				if (c >= r - n + 1 && c <= 3 * this->getDiagonalHorizontal() / 2 + 1 - r)
					canvas.put(row + r - 1, col + c - 1, fChar);
				else
					canvas.put(row + r - 1, col + c - 1, bChar);
			}
		}
	}
}
