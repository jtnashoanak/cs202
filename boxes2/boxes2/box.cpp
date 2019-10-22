//  box.cpp
//  hw03
//  Created by Jadon Nashoanak.

#include "box.hpp"
#include <iostream>
using std::ostream;
using std::endl;

int Box::_howMany = 0;

ostream & operator<<(ostream & os, const Box &var) {
    
    if(var.type() == "Filled") {
            
            for(auto x = 0; x < var.getHeight(); x++) {
                
                for(auto y = 0; y < var.getWidth(); y++) {
                    
                    os << "x";
                }
                os << endl;
            }
        }
                    
    if(var.type() == "Hollow") {
        
        for(auto x = 0; x < var.getHeight(); x++) {
                
            if(x == 0 || x == (var.getHeight() - 1 )) {
                    
                for(auto y = 0; y < var.getWidth(); y++) {
                        
                    os << "x";
                }
                os << endl;
                    
            } else {
                      
                for(auto x = 0; x < var.getWidth(); x++) {
                        
                    if(x == 0 || x == (var.getWidth() - 1)) {
                        
                    os << "x";
                    } else {
                        
                    os << ' ';
                    }
                        
                os << endl;
                }
            }
        }
    }
    
    if(var.type() == "Checkered") {
                    
        for(auto x = 0; x < var.getHeight(); x++) {
                    
            for(auto y = 0; y < var.getWidth(); y ++) {
                    
                int z = ((y + x) % 2);
                    
                if(z == 0) {
                    os << 'x';
                }
                    
                if(z == 1) {
                    os << ' ';
                }
            
                os << endl;
            }
        }
    }
return os;
}

Box::Box(): _width(1), _height(1), _type(FILLED) {Box::_howMany++;}
Box::Box(int width, int height) : _type(FILLED) {
    
    _width = width;
    _height = height;
    Box::_howMany++;
}

Box::Box(int width, int height, Box::BoxType type) {
    
    _width = width;
    _height = height;
    _type = type;
    Box::_howMany++;
}

Box::~Box() {Box::_howMany--;}
                
Box::Box(const Box & orig):_height(orig._height), _width(orig._width), _type(orig._type) {

    Box::_howMany++;
}

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

Box::BoxType Box::setType(Box::BoxType type) {
    
    _type = type;
    return _type;
}

string Box::type() const {
                    
    switch(Box::_type) {
        case HOLLOW:
            return "Hollow";
            break;
                    
        case FILLED:
            return "Filled";
            break;
                    
        case CHECKERED:
            return "Checkered";
            break;
    }
}


