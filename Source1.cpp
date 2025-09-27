#include "class.h"
#include <iostream>
using namespace std;

void testclass::set_xy(int a, int b) {
    x = a;
    y = b;
}

void testclass::printdata() {
    cout << "data class (" << x << ", " << y << ")" << endl;
}

testclass::testclass(int a, int c) {
    x = a;
    y = c;
}
