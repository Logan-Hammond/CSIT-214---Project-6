// Author		: Logan Hammond; hamm32637@email.ccbcmd.edu
// Soruce		: Geometry.h
// Description	: Header file for Geometry class.
// IDE Used		: Microsoft Visual Studio 2017

#include <iostream>

#pragma once
class Geometry {
private: 
	int length;
	int width;
	int side;
	void checkNum(int n);

public:
	Geometry();
	Geometry(int l, int w);
	Geometry(int s);

	void setLength(int l);
	void setWidth(int w);
	void setSide(int s);
	int getLength();
	int getWidth();
	int getSide();
	int getArea();
	int getPerimeter();
	int getSurfaceArea();
};