#include <iostream>
#include "class.h"
using namespace std;

int main() {
    testclass w(6, 6);
    testclass obj1(4, 6);
    testclass obj2(1, 2);
    testclass devid;

    devid = obj1 / obj2;   // استخدام المشغل /
    devid.printdata();

    return 0;
}
