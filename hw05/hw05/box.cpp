//  box.cpp
//  hw05
//  Created by Jadon Nashoanak on 12/6/19.

#include "box.hpp"
#include <memory>
#include <iostream>
#include <exception>

std::ostream & operator<<(std::ostream &os, const Box &var) {
    
    if(var.type() == "Filled") {
        
        for(auto y = 0; y < var.getHeight(); y++) {
            
            for(auto x = 0; x < var.getWidth(); x++) {
                
                os << "x";
            }
            os << std::endl;
        }
    }
    
    if(var.type() == "Hollow") {
        
        for(auto y = 0; y < var.getHeight(); y++) {
            
            if(y == 0 || y == (var.getHeight() - 1)) {
                
                for(auto x = 0; x < var.getWidth(); x++) {
                    
                    os << "x";
                }
                os << std::endl;
            }
            else {
                
                for(auto x = 0; x < var.getWidth(); x++) {
                    
                    if(x == 0 || x == (var.getWidth() - 1)) {
                        
                        os << "x";
                    }
                    else {
                        
                        os << ' ';
                    }
                }
                os<<std::endl;
            }
        }
    }
    
    if(var.type() == "Checkered") {
        
        for(auto y = 0; y < var.getHeight(); y++) {
            
            for(auto x = 0; x < var.getWidth(); x++) {
                
                int z = ((y + x) % 2);
                if(z == 0) {
                    os << "x";
                }
                if(z == 1) {
                    os << ' ';
                }
            }
            os << std::endl;
        }
    }
    return os;
}
