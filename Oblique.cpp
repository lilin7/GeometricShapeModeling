/*
* @ClassName: Oblique.cpp
* @Function: A inheritance hierarchy class derived from Shape and Isosceles calsses,
* representing concrete geometric shape of Oblique. It inherits members and methods from Shape and Isosceles classes,
* and also has its own members and methods.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Oblique.h"
using namespace std;

//Default constructor
Oblique::Oblique() {}

//A constructor that accepts initial values for the Oblique's base,
//also uses the base class Isosceles to initialize the Oblique object's description and name
Oblique::Oblique(int b) : Isosceles("Class Oblique", "Oblique")
{
	if (b % 2 == 0)
		base = b+1;
	else
		base = b;

	height = (static_cast<double>(base) + 1) / 2;
}

//A constructor that accepts initial values for the Oblique's base,
//also uses the base class Isosceles to initialize the Oblique object's description and name
Oblique::Oblique(int b, const string & des) : Isosceles (des, "Oblique")
{
	if (b % 2 == 0)
		base = b + 1;
	else
		base = b;

	height = (static_cast<double>(base) + 1) / 2;
}

/*
* Override the getId() from Isosceles class, get the id of Oblique object
* @param void
* @return int
*/
int Oblique::getId() const {
	return id;
}

/*
* A method to compute the height of bounding box, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int Oblique::heightBBox() const {
	return height;
}
/*
* A method to compute the width of bounding box, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int Oblique::widthBBox() const {
	return base;
}
/*
* A method to compute the object's geometric area, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
double Oblique::geoArea() const {
	return static_cast<double>(height * base / 2.0);
}
/*
* A method to compute the object's geometric perimeter, an override of Shape and Isosceles calsses
* @param void
* @return int
*/
double Oblique::geoPerimeter() const {
	return static_cast<double>(base + 2.0 * sqrt(0.25*pow(base, 2.0) + pow(height, 2.0)));
}
/*
* A method to compute the object's screen area: the number of characters that form the textual image
* of the shape; an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int Oblique::scrArea() const {
	return static_cast<int>(pow(height, 2));
}

/*
* A method to compute the object's screen Perimeter: the number of characters on the borders
* of the textual image of the shape; an override of Shape and Isosceles calsses
* @param void
* @return int
*/
int Oblique::scrPerimeter() const {
	return static_cast<int>(4 * (height - 1));
}

/*
* A method to draw a textual image for the object on a given drawing surface named Canvas
* an override of Shape and Isosceles calsses
* @param Canvas &, int, int, char, char
* @return void
*/
void Oblique::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	for (int i = 1; i <= this->getHeight(); i++)
	{
		for (int j = 1; j <= this->getHeight() - i; j++)
		{
			canvas.put(row + i - 1, col + j - 1, ' ');
		}
		for (int k = this->getHeight(); k > this->getHeight() - i; k--)
		{
			canvas.put(row + i - 1, col + k - 1, fChar);
		}
		for (int j = this->getBase() + 1; j > this->getHeight() + i; j--)
		{
			canvas.put(row + i - 1, col + j - 2, ' ');
		}
		for (int k = this->getHeight() + 1; k < this->getHeight() + i; k++)
		{
			canvas.put(row + i - 1, col + k - 1, fChar);
		}
	}
}