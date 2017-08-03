/*
 * Task2.3.cpp
 *
 *  Created on: 3 Aug. 2017
 *      Author: chandithaabhayaratne
 */
#include <iostream>
#include <string>

using namespace std;


void testDefaultArg(int day = 1, string month= "Jan",
		int year = 2017) {
	cout << "Today is " << day <<" "
			<< month << " " << year << endl;
}

int main3(){
	testDefaultArg();
	testDefaultArg(10);
	testDefaultArg(10, "Jul");
	testDefaultArg(10, "Jul", 2018);
}




