//  main.cpp
//  lab06
//  Created by Jadon Nashoanak on 9/26/19.


#include "names.hpp"
#include <iostream>
using std::cout;
using std::endl;

namespace fooMain {
    void foo() {
        cout<< "This is in main.cpp" <<endl;
    }
}
 
int main() {
    
    fooMain::foo();
    
    names::foo();
    
    return 0;
}
