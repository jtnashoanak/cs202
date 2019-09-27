//  box.hpp
//  hw01
//  Created by Jadon Nashoanak.


#ifndef box_h
#define box_h

#include <string>
using std::string;
#include <ostream>

class Box {

public:
    Box();
    Box(int width, int height);
    Box(int width, int height, bool type);
    ~Box();
    int getWidth() const;
    int getHeight() const;
    int setWidth(int width);
    int setHeight(int height);
    bool setType(bool type);
    string type() const;
    
private:
    int _width;
    int _height;
    bool _type;
};

#endif /* box_h */
