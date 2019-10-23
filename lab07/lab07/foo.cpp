//  foo.cpp
//  lab07
//  Created by Jadon Nashoanak on 10/1/19.


#include "foo.hpp"
#include <iostream>
using std::cout;
using std::endl;

Foo::Foo() {
    cout<< "Default constructor." <<endl;
}

Foo::Foo(const Foo & copy) {
    cout<< "Copy constructor." <<endl;
}

Foo::Foo(int x) {
    x = 21;
}

int Foo::getNum() const {
    return _x;
}

void Foo::setNum(int x) {
    _x = x;
}

Foo::~Foo() {
    cout<< "Destructor." <<endl;
}
