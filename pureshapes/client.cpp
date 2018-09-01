#include"triangle.h"
#include"circle.h"
#include"rectangle.h"

class print
{
public:
	static void print1(shapes *s1)
	{
		s1->accept();
		s1->calarea();
		s1->calperi();
	}
};
void main()
{
	shapes *ptr[3];
	int opt;
	cout << "chosse an option" << endl;
	cout << "1.triangle " << "2.rectangle " << "3.circle" << endl;
	cin >> opt;

	switch (opt)
	{
	case 1:
		ptr[0] = new triangle();
		print::print1(ptr[0]);
		break;
	case 2:
		ptr[1] = new rectangle();
		print::print1(ptr[1]);
		break;
	case 3:
		ptr[2] = new circle();
		print::print1(ptr[2]);
		break;
    }

	_getch();

}