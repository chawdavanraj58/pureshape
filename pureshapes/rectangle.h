#include"shapes.h"

class rectangle:public shapes
{
private:
	int breadth;
	int len;
	

public:
	rectangle();
	void accept();
	void calarea();
	void calperi();
};
