//  main.cpp
//  lab04
//  Created by Jadon Nashoanak on 9/17/19.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::ios;

int main() {
    string line;
    
    ofstream myfile;
    myfile.open("lab04text.txt", ios::out | ios::app);
    
    while(getline(myfile, line)) {
        cout<< line <<endl;
    }
    
    
    return 0;
}

