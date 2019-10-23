//  Complex.cpp
//  lab08
//  Created by Jadon Nashoanak on 10/3/19.

#include "Complex.hpp"

Complex::Complex(double val):_real(r) {}

double Complex::getReal() const {
    return _real;
}

double Complex::getImag() const {
    return _imag;
}

std::ostream & operator<<(std::ostream & os, const Complex &m) {
    os << m.getReal();
    return os;
}
    
Complex operator+(const Complex &lhs, const Complex & rhs) {
    return Complex(lhs._real + rhs._real, lhs._imag + rhs._imag);
}
