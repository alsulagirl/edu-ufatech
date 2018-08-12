#pragma once
#ifndef FIGURE_H_
#define FIGURE_H_



class Figure
{
public:
	Figure();
	virtual ~Figure(); 
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
	virtual void show() = 0;
};

#endif // !FIGURE_H_