#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include<iomanip>

int main()
{
	int x, y;
	string a, b;

	cin >> x >> a >> y >> b;

	Ball ball;
	ball.setRadius(x);
	ball.setColor(a);
	cout <<fixed<<setprecision(1)<< ball.toString() << endl
		<< "radius:" << x << ", "
		<< "area:" << ball.getArea() << ", "
		<< "volume:" << ball.getVolume() <<", "
		<<"color:"<<ball.getColor()<<endl;

	Cube cube;
	cube.setSide(y);
	cube.setColor(b);
	cout << cube.toString() << endl
		<< "length:" << y << ", "
		<< "area:" << cube.getArea() << ", "
		<< "volume:" << cube.getVolume() << ", "
		<< "color:" << cube.getColor()<<endl;
		
	system("pause");
	return 0;
}