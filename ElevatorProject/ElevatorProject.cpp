//CS303 - Project 1 - The Elevator Problem
/*
1. User requests elevator to come to their floor and either go up or down
2. Once elevator arrives, user requests the floor they want to go to.
3. First come, first served principle. If elevator is heading up it will not stop to pick someone up who is going down, vice versa
4. 



*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <iterator>
#include <time.h>
#include "Elevator.h"
using namespace std;

int main()
{
	srand(time(0));
	elevator elevator;

	elevator.fillMap();
	elevator.printMap();
	elevator.requestElevator();
	elevator.requestElevator();
	elevator.requestElevator();

	return 0;
}

