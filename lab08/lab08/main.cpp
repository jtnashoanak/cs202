//  main.cpp
//  lab08
//  Created by Jadon Nashoanak on 10/3/19.

#include "Complex.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    Complex a(10, 5), b(2, 4);
    Complex c = a + b;
    
    cout << c <<endl;
    
    return 0;
}
