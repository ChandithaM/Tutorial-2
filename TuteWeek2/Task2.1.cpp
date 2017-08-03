/*
 * Task2.1.cpp
 *
 *  Created on: 3 Aug. 2017
 *      Author: chandithaabhayaratne
 */

#include <iostream>

using namespace std;

void doStuff(int parValue, int& parRef) {
  parValue = 100;
  cout << "parValue = " << parValue << endl;
  parRef = 222;
  cout << "parRef = "
        << parRef << endl;
}

int main1(){

	int n1 = 1, n2 =2;
	     doStuff(n1, n2);
	     cout << "n1 = " << n1 << ". n2 = " << n2 << endl;
}


