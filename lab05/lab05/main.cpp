//  main.cpp
//  lab05
//  Created by Jadon Nashoanak on 9/24/19.

#include <iostream>
#include <fstream>
using std::ofstream;
using std::ios;
int main() {
    
    ofstream myFile;
    
    myFile.open("data.dat", ios::out, ios::binary)
    
    return 0;
}
