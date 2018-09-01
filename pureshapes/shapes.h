#ifndef shape_h
#define shape_h

#include<iostream>
#include<conio.h>

using namespace std;

class shapes
{
private:
	int area;
	int peri;

	public:
		virtual void accept() = 0;
		virtual void calarea()=0;
		virtual void calperi()=0;
};
#endif