#pragma once
#include "Figure.h"
#include<iostream>

using namespace std;

class Square :
	public Figure
{
private:
	double side;

public:
	Square(double w) : side(w)
	{
	}
	double getSquare() override
	{
		return pow(side, 2.0);
	}
	double getPerimeter() override
	{
		return side * 4;
	}
	void show()
	{
		cout << "Square:" << endl << "side " << this->side << endl << "P= " << this->getPerimeter() << endl << "S= " << this->getSquare() << endl;
	}
	virtual ~Square();
};

