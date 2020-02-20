#include "Rectangle.h"

#include <iostream>
using namespace std;

Rectangle::Rectangle(int w, int h):Shape(w,h)
{
	cout << "Rectangle object is created, id = " << get_id() << endl;
}

void Rectangle::area()
{
	float area = (float)(get_width() * get_height());
	cout << "Rectangle info:\n" << Shape::info() << endl;
	cout<<"Area of Rectangle "<< get_id()<<" = "<< area << endl;
}
