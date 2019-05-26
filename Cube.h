#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
private:
	double side;
public:
	Cube();
	Cube(double);
	Cube(double, string, bool);
	double getSide()const;
	void setSide(double);
	double getArea()const;
	double getVolume()const;
	string toString()const;
};
#endif // !CUBE_H

