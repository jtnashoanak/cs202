//  main.cpp
//  lab05
//  Created by Jadon Nashoanak on 9/24/19.

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ios;
#include <vector>
using std::vector;

int main() {
    
    vector<int> v(100);
    ifstream myFile;
    auto sum = 0;
    
    myFile.open("data.dat", ios::binary);
    
    if(!myFile)
        cout << "error opening file" << endl;
    else
        cout << "opened file." << endl;;\
    
    myFile.read(reinterpret_cast<char *>(&v[0]),sizeof(int)*100);
    
    for(auto i: v) {
        cout << i << endl;
    }
    cout<<endl;
    
    for(auto n: v) {
        sum += n;
    }
    cout<< sum << endl;
    
    cout<< sum/v.size() << endl;

    return 0;
}
