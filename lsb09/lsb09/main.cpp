//  main.cpp
//  lsb09
//  Created by Jadon Nashoanak on 10/8/19.

#include "foo.hpp"
#include <iostream>
using std::endl;
using std::cout;
int main() {
    
    foo();
    bar();
    foo();
    
    cout << Foo::getN() << endl;
    
    return 0;
}
