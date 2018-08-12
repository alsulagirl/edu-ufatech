#pragma once
#include "Figure.h"
#include<iostream>

using namespace std;

class Circle :
	public Figure
{

private:
	double radius;
public:
	Circle(double r) : radius(r)
	{
	}
	double getSquare() override
	{
		return radius * radius * 3.14;
	}
	double getPerimeter() override
	{
		return 2 * 3.14 * radius;
	}
	void show()
	{
		cout << "Circle:" << endl << "radius " << this->radius << endl << "P= " << this->getPerimeter() << endl << "S= " << this->getSquare() << endl;
	}

	virtual ~Circle();
};

