#include "Cube.h"

Cube::Cube()
{
	side = 1;
}
Cube::Cube(double side)
{
	setSide(side);
}
Cube::Cube(double side, string color, bool filled)
{
	setSide(side);
	setColor(color);
	setFilled(filled);
}
double Cube::getSide()const
{
	return side;
}
void Cube::setSide(double side)
{
	this->side = (side >= 0) ? side : 0;
}
double Cube::getArea()const
{
	return side * side * 6;
}
double Cube::getVolume()const
{
	return side * side*side;
}
string Cube::toString()const
{
	return "Cube";
}