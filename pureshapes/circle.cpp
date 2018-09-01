#include"circle.h"

circle::circle()
{
	this->radius = 0;
}

void circle::accept()
{
	int radius;
	cout << "enter radius\n";
	cin >> radius;
	this->radius = radius;
}

void circle::calarea()
{
	cout << "AREA OF circle::" << 3.14*radius*radius << endl;
}

void circle::calperi()
{
	cout << "PERIMETER OF circle" << 2 * 3.14*radius << endl;
}