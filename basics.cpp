/* 3D-Graphics-Engine-Build */
/* File basics.cpp*/
/* Basic classes for the 3D game-engine: Point and vector */
/* © 2017 Alejandro Muñoz Del Álamo */

#include "basics.hpp"

// Point Class Constructor
Point::Point(double x = 0.0, double y = 0.0, double z = 0.0): x_(x),y_(y),z_(z){}

// Point Modifier Methods
Point& Point::AddVectorToPoint(const Vector& v)
{
	Point p(this->x() + v.x(), this->y() + v.y(), this->z() + v.z());
	return *p; 
}

Point& Point::SubtractVectorFromPoint(const Vector& v)
{
	Point p(this->x() - v.x(), this->y() - v.y(), this->z() - v.z());
	return *p;
}

Vector& Point::SubtractPointFromPoint(const Point& p)
{
	Vector v(this->x() - p.x(), this->y() - p.y(), this->z() - p.z());
	return *v;
}

// Point Observer Methods
void drawPoint() const
{
	cout << endl << "Coordinate X: " << this->x() << endl 
				 << "Coordinate Y: " << this->y() << endl 
				 << "Coordinate Z: " << this->z() << endl << endl;
}

// Vector Class Constructor
Vector::Vector(double x = 0.0, double y = 0.0, double z = 0.0): x_(x),y_(y),z_(z){}

// Vector Modifier Methods
Vector& Vector::AddVectorToVector(const Vector& v)
{
	Vector v(this->x() + v.x(), this->y() + v.y(), this->z() + v.z());
	return *v;
}

Vector& Vector::SubtractVectorFromVector(const Vector& v)
{
	Vector v(this->x() - v.x(), this->y() - v.y(), this->z() - v.z());
	return *v;
}