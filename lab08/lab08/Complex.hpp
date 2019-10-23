//  Complex.hpp
//  lab08
//  Created by Jadon Nashoanak on 10/3/19.


#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>

class Complex {
public:
    Complex(double r = 0, double i = 0) {
        _real = r;
        _imag = i;
    }
    void print() {
        std::cout<< _real << " + i" << _imag << std::endl;
    }
    
    friend Complex operator+(Complex const &, Complex const &);
    
    double getReal() const;
    double getImag() const;
    
private:
    double _real, _imag;
};

std::ostream & operator<<(std::ostream & os, Complex const);
Complex operator+(Complex&, const Complex &);

#endif /* Complex_hpp */
