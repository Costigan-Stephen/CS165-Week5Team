#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
	Robot();
	Robot(int e);
	Robot(Point p, int e);
	void display() const;
	Point getPosition();
	int getEnergy();
	void setPosition(Point position);
	void setEnergy(int eng);

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	void fireLaser();
	bool isLandmine();
};

inline Point Robot::getPosition()
{
	return position;
}

inline int Robot::getEnergy()
{
	return energy;
}

inline void Robot::setPosition(Point pt)
{
	position = pt;
}

#endif
