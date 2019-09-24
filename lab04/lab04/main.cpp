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
    string line, input;
    
    ifstream infile;
    infile.open("lab04text.txt");
    
    
    if(infile.fail()) {
        
        cout<< "Failed to open text file." <<endl;
    } else {
        
        while(getline(infile, line)) {
            cout<< line <<endl;
        }
    }
    
    cout<< "Enter a number and a line of text:" <<endl;
    getline(cin, input);
    
    
    
    return 0;
}

