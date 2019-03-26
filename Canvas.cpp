/*
* @ClassName: Canvas.cpp
* @Function: A class which models a drawing surface in which the cells each store a character.
* It is called by all shapes as a parameter in method draw().
* @author: Lin Li 40044486
* @version: 1.0
* @date: Aug 9, 2018
*/

#include "Canvas.h"
#include <vector>
#include <iostream>
using namespace std;


//A constructor that accepts initial values for the Canvas's rows and columns
Canvas::Canvas(int rows, int cols) : heigth(rows), width(cols)
{
	cell.resize(heigth);
	for (int i = 0; i < heigth; ++i){
		cell[i].resize(width);
	}
		
	for (int i = 0; i < heigth; i++){
		for (int j = 0; j < width; j++){
			cell[i][j] = ' ';
		}			
	}
}



/*A constructor that accepts initial values for the Canvas's rows and columns and char to till the canvas
The parameters rows and cols represent, respectively, the number of rows and columns
of the canvas under construction.This constructor should initialize every cell with the
character fillCh, which defaults to a blank.*/
Canvas::Canvas(int rows, int cols, char fillCh = ' ') : heigth(rows), width(cols)
{
	cell.resize(heigth);
	for (int i = 0; i < heigth; ++i) {
		cell[i].resize(width);
	}

	for (int i = 0; i < heigth; i++) {
		for (int j = 0; j < width; j++) {
			cell[i][j] = fillCh;
		}
	}
}

/*
* Subscript operator [] overloads, const versions. These operators do not check against bounds, 
* as they effectively reflect the corresponding operators of the underlying vectors.
* @param int
* @return vector<char> &
*/
vector<char> & Canvas::operator[](int i){
	return cell[i];
}

/*
* Subscript operator [] overloads, non-const versions. These operators do not check against bounds, 
* as they effectively reflect the corresponding operators of the underlying vectors.
* @param int
* @return vector<char> &
*/
const vector<char> & Canvas::operator[](int i) const {
	return cell[i];
}

/*
* A put(int r, int c, char ch='*') function that writes ch in the cell at row r and column c.
* This function checks against bounds, and it simply ignores(clips) writes that land outside its boundaries.
* @param int, int, char
* @return void
*/
void Canvas::put(int r, int c, char ch = '*'){
	if (inBounds(r, c))
	{
		cell[r][c] = ch;
	}
}

/*
* A getHeight() method that returns the canvas height (rows).
* @param void
* @return int
*/
int Canvas::getHeight() const{
	return heigth;
}

/*
* A getWidth()method that returns the canvas width (columns).
* @param void
* @return int
*/
int Canvas::getWidth() const {
	return width;
}

/*
* An inBounds(int, int) method that determines whether the specied row and column positions are inside the bounds of this canvas.
* @param int, int
* @return bool
*/
bool Canvas::inBounds(int row, int column) const{
	return (row < heigth && column < width);
}

/*
* A clear() method that writes the cells with blank.
* @param void
* @return void
*/
void Canvas::clear(){
	for (int i = 0; i < heigth; ++i) {
		for (int j = 0; j < width; ++j) { 
			cell[i][j] = ' ';
		}
	}
}

/*
* A clear() method that takes an fill character and writes the cells with that character
* @param char
* @return void
*/
void Canvas::clear(char c) {
	for (int i = 0; i < heigth; ++i) {
		for (int j = 0; j < width; ++j) {
			cell[i][j] = c;
		}
	}
}

/*
* An output operator overload that writes the entire canvas cells to a given ostream.
* @param char
* @return void
*/
ostream & operator<<(ostream & out, Canvas & c)
{
	for (int i = 0; i < c.getHeight(); ++i){
		for (int j = 0; j < c.getWidth(); ++j){
			cout << c[i][j];
		}
		cout << endl;
	}
	return out;
}
