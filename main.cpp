/* Practise Main */

#include "basics.hpp"

int main()
{
	Point point1(1,2,1);
	Point point2(0,4,4);
	Vector vector1(2,0,0);
	Vector vector2;

	point1.drawPoint();
	point2.drawPoint();

	vector2 = point1.SubtractPointFromPoint(point2);
	vector1 = vector1.AddVectorToVector(vector2);

	point1.AddVectorToPoint(vector1);
	point1.drawPoint();

	point2.SubtractVectorFromPoint(vector2);
	point2.drawPoint();
}