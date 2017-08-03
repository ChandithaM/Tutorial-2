/*
 * Task2.2.cpp
 *
 *  Created on: 3 Aug. 2017
 *      Author: chandithaabhayaratne
 */
#include <iostream>

using namespace std;

void testOverloading( int numerator, int denominator) {
     int fraction = numerator / denominator;
     cout << "Fraction1 = " << fraction << endl;
}

void testOverloading(double numerator, double
denominator) {
     double fraction = numerator / denominator;
     cout <<  "Fraction2 = " << fraction << endl;
}

void testOverloading( int numerator, double denominator)
{
     double fraction = numerator / denominator;
     cout <<  "Fraction3 = " << fraction << endl;
}

int main2(){

	testOverloading(10, 2);
	testOverloading(5.5,5.5);
	testOverloading(3,7.0);


}


