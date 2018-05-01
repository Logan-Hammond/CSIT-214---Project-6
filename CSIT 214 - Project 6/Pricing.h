// Author		: Logan Hammond; hamm32637@email.ccbcmd.edu
// Source		: Pricing.h
// Description	: TBD
// IDE Used		: Microsoft Visual Studio 2017

#include "Geometry.h"
#pragma once

class Pricing : public Geometry{
public:
	Pricing(int l, int w) : Geometry(l, w) {}
	double getSodCost(double SOD_PRICE);
	double getFenceCost(double FENCE_PRICE);
};

