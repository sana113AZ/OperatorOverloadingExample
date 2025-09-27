#pragma once
#include <iostream>
using namespace std;

class testclass {
private:
    int x;
    int y;

public:
    // Constructor without parameters
    testclass() {
        cout << "Constructor is called....\n";
        x = 0;
        y = 0;
    }

    // Constructor with parameters
    testclass(int, int);

    // Destructor
    ~testclass() {
        cout << "Destructor is called....\n";
    }

    void set_xy(int a, int b);
    void printdata();

    // Assignment operator
    void operator =(const testclass& r) {
        x = r.x;
        y = r.y;
    };

    // Friend operator overloading for division
    friend testclass operator /(testclass& l, testclass& r) {
        if (r.x == 0 || r.y == 0) {
            cout << "Error: Division by zero!\n";
            return l; // يرجّع نسخة من l كـ fallback
        }
        else {
            testclass tmp;
            tmp.x = l.x / r.x;
            tmp.y = l.y / r.y;
            return tmp;
        }
    };
};
