// Author		: Logan Hammond; hamm32637@email.ccbcmd.edu
// Source		: Pricing.cpp
// Description	: TBD
// IDE Used		: Microsoft Visual Studio 2017

#include "Geometry.h"
#include "Pricing.h"
#include <iostream>
using namespace std;

double Pricing::getSodCost(double SOD_PRICE) {
	double sodCost = 0;
	sodCost = SOD_PRICE * this->getArea();
	return sodCost;
}

double Pricing::getFenceCost(double FENCE_PRICE) {
	double fenceCost = 0;
	fenceCost = FENCE_PRICE * this->getPerimeter();
	return fenceCost;
}
