/* Practise Main */

#include "basics.hpp"
#include <conio.h>

#define D 68
#define A 65
#define S 83
#define R 82
#define Escape 27
int main()
{
	std::cout << "Test Suite number 1 " << endl 
			  << "--------------------" << endl
			  << "      Beginning     " << endl << endl;

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

	std::cout << "Test Suite number 1 " << endl 
			  << "         End        " << endl
			  << "--------------------" << endl << endl;

	prueba2();
}

void prueba2()
{

	std::cout << "Test Suite number 2 " << endl 
			  << "--------------------" << endl
			  << "      Beginning     " << endl << endl;

	std::default_random_engine generator;
    std::uniform_real_distribution<double> dist(-10.0, 10.0);

	std::array<Point, 5> points;
	double a,b,c;

	for (auto i = points.begin(), i != points.end(); ++i)
	{
		a = dist(generator);
		b = dist(generator);
		c = dist(generator);

		points[i].SetPointToPoint(Point p(a,b,c));
	}

	int c = getch();
	switch(c)
	{
		case D: System("cls");
				for (auto i = points.begin(), i != points.end(); ++i)
					points[i].drawPoint(); break;
		case A: for (auto i = points.begin(), i != points.end(); ++i)
					points[i].scal(); break;
		case S:
		case R:
		case Escape: 
	}




	std::cout << "Test Suite number 2 " << endl 
			  << "         End        " << endl
			  << "--------------------" << endl << endl;


}