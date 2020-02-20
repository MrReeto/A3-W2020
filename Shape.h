#pragma once
#include <string>

class Shape {

private:
    int id, width, height;
    static int auto_increament;

public:
    // constructor
    Shape(int, int);
    //Setters
    void set_width(int);
    void set_height(int);
    //Getters
    int get_width();
    int get_height();
    int get_id();
    virtual void area();
    std::string info();
    // Destructor
    ~Shape();
    
};