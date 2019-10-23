//  Money.hpp
//  Money
//  Created by Jadon Nashoanak.

#ifndef Money_hpp
#define Money_hpp

#include <iostream>

class Money {
    
    friend Money operator+(const Money & lhs, const Money & rhs);
    friend Money operator-(const Money & lhs, const Money & rhs);
    friend Money operator*(const Money & lhs, const double & rhs);
    friend Money operator*(const double & lhs, const Money & rhs);
    friend Money operator*(const Money & lhs, const Money & rhs);
    friend Money operator/(const Money & lhs, const double & rhs);
    friend bool operator==(const Money & lhs, const Money & rhs);
    
    friend bool operator!=(const Money & lhs, const Money & rhs);
    friend bool operator>(const Money & lhs, const Money & rhs);
    friend bool operator>=(const Money & lhs, const Money & rhs);
    friend bool operator<(const Money & lhs, const Money & rhs);
    friend bool operator<=(const Money & lhs, const Money & rhs);
    
public:
    Money();
    Money(double _USD);
    Money(int _dollars, int _cents);
    ~Money();
    friend std::ostream & operator<<(std::ostream & os, const Money & var);
    Money & operator+=(const Money & rhs);
    Money & operator-=(const Money & rhs);
    Money & operator*=(const double & rhs);
    Money & operator/=(const double & rhs);
    
private:
    int _USD;
    
};

#endif /* Money_hpp */
