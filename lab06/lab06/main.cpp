//  main.cpp
//  lab06
//  Created by Jadon Nashoanak on 9/26/19.

#include "names.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    
    using names::foo();
    
    foo();
    
    return 0;
}

void foo() {
    cout<< "This is in main.cpp" <<endl;
}
