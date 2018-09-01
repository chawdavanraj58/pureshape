#include"triangle.h"

triangle::triangle()
{
	this->hypo = 0;
	this->base = 0;
	this->height = 0;
}

void triangle::accept()
{
    int hypo, base, height;
	cout << "enter hypo and base and height\n";
	cin >> hypo >> base >> height;
	this->hypo = hypo;
	this->base = base;
	this->height = height;
}

void triangle::calarea()
{
	cout << "AREA OF triangle::" << (base * height)/2 << endl;
}

void triangle::calperi()
{
	cout << "PERIMETER OF triangle::" << hypo+base+height << endl;
}