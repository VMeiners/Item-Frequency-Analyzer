/*
Developer: Valerie Meiners
Date: August 7, 2023
Program: Corner Grocery
*/

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "ItemFrequency.h"
using namespace std;

int main() {
	ItemFrequency itemFreq; // object of ItemFrequency Class

	ifstream inFS;      // input file stream
	ofstream outFS;     // output file stream
	string userInput;	

	itemFreq.optionsMenu();

	do {
		cout << "Enter Menu Option" << endl;
		cin >> userInput; 
		if (userInput == "1") {
			itemFreq.optionOne();
		}
		else if (userInput == "2") {
			itemFreq.optionTwo();
		}
		else if (userInput == "3") {
			itemFreq.optionThree();
		}
		else if (userInput != "4") {
			cout << "Enter a valid menu option" << endl;
		}
	} while (userInput != "4");

	return 0;
}