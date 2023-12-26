
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "ItemFrequency.h"
using namespace std;

// function for menu aesthetics
void ItemFrequency::displayChar(char a, int b) {
	cout << string(a, b) << endl;
}

// function menu options
void ItemFrequency::optionsMenu() {
	displayChar(55, '-');
	cout << "                    Corner Grocer" << endl;
	displayChar(55, '-');
	cout << "1. Display Frequency of Single Item" << endl;
	cout << "2. Display Frequency of All Items Purchased" << endl;
	cout << "3. Display Histogram of All Items Purchased" << endl;
	cout << "4. Exit Application" << endl;
	displayChar(55, '-');
}

// map and file handling function
map<string, int> loadFile() {
	ifstream inFS("InputFile.txt");
	map<string, int>itemMap;
	string item;
	int itemsAdd = 0;
	int updateList = 0;

	if (!inFS.is_open()) {
		cout << "Could not open file InputFile.txt" << endl;
		return itemMap;
	}

	ofstream outFS("frequency.dat");
	if (!outFS.is_open()) {
		cout << "Could not open file frequency.dat" << endl;
		return itemMap;
	}

	while (inFS >> item) {
		if (itemMap.count(item)) {
			itemMap[item]++;
			itemsAdd++;
		}
		else {
			itemMap.emplace(item, 1);
			updateList++;
		}
	}

	while (inFS >> item) {
		if (itemMap.count(item)) {
			itemMap[item]++;
			itemsAdd++;
		}
		else {
			itemMap.emplace(item, 1);
			updateList++;
		}
	}

	for (auto item : itemMap) { // loop through map
		outFS << item.first << " " << item.second << endl; 
	}

	return itemMap;
}

void ItemFrequency::optionOne() { 
	string itemSearch;

	cout << "Enter item: ";
	cin >> itemSearch;

	map<string, int> itemMap = loadFile();

	cout << itemMap[itemSearch] << endl;

}

void ItemFrequency::optionTwo() {
	map<string, int>itemMap = loadFile();

	for (auto item : itemMap) { // loop through map
		cout << item.first << " " << item.second << endl;
	}

}

void ItemFrequency::optionThree() { 
	map<string, int>itemMap = loadFile();

	for (auto item : itemMap) { // loop through map
		cout << item.first << " ";
		for (int i = 0; i < item.second; ++i) {
			cout << "*";
		}
		cout << endl;
	}

}
