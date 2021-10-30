/**
 * test.cpp
 *
 * EECS 183
 * Lab 7
 *
 * <#Name#>
 * <#uniqname#>
 *
 * <#Description#>
 */

#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"

void test_Point();

int main() {
    test_Point();

    return 0;
}

void test_Point() {
    Point pt1;
    pt1.setX(15);
    cout << "Expected: (15,0), actual :" << pt1 << endl;
        
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "Expected: (42,7), actual :" << pt1 << endl;
  
    return;
}
