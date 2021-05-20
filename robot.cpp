/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "robot.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/

inline void Robot::display()
{
	cout << "testDisplay" << endl;
}

inline void Robot::getPosition(Point position)
{
	cout << "getPosition" << endl;
}

int Robot::getEnergy()
{
	cout << "getEnergy" << endl;
	return 2;
}

inline void Robot::movePosition(Point position, int x, int y)
{
	cout << "movePosition " << x << " " << y << endl;
}