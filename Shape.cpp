#include <iostream>
#include "Shape.h"
using namespace std;

// Init static attribute
int Shape::auto_increament = 0;
Shape::Shape(int a = 0, int b = 0)
{
    width = a;
    height = b;
    auto_increament++;
    id = auto_increament;
}

void Shape::set_width(int w)
{
    width = w;
}

void Shape::set_height(int h)
{
    height = h;
}

int Shape::get_width()
{
    return width;
}

int Shape::get_height()
{
    return height;
}

int Shape::get_id()
{
    return id;
}

void Shape::area()
{
    cout << "Parent class area : 0.0" << endl;
}

string Shape::info()
{
    return "width = " + to_string(width) + "\nheight = " + to_string(height);
}

Shape::~Shape()
{
    cout << "Shape object with id "<<id<<" deleted.\n";
}
