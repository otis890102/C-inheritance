#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
private:
	double radius;
public:
	Ball();
	Ball(double);
	Ball(double, string, bool);
	double getRadius()const;
	void setRadius(double);
	double getArea()const;
	double getVolume()const;
	string toString()const;
};
#endif // !BALL_H
