#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;
#pragma once

class elevator {

public:
	void getDirection();
	void requestElevator();
	void fillMap();
	void printMap();

private:
	bool goingUp = false;
	bool goingDown = false;
	map<string, int> floorRequester; //keeps track of person who requests what floor

};

#endif