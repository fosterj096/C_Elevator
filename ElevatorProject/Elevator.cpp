#include "Elevator.h"
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <iterator>
#include <ctime>
#include <string>
using namespace std;

void elevator::getDirection() {
	if (goingDown == true) {
		cout << "Elevator is currently going down." << endl;
	}
	if (goingUp == true) {
		cout << "Elevator is currently going up." << endl;
	}
}

void elevator::requestElevator() {
	map<string, int>::iterator iter = floorRequester.begin();
	cout << iter->first << " requests the elevator on floor " << iter->second << "." << endl;
	floorRequester.erase(floorRequester.begin());
}

void elevator::fillMap() {
	ifstream readIn;
	readIn.open("Names.txt");
	for (int i = 0; i < 10; i++)
	{
		string tempName;
		int floor = 1 + rand() % 10;
		readIn >> tempName;
		floorRequester.insert(pair<string, int>(tempName, floor));
	}
}

void elevator::printMap() {
	for (map<string, int>::iterator iter = floorRequester.begin(); iter != floorRequester.end(); iter++)
	{
		cout << "Name: " << iter->first << ", on floor: " << iter->second << endl;
	}
}