#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int w, int h) :Shape(w, h)
{

}

void Triangle::area()
{
	float area = (get_width() * get_height()/ 2.0f);
	cout << "Triangle info:\n" << Shape::info() << endl;
	cout << "Area of Triangle " << get_id() << " = " << area << endl;
}
