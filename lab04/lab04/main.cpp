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
using std::ifstream;
using std::ofstream;
using std::ios;

int main() {
    string line, input;
    ifstream infile;
    infile.open("lab04text.txt");
    ofstream outfile;
    outfile.open("lab04text.txt", ios::app);
    auto x = 0;
    
    if(!infile) {
        
        cout<< "Failed to open text file." <<endl;
    } else {
        
       cout<< "Opened file successfully. " <<endl;
    }
    
    while(!infile.eof()) {
        getline(infile, line);
        cout<< line << endl;
    }
    
    cout << "Enter a line of text that is going to be copied (n) times:" <<endl;
    getline(cin, input);
    
    cout<< "Enter a number (n): " <<endl;
    cin >> x;
    
    for(auto i = 0; i <= x; i++) {
        outfile << input <<endl;
    }
    
    return 0;
}

