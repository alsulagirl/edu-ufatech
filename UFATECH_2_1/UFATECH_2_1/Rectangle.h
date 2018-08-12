#pragma once
#include "Figure.h"
#include<iostream>

using namespace std;

class Rect :
	public Figure
{
private:
	double width;
	double height;
public:
	Rect(double w, double h) 
	{
		this->width = w;
		this->height = h;
	}
	double getSquare() override
	{
		return width * height;
	}
	double getPerimeter() override
	{
		return width * 2 + height * 2;
	}
	void show()
	{
		cout << "Rectangle:" << endl << "width " << this->width << endl << "height " << this->height << endl << "P= " << this->getPerimeter() << endl << "S= " << this->getSquare() << endl;
	}
	virtual ~Rect();
};

