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

Box::Box() : _width(1), _height(1) {}

Box::Box(int width, int height) : _width(width), _height(height) {}

FilledBox::FilledBox(int width, int height) : Box(width, height) {}

HollowBox::HollowBox(int width, int height) : Box(width, height){}

CheckeredBox::CheckeredBox(int width, int height) : Box(width, height){}

Box::~Box() {}

Box::Box(const Box &orig) : _height(orig._height), _width(orig._width) {}

int Box::getHeight() const
{
    return _height;
}

int Box::getWidth() const
{
    return _width;
}

int Box::setHeight(int height)
{
    _height = height;
    return _height;
}

int Box::setWidth(int width)
{
    _width = width;
    return _width;
}

void FilledBox::print(std::ostream &os) const
{
    for (int x = 0; x < getHeight(); x++)
    {
        for (int x = 0; x < getWidth(); x++)
        {
            os << "x";
        }
        os << std::endl;
    }
}

void HollowBox::print(std::ostream &os) const
{
    for (int x = 0; x < getHeight(); x++)
    {
        if (x == 0 || x == (getHeight() - 1))
        {
            for (int x = 0; x < getWidth(); x++)
            {
                os << "x";
            }
            os << std::endl;
        }
        else
        {
            for (int x = 0; x < getWidth(); x++)
            {
                if (x == 0 || x == (getWidth() - 1))
                {
                    os << "x";
                }
                else
                {
                    os << ' ';
                }
            }
            os << std::endl;
        }
    }
}

void CheckeredBox::print(std::ostream &os) const
{
    for (int x = 0; x < getHeight(); x++)
    {

        for (int y = 0; y < getWidth(); y++)
        {
            int z = ((y + x) % 2);
            if (z == 0)
                os << 'x';
            if (z == 1)
                os << ' ';
        }
        os << std::endl;
    }
}

std::unique_ptr<Box> boxFactory(char c, int w, int h)
{
    switch (c)
    {
    case 'f':
        return std::make_unique<FilledBox>(w, h);
        break;
    case 'h':
        return std::make_unique<HollowBox>(w, h);
        break;
    case 'c':
        return std::make_unique<CheckeredBox>(w, h);
        break;
    default:
        throw std::runtime_error("boxFactory unknown type");
        break;
    }
}

string FilledBox::type() const
{
    return "Filled";
}

string HollowBox::type() const
{
    return "Hollow";
}

string CheckeredBox::type() const
{
    return "Checkered";
}
