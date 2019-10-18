//  box.hpp
//  hw03
//  Created by Jadon Nashoanak.


#ifndef box_h
#define box_h

#include <ostream>
#include <string>
using std::string;

class Box {

public:
    enum BoxType {FILLED, HOLLOW, CHECKERED};
    friend std::ostream &operator<<(std::ostream &os, const Box &var);
    Box();
    Box(int width, int height);
    Box(int width, int height, Box::BoxType type);
    ~Box();
    Box(const Box &orig);
    int getWidth() const;
    int getHeight() const;
    int setWidth(int width);
    int setHeight(int height);
    string type() const;
    Box::BoxType setType(Box::BoxType type);
    static int howMany() {return _howMany;};
    
private:
    int _width;
    int _height;
    Box::BoxType _type;
    static int _howMany;
};

#endif /* box_hpp */

