//  main.cpp
//  lab04
//  Created by Jadon Nashoanak on 9/17/19.

#include <iostream>
using std::cout;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::fstream;

int main() {
    
    ifstream ifile("out.txt");
    
    while(true) {
        auto x = 0;
        ifile >> x;
        
        if(!ifile) {
            if(ifile.eof()){
                break;
            }
        }
        cout<< "x is " << x << "\n";
    }
    
    
    return 0;
}

