//  foo.cpp
//  lsb09
//  Created by Jadon Nashoanak on 10/8/19.

#include "foo.hpp"
#include <iostream>
using std::cout;
using std::endl;

int Foo::n = 21;

int Foo::getN() {
    return n;
}

void foo() {
    static int x = 0;
    cout<< x++ << endl;
}

void bar() {
    int f = 20;
    cout<< "In bar(), f is " << f << endl;
}
