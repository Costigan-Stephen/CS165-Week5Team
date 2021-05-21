#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

#include "point.h"

/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...

   cout << "(" << getX() << ", " << getY() << ")";
}

void Point::setX(int xin)
{
	if (xin < 1)
		x = 1;
	else if (xin > 10)
		x = 10;
	else if (xin >= 1 && xin <= 10)
		x = xin;
}

void Point::setY(int yin)
{
	if (yin < 1)
		y = 1;
	else if (yin > 10)
		y = 10;
	else if (yin >= 1 && yin <= 10)
		y = yin;
}

Point::Point() 
{
	x = 5;
	y = 5;
}

Point::Point(int xin, int yin)
{
	setX(xin);
	setY(yin);
}