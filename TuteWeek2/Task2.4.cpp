/*
 * Task2.4.cpp
 *
 *  Created on: 3 Aug. 2017
 *      Author: chandithaabhayaratne
 */

#include <iostream>
#include <string>
using namespace std;

void allOddNumbers(int firstNum, int secondNum, int oddNum = 0){

	//condition if first number is even
	if (firstNum%2 == 0){
			oddNum = firstNum + 1;
		}

		//condition if first number is odd
		else {
			oddNum = firstNum + 2;
		}
		cout << "Odd Numbers between these integers: ";


		//loop to keep finding next odd number till last integer
		while(oddNum<secondNum){

			 cout << oddNum << ", ";
			 oddNum = oddNum +2;
		}
		cout << "that's it.\n";
}

void squareNumbers(int firstNum, int secondNum, int oddNum = 0, int squareNum = 0){
	//condition if first number is even
	if (firstNum%2 == 0){
				oddNum = firstNum + 1;
			}

			//condition if first number is odd
			else {
				oddNum = firstNum + 2;
			}

	cout << "The following shows the squares of the respective odd number: ";

	while(oddNum<secondNum){
			squareNum = oddNum*oddNum;
			cout << squareNum <<", ";
			oddNum = oddNum +2;
		}

		cout <<"the end.";
}


int main4() {


	//initiating all the variables

	int oddNum, evenNum, evenSum, nums;
	int firstNum = 0;
	int secondNum = 0;

	//unrequired heading
	cout << "Welcome to useless number show: \n";
	cout << "----------------------------------------------\n";

	//(B)loop to make sure 2nd number is greater than 1st and not equal
	while(firstNum>=secondNum){

		//(A)
		cout << "Enter an integer: ";
		cin >> firstNum;

		cout << "Enter a greater integer: ";
		cin >> secondNum;

	}

	int difference = secondNum - firstNum;

	//(C)
	allOddNumbers(firstNum, secondNum);

	//(D)

	if(firstNum%2 == 0){
		evenNum = firstNum + 2;
	}

	else evenNum = firstNum + 1;

	evenSum = 0;

	while(evenNum<secondNum){
		evenSum = evenSum + evenNum;
		evenNum = evenNum + 2;
	}

	cout << "Sum of all even numbers between these integers: " << evenSum <<"\n";


	//(E)

	cout << "First 10 integers between them: ";
	nums = firstNum + 1;
	for(int i = 0; i<10;i++){
		if(nums<secondNum){
			cout << nums << ", ";
			nums++;
		}
	}
	cout << "nope, that's it.\n";


	//(F)
	squareNumbers(firstNum, secondNum);

	}




