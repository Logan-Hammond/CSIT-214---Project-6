// Author		: Logan Hammond; hamm32637@email.ccbcmd.edu
// Source		: Geometry.cpp
// Description	: Class file for Geometry.h
// IDE Used		: Microsoft Visual Studio 2017

#include "Geometry.h"
#include <iostream>
using namespace std;

Geometry::Geometry() {
	this->length = 0;
	this->width = 0;
	this->side = 0;
}

Geometry::Geometry(int l, int w) {
	this->length = l;
	this->width = w;
	this->side = 0;
};

Geometry::Geometry(int s) {
	this->width = 0;
	this->length = 0;
	this->side = s;
}

void Geometry::checkNum(int n) {
	int num = n;
	if (!(num > 0)) {
		cout << "\n\tError: Invalid input. Program will now exit.";
		exit(1);
	}
}

void Geometry::setLength(int l) {
	checkNum(l);
	this->length = l;
}

void Geometry::setWidth(int w) {
	checkNum(w);
	this->width = w;
}

void Geometry::setSide(int s) {
	checkNum(s);
	this->side = s;
}

int Geometry::getLength() {
	return this->length;
}

int Geometry::getWidth() {
	return this->width;
}

int Geometry::getSide() {
	return this->side;
}

int Geometry::getArea() {
	int area = 0;
	area = this->length * this->width;
	return area;
}

int Geometry::getPerimeter() {
	int perimeter = 0;
	perimeter = ((this->length * 2) + (this->width * 2));
	return perimeter;
}

int Geometry::getSurfaceArea() {
	int surfaceArea = 0;
	surfaceArea = ((this->side * this->side) * 6);
	return surfaceArea;
}


