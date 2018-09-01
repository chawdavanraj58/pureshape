#include"shapes.h"

class triangle:public shapes
{
private:
	int hypo;
	int base;
	int height;

public:
	triangle();
	void accept();
	void calarea();
	void calperi();
};