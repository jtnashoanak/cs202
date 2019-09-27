//  box.cpp
//  hw01
//  Created by Jadon Nashoanak.

#include "box.hpp"
#include <iostream>
using std::ostream;
using std::endl;

ostream & Box::print(ostream & os) const {
    
    if(Box::type() == "Filled") {
        
        for(auto x = 0; x < Box::getHeight; x++) {
            
            for(auto y = 0; y < Box::getWidth; y++) {
                
                os << "X";
            }
            os << endl;
        }
    }
}


