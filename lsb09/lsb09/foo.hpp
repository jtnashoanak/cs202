//  foo.hpp
//  lsb09
//  Created by Jadon Nashoanak on 10/8/19.


#ifndef foo_hpp
#define foo_hpp

void staticFoo();

class Foo {
    
public:
    static int getN();
private:
    static int n;
};

void foo();
void bar();

#endif /* foo_hpp */
