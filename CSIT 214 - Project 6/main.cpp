// Author		: Logan Hammond; hamm32637@email.ccbcmd.edu
// Source		: main.cpp
// Description	: TBD
// IDE Used		: Microsoft Visual Studio 2017

#include <iostream>
#include "Geometry.h"
#include "Pricing.h"
using namespace std;


int main() {
	// Instance variables.
	int length = 0, width = 0, side = 0;
	const double SOD_PRICE = .47;
	const double FENCE_PRICE = 22.5;
	
	cout << "\n\t\tParkton Landscaping";
	cout << "\n\n\tEnter length: ";
	cin >> length;
	cout << "\tEnter width : ";
	cin >> width;

	Pricing pricer(length, width);

	cout << "\n\n\t\tLandscaping Costs";
	cout << "\n\n\tSod	: " << pricer.getSodCost(SOD_PRICE); 
	cout << "\n\tFence	: " << pricer.getFenceCost(FENCE_PRICE);
	

	cout << "\n\n\t";
	system("pause");
	return 0;
}