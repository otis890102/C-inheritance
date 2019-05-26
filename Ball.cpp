#include "Ball.h"

Ball::Ball()
{
	radius = 1;
}
Ball::Ball(double radius)
{
	setRadius(radius);
}
Ball::Ball(double radius, string color, bool filled)
{
	setColor(color);
	setRadius(radius);
	setFilled(filled);
}
double Ball::getRadius()const
{
	return radius;
}
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}
double Ball::getArea()const
{
	return radius * radius * 4 * 3.14159;
}
double Ball::getVolume()const
{
	return radius * radius*radius * 4 / 3 * 3.14159;
}
string Ball::toString()const
{
	return "Ball";
}