//  box.hpp
//  hw05
//  Created by Jadon Nashoanak on 12/6/19.

#ifndef box_hpp
#define box_hpp

#include <string>
using std::string;
#include <memory>
#include <ostream>
using std::ostream;

class Box {
public:
    friend ostream & operator<<(ostream &os, const Box &var);
    Box(int width, int height);
    Box();
    virtual ~Box();
    Box(const Box &orig);
    int getWidth() const;
    int getHeight() const;
    int setWidth(int width);
    int setHeight(int height);
    virtual void print(ostream &os) const = 0;
    virtual string type() const = 0;
    
private:
    int _height;
    int _width;
};

class FilledBox : public Box
{
public:
    FilledBox() = default;
    FilledBox(int width, int height);
    void print(std::ostream &) const override;
    string type() const override;
};

class HollowBox : public Box
{
public:
    HollowBox() = default;
    HollowBox(int width, int height);
    void print(std::ostream &) const override;
    string type() const override;
};

class CheckeredBox : public Box
{
public:
    CheckeredBox() = default;
    CheckeredBox(int width, int height);
    void print(std::ostream &) const override;
    string type() const override;
};

std::unique_ptr<Box> boxFactory(char c, int w, int h);

#endif /* box_hpp */
