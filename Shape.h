/*
* @ClassName: Shape.cpp
* @Function: Header file of Shape.cpp, an abstract class which serves as a common interface to all classes in the inheritance hierarchy,
* but also makes polymorphism possible through Shape* and Shape& variables.
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include "Canvas.h"
#include <string>
using namespace std;

class Shape
{
	friend ostream & operator << (ostream & out, const Shape & shape); //declare as friend function of Shape class

public:
	Shape(); //Default constructor
	Shape(string d, string n); //A constructor that accepts initial values for the Shape's description and name.
	Shape(const Shape& s) = default; //Default copy constructor
	~Shape() = default; //Default destructor

	//Three accessor(getter) methods, one for each attribute;
	virtual int getId() const; //Get the id (static member) of Shape object at construction
	string getName() const; //Get the name of Shape object
	string getDescription() const; //Get the description of Shape object

	//Two mutator (setter) methods to set the object's name and description;
	void setName(string n); //Set the name for Shape object
	void setDescription(string d); //Set the description for Shape object

	//A method that generates and returns a string representation for the shape object;
	string staticType() const;//A method that generates and returns a string representation (static type) for the Shape object
	string dynamicType() const;//A method that generates and returns a string representation (dynamic type) for the shape object	

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

	//A toString method that print information of object of Shape and its derived classes
	string toString() const;
	
protected:
	int id = 0; //A distinct identity number, an integer, which is to be generated automatically at construction.
	string name; //An optional user supplied name, such as "Swimming Pool" for the shape object; defaults to the object's class name.
	string description;	//An optional user supplied description of the shape object, such as "Montreal's Olympic Stadium"; defaults to the word \Class" followed by the object's class name.

	static int countID;	//a static int memeber of Shape class to count the id of objects of Shape class and its derived classes
};
