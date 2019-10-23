//  Money .cpp
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
