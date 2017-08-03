/*
 * Task2.5.cpp
 *
 *  Created on: 3 Aug. 2017
 *      Author: chandithaabhayaratne
 */

#include <iostream>
#include <math.h>

using namespace std;

void solveProblem(double width, double distance, double cWater, double cLand);

int main(){

	double width, distance, cWater, cLand;

	cout << "Welcome to Power Station Planning\n";
	cout << "-------------------------------------------\n\n";

	cout << "Enter the width of the river(km): ";
	cin >> width;

	cout << "Enter the distance of the factory downstream(km): ";
	cin >> distance;

	cout << "Enter the unit cost of laying the power line underwater(per m): ";
	cin >> cWater;

	cout << "Enter the unit cost of laying the power line overland(per m): ";
	cin >> cLand;

	cout << "\n\n";

	solveProblem(width, distance, cWater, cLand);

}

void solveProblem(double width, double distance, double cWater, double cLand){


	double leastWidth, leastDistance;
	width = width*1000;
	distance = distance*1000;
	double leastCost = (cWater*width) + (cLand*distance);
	double hypotenuse, x, cost;
	double HEIGHT = width*width;

	for(int i = distance - 1; i>0; i--){
		x = distance - i;
		hypotenuse = (x*x)+HEIGHT;
		hypotenuse = (sqrt(hypotenuse));
		if(hypotenuse != 0){
			cost = (hypotenuse*cWater) + (i*cLand);

			if(cost < leastCost){
						leastCost = cost;
						leastWidth = hypotenuse;
						leastDistance = i/1000;
					}
		}



	}

	cout << "The length that should run under water: " << leastWidth << endl;
	cout << "The length that should run overland: " << leastDistance << endl;
	cout << "The total cost of constructing the power line: $" << leastCost << endl;

}



