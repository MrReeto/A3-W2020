// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

void example1()
{
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    // store the address of Rectangle
    shape = &rec;

    // call rectangle area.
    shape->area();

    // store the address of Triangle
    shape = &tri;

    // call triangle area.
    shape->area();
}

void example2()
{
    Shape** shapes;
    int capacity;

    do
    {
        cout << "Please enter positive value of capacity : ";
        cin >> capacity;

        if (capacity <= 1)
        {
            cout << "- Waring: The capacity should be positive value only, please try again.\n- At least make it 2 to run demo.\n";
        }
    }
    while (capacity<=1);
    // I am sure my code will not pass this point until user enter valid intger.
    shapes = new Shape * [capacity];
    
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    // store the address of Rectangle
    shapes[0] = &rec;

    // store the address of Triangle
    shapes[1] = &tri;

    // Loop just for two elements 
    for (size_t i = 0; i < 2; i++)
    {
        shapes[i]->area();
    }
    
}

int main()
{
    example1();
    example2();
    return 0;
}