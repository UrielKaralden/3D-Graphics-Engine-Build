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

void SetPointToPoint(const Point& p)
{
	this->x_ = p.x();
	this->y_ = p.y();
	this->z_ = p.z();
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
	this->x_ = this->x()+v.x();
	this->y_ = this->y()+v.y();
	this->z_ = this->z()+v.z();

	return *this; 
}

Vector Vector::SubtractVectorFromVector(const Vector& v)
{
	Vector w(this->x() - v.x(), this->y() - v.y(), this->z() - v.z());
	return w;
}

// Vector Rotating Methods

Vector Vector::RotateXY(const double g)
{
	double rad = g * (M_PI / 180);

	this->x_ = (std::cos(rad) * this->x_) - (std::sin(rad) * this->x_);
	this->y_ = (std::sin(rad) * this->y_) + (std::cos(rad) * this->y_);

	return *this;
}

Vector Vector::RotateXZ(const double g)
{
	double rad = g * (M_PI / 180);

	this->x_ = (std::cos(rad) * this->x_) + (std::sin(rad) * this->z_);
	this->y_ = - (std::sin(rad) * this->x_) + (std::cos(rad) * this->z_);

	return *this;
}

Vector Vector::RotateYZ(const double g)
{
	double rad = g * (M_PI / 180);

	this->y_ = (std::cos(rad) * this->y_) - (std::sin(rad) * this->z_);
	this->z_ = (std::sin(rad) * this->y_) + (std::cos(rad) * this->z_);

	return *this;
}

//Vector Scaling Method
Vector Vector::ScaleXYZ(const double a, const double b, const double c)
{
	this->x_ = a * this->x_;
	this->y_ = b * this->y_;
	this->z_ = c * this->z_;

	return *this;
}