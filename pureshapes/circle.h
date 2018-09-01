#include"shapes.h"

class circle:public shapes
{
private:
	int radius;

public:
	circle();
	void accept();
	void calarea();
	void calperi();
};