//  Money.hpp
//  Money
//  Created by Jadon Nashoanak.

#ifndef Money_hpp
#define Money_hpp

#include <iostream>

class Money {
public:
    Money();
    Money(double _USD);
    Money(int _dollars, int _cents);
    ~Money();
    friend std::ostream & operator<<(std::ostream & os, const Money & var);
    Money & operator+=(const Money & rhs);
    Money & operator-=(const Money & rhs);
    Money & operator*=(const Money & rhs);
    Money & operator/=(const Money & rhs);
    
private:
    int _USD;
    
};

#endif /* Money_hpp */
