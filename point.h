#ifndef POINT_H
#define POINT_H

class Point
{
private:
   int x;
   int y;

public:
	Point();
	Point(int xin, int yin);
	void display() const;
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
};


inline int Point::getX() const
{
	return x;
}

inline int Point::getY() const
{
	return y;
}

#endif
