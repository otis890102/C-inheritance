#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include<iostream>
#include<string>
using namespace std;

class GeometricObject
{
private:
	string color;
	bool filled;
public:
	GeometricObject();
	GeometricObject(string, bool);
	string getColor()const;
	void setColor(string);
	bool isFilled()const;
	void setFilled(bool);
	string toString()const;
};
#endif
