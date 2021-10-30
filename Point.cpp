/**
 * Point.cpp
 *
 * EECS 183
 * Lab 7
 * Taken from Project 4: CoolPics
 *
 * <#Name#>
 * <#uniqname#>
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
    // TODO: Implement
}
    
Point::Point(int xVal, int yVal) {
    // TODO: Implement
}

void Point::setX(int xVal) {
    // TODO: Implement

    return;
}

int Point::getX() {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}    

void Point::setY(int yVal) {
    // TODO: Implement
    
    return;
}
    
int Point::getY() {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}

void Point::read(istream& ins) {
    // TODO: Implement

    return;
}    

void Point::write(ostream& outs) {
    // TODO: Implement

    return;
}

int Point::checkRange(int val) {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}


// Your code goes above this line!!!
// Don't change the implementations below!!!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

