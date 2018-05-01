#include "Geometry.h"
#include <iostream>
#pragma once

class Pricing : Geometry{
private:
	const double SOD_PRICE;
	const double FENCE_PRICE;
public:
	struct Pricing(int l, int w);
	double getSodCost(int);
	double getFenceCost(int);

};

