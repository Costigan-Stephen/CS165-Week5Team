#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

#include "robot.h"

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/

void Robot::display() const
{
	/*
	for(int y = 1; y <= 10; y++)
	{
		for (int x = 1; x <= 10; x++)
		{
			string pos = "-";
			if (y == position.getY() && x == position.getX())
				pos = "X";

			cout << pos;		
		}
		cout << endl;
	}*/
	cout << "X: " << position.getX() << endl << "Y: " << position.getY() << endl;
}

void Robot::setEnergy(int x)
{
	if (x < 0)
		x = 0;
	energy = x;
}

Robot::Robot()
{
	position = Point();
	setEnergy(100);
}

Robot::Robot(int e)
{
	position = Point();
	setEnergy(e);
}

Robot::Robot(Point p, int e)
{
	setPosition(p);
	setEnergy(e);
}

void Robot::moveUp()
{
	if (energy - 10 > 0)
	{
		int move = position.getY() + 1;
		int current = position.getY();
		position.setY(move);
		if (current != position.getY())
			energy -= 10;
		if (isLandmine())
			cout << "YOU HIT A LANDMINE!" << endl;
	}
}

void Robot::moveDown()
{
	if (energy - 10 > 0)
	{
		int move = position.getY() - 1;
		int current = position.getY();
		position.setY(move);
		if(current != position.getY())
			energy -= 10;
		if (isLandmine())
			cout << "YOU HIT A LANDMINE!" << endl;
	}
}

void Robot::moveLeft()
{
	if (energy - 10 > 0)
	{
		int move = position.getX() - 1;
		int current = position.getX();
		position.setX(move);
		if (current != position.getX())
			energy -= 10;
		if (isLandmine())
			cout << "YOU HIT A LANDMINE!" << endl;
	}
}

void Robot::moveRight()
{
	if(energy - 10 > 0)
	{
		int move = position.getX() + 1;
		int current = position.getX();
		position.setX(move);
		if (current != position.getX())
			energy -= 10;

		if (isLandmine())
			cout << "YOU HIT A LANDMINE!" << endl;
	}
}

void Robot::fireLaser()
{
	if (energy - 25 > 0)
	{
		cout << "Pew! Pew!" << endl;
		energy -= 25;
	}
}

bool Robot::isLandmine()
{
	if (position.getX() == 3 && position.getY() == 3)
		return true;
	else if (position.getX() == 4 && position.getY() == 4)
		return true;
	else if (position.getX() == 6 && position.getY() == 6)
		return true;
	else
		return false;
}