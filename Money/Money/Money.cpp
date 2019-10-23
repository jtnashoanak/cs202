//  Money.cpp
//  Money
//  Created by Jadon Nashoanak.

#include "Money.hpp"

std::ostream & operator<<(std::ostream & os, const Money & var) {
    
    Money osvar = var;
    if(osvar._USD < 0) {
        osvar._USD *= -1;
        os << '-';
    }
    
    os << "$" << osvar._USD / 100 << ".";
        
    int cents = osvar._USD % 100;
    
    if(cents == 0) {
        os << "00";
    } else if(cents < 10) {
        
        os << "0" << cents;
    } else {
        
        os << cents;
    }
        
    return os;
}

Money::Money():_USD(0){}
        
Money::Money(double money):_USD(0) {
        
    int round;
    int remainder = (money * 1000);
    remainder %= 10;
        
    if(money >= 0) {
        if(remainder >= 5) {
            round = (money / 0.01) + 1;
        } else {
            round = (money / 0.01);
        }
    } else {
        
        if(remainder >= -5) {
            round = (money / 0.01);
        } else {
            round = (money / 0.01) - 1;
        }
    }
    _USD = round;
}
        
Money::Money(int dollars, int cents):_USD(0) {
        
    _USD += dollars*100;
    _USD += cents;
}

Money::~Money(){}
       
bool operator==(const Money & lhs, const Money & rhs) {
    return (lhs._USD == rhs._USD);
}
        
bool operator!=(const Money &lhs, const Money &rhs) {
        
    return !(lhs._USD == rhs._USD);
}

bool operator>(const Money &lhs, const Money &rhs) {
        
    return (lhs._USD > rhs._USD);
}
        
bool operator>=(const Money &lhs, const Money &rhs) {
        
    return (lhs._USD >= rhs._USD);
}

bool operator<(const Money &lhs, const Money &rhs) {
        
    return (lhs._USD < rhs._USD);
}

bool operator<=(const Money &lhs, const Money &rhs) {
        
    return !(lhs._USD>rhs._USD);
}
        
Money operator+(const Money & lhs, const Money & rhs) {
        
    Money add;
    add._USD = lhs._USD + rhs._USD;
    return add;
}

Money & Money::operator+=(const Money & rhs) {
        
    _USD += rhs._USD;
    return *this;
}
        
Money operator-(const Money & lhs, const Money & rhs) {
        
    Money sub;
    sub._USD = lhs._USD - rhs._USD;
    return sub;
}

Money & Money::operator-=(const Money & rhs) {
        
    _USD -= rhs._USD;
    return *this;
}

Money operator*(const Money & lhs, const Money & rhs) {
        
    Money mult;
    mult._USD = lhs._USD * rhs._USD;
    return mult;
}

Money operator*(const Money & lhs, const double & rhs) {
        
    Money mult;
    mult._USD = lhs._USD * rhs;
    return mult;
}

Money operator*(const double & lhs, const Money & rhs) {
        
    Money mult;
    mult._USD = rhs._USD * lhs;
    return mult;
}

Money & Money::operator*=(const double & rhs) {
        
    _USD *= rhs;
    return *this;
}

Money operator/(const Money & lhs, const double & rhs) {
        
    Money div;
    div._USD = lhs._USD / rhs;
    return div;
}

Money & Money::operator/=(const double & rhs) {
        
    _USD /= rhs;
    return *this;
}

