//  main.cpp
//  lab04
//  Created by Jadon Nashoanak on 9/17/19.

#include <iostream>
using std::cout;
using std::cin;
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

