/*
* @ClassName: Canvas.h
* @Function: Header file of Canvas.cpp, a class which models a drawing surface in which the cells each store a character.
* It is called by all shapes as a parameter in method draw().
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#pragma once
#include <vector>
using namespace std;

class Canvas
{
	friend ostream & operator<<(ostream& out, Canvas& c);//declare a Overload << operator to print as friend

public:

	Canvas(int rows, int cols); //A constructor that accepts initial values for the Canvas's rows and columns
	Canvas(int rows, int cols, char fillCh); //A constructor that accepts initial values for the Canvas's rows and columns and char to till the canvas
	Canvas(const Canvas& s) = default; //Default copy constructor
	~Canvas() = default; //Default destructor

	vector<char>& operator[](int i); //subscript operator overload const for read and write
	const vector<char>& operator[](int i) const; //subscript operator overload const for read

	void put(int r, int c, char ch); //A put(int r, int c, char ch='*') function that writes ch in the cell at row r and column c.
	int getHeight() const; //A getHeight() method that returns the canvas height (rows).
	int getWidth() const; //A getWidth()method that returns the canvas width (columns).
	bool inBounds(int row, int column) const; //An inBounds(int, int) method that determines whether the specied row and column positions are inside the bounds of this canvas.
	void clear(); //A clear() method that writes the cells with blank.
	void clear(char c); //A clear() method that takes an fill character and writes the cells with that character

private:
	vector<vector<char>> cell;
	int heigth;
	int width;
};
