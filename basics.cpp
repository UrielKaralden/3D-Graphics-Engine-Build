/* 3D-Graphics-Engine-Build */
/* File basics.cpp*/
/* Basic classes for the 3D game-engine: Point and vector */
/* © 2017 Alejandro Muñoz Del Álamo */

#include "basics.hpp"


// Point Class Constructor
Point::Point(double x, double y, double z): x_(x),y_(y),z_(z){}

// Point Modifier Methods
Point Point::AddVectorToPoint(const Vector& v)
{
	this->x_ = this->x()+v.x();
	this->y_ = this->y()+v.y();
	this->z_ = this->z()+v.z();
	return *this; 
}

Point Point::SubtractVectorFromPoint(const Vector& v)
{
	this->x_ = this->x()-v.x();
	this->y_ = this->y()-v.y();
	this->z_ = this->z()-v.z();
	return *this; 
}

Vector Point::SubtractPointFromPoint(const Point& p)
{
	Vector v(this->x() - p.x(), this->y() - p.y(), this->z() - p.z());
	return v;
}

// Point Observer Methods
void Point::drawPoint() const
{
	std::cout << std::endl << "Coordinate X: " << this->x() << std::endl 
				 << "Coordinate Y: " << this->y() << std::endl 
				 << "Coordinate Z: " << this->z() << std::endl << std::endl;
}

// Vector Class Constructor
Vector::Vector(double x, double y, double z): x_(x),y_(y),z_(z){}

// Vector Modifier Methods
Vector Vector::AddVectorToVector(const Vector& v)
{
	this->x_ = this->x()-v.x();
	this->y_ = this->y()-v.y();
	this->z_ = this->z()-v.z();
	return *this; 
}

Vector Vector::SubtractVectorFromVector(const Vector& v)
{
	Vector w(this->x() - v.x(), this->y() - v.y(), this->z() - v.z());
	return w;
}
