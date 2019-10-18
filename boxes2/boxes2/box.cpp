//  box.cpp
//  hw02
//  Created by Jadon Nashoanak.

#include "box.hpp"
#include <iostream>
using std::ostream;
using std::endl;

ostream & Box::print(ostream & os) const {
    
    if(Box::type() == "Filled") {
        
        for(auto x = 0; x < Box::getHeight(); x++) {
            
            for(auto y = 0; y < Box::getWidth(); y++) {
                
                os << "x";
            }
            os << endl;
        }
    } else {
    
        for(auto x = 0; x < Box::getHeight(); x++) {
            
            if(x == 0 || x == (Box::getHeight() - 1 )) {
                
                for(auto y = 0; y < Box::getWidth(); y++) {
                    
                    os << "x";
                }
                os << endl;
                
            } else {
                  
                for(auto x = 0; x < Box::getWidth(); x++) {
                    
                    if(x == 0 || x == (Box::getWidth() - 1)) {
                    
                    os << "x";
                    } else {
                    
                    os << ' ';
                    }
                    
                os << endl;
                }
            }
        }
    }
return os;
}

Box::Box() : _width(1), _height(1), _type(true){}
Box::Box(int width, int height) : _type(true) {
    
    _width = width;
    _height = height;
}

Box::Box(int width, int height, bool type) {
    
    _width = width;
    _height = height;
    _type = type;
}

Box::~Box(){}

int Box::getHeight() const {
    
    return _height;
}

int Box::getWidth() const {
    
    return _width;
}

int Box::setHeight(int height) {
    
    _height = height;
    return _height;
}

int Box::setWidth(int width) {
    _width = width;
    return _width;
}

bool Box::setType(bool type) {
    
    _type = type;
    return _type;
}

string Box::type() const {
    
    if(Box::_type == false) {
        
        return "Hollow";
    } else {
        
        return "Filled";
    }
}


