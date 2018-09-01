#include"rectangle.h"

rectangle::rectangle()
{
	this->len = 0;
	this->breadth = 0;
}

void rectangle::accept()
{
	int len, breadth;
	cout << "enter length and breadth\n";
	cin >> len >> breadth;
	this->len = len;
	this->breadth = breadth;
}

void rectangle::calarea()
{
	cout << "AREA OF RECT::" << len * breadth << endl;
}

void rectangle::calperi()
{
	cout << "PERIMETER OF RECTANGLE" << 2 * (len*breadth) << endl;
}