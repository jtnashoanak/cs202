//  foo.hpp
//  lab07
//  Created by Jadon Nashoanak on 10/1/19.


#ifndef foo_hpp
#define foo_hpp

class Foo {
public:
    friend Foo duplicate(int x);
    Foo();                      //Default constuctor
    Foo(const Foo & copy);      //Copy constructor
    Foo(int x);                 //Constructor
    ~Foo();
    
    int getNum() const;
    void setNum(int);
    
private:
    int _x;
};

Foo duplicate(int x) {
    Foo x;
    return x = 21;
}

#endif /* foo_hpp */
