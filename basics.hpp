/* 3D-Graphics-Engine-Build */
/* File basics.hpp*/
/* Basic classes for the 3D game-engine: Point and Vector */
/* © 2017 Alejandro Muñoz Del Álamo  */

#ifndef BASICS_HPP_
#define BASICS_HPP_

#include <iostream>	// Used for cin and cout
#include <math.h> // Used for math functions


// Previous declaration of Vector
class Vector;

// Point class declaration
class Point
{
// Public part of the class Point
public:

	// Constructor
	Point(double x = 0.0, double y = 0.0, double z = 0.0);

	// Modifier Methods
	double x() {return x_;}
	double y() {return y_;}
	double z() {return z_;}

	Point AddVectorToPoint(const Vector& v);
	Point SubtractVectorFromPoint(const Vector& v);
	Vector SubtractPointFromPoint(const Point& p);

	// Observer Methods
	double x() const {return x_;}
	double y() const {return y_;}
	double z() const {return z_;}

	void drawPoint() const;

// Private part of the class Point
private:

	// Atributes
	double x_,y_,z_;
};

class Vector
{
// Public part of the class Point
public:

	// Constructor
	Vector(double x = 0.0, double y = 0.0, double z = 0.0);

	// Modifier Methods
	double x() {return x_;}
	double y() {return y_;}
	double z() {return z_;}

	Vector AddVectorToVector(const Vector& v);
	Vector SubtractVectorFromVector(const Vector& v);

	// Rotating Methods
	Vector RotateXY(const double g);
	Vector RotateXZ(const double g);
	Vector RotateYZ(const double g);

	// Observer Methods
	double x() const {return x_;}
	double y() const {return y_;}
	double z() const {return z_;}


// Private part of the class Vector
private:

	// Atributes
	double x_,y_,z_;

};

#endif // BASICS_HPP_