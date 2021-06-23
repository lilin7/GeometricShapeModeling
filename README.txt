/*
* Lin Li
*/

This program implements the Shape inheritance class hierarchy and makes it possible to create concrete shapes including Rectangle, Rhombus, Right Triangle, Oblique Triangle, and print information of each shape as requested by task 1. It also implements those shapes to be drawn in a drawing surface with a class called "Canvas", as requested by task 2. Running this program to get a drawing of a house and information of all shapes which form this house.

Shape.h, Shape.cpp:
An abstract class which serves as a common interface to all classes in the inheritance hierarchy, but also makes polymorphism possible through Shape* and Shape& variables.

Isosceles.h, Isosceles.cpp:
An abstract class which inherited from Shape class, and serves as a common interface to triangle classes in the inheritance hierarchy.

Oblique.h, Oblique.cpp:
A inheritance hierarchy class derived from Shape and Isosceles calsses, representing concrete geometric shape of Oblique. It inherits members and methods from Shape and Isosceles classes, and also has its own members and methods.

RightTriangle.h, RightTriangle.cpp:
A inheritance hierarchy class derived from Shape and Isosceles calsses, representing concrete geometric shape of RightTriangle. It inherits members and methods from Shape and Isosceles classes, and also has its own members and methods.

Rectangle.h, Rectangle.cpp:
A inheritance hierarchy class derived from Shape calss, representing concrete geometric shape of Rectangle. It inherits members and methods from Shape class, override some of the methods, and also has its own members and methods.

Rhombus.h, Rhombus.cpp:
A inheritance hierarchy class derived from Shape calss, representing concrete geometric shape of Rhombus. It inherits members and methods from Shape class, override some of the methods, and also has its own members and methods.

Canvas.h, Canvas.cpp:
A class which models a drawing surface in which the cells each store a character. It is called by all shapes as a parameter in method draw().

ShapeTestDriver.cpp:
A test driver class to draw a shape of a house using different shapes and print the information of each shape used. It uses both early binding and late binding.
