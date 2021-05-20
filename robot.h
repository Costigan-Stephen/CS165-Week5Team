/******************
 * File: point.h
 ******************/
#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
	Point position;
	int energy;

public:
	void display();
	void getPosition(Point position);
	int getEnergy();
	void movePosition(Point position, int x, int y);
};

#endif
