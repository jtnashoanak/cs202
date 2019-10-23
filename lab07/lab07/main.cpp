//  main.cpp
//  lab07
//  Created by Jadon Nashoanak on 10/1/19.

#include "foo.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    
    const Foo f;
    Foo f2(f);
    
    cout<< f <<endl;
    
    return 0;
}
