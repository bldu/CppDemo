#ifndef CONSTRUCTOR_DESTRUCTOR_INCLUDE_MY_CLASS
#define CONSTRUCTOR_DESTRUCTOR_INCLUDE_MY_CLASS

#include<iostream>

class MyClass{
    private:
    int x_;
    int y_;
    int* p_;

    public:
    MyClass(int x, int y, int size);
    MyClass(int size);
    ~MyClass();
};


#endif /* CONSTRUCTOR_DESTRUCTOR_INCLUDE_MY_CLASS */
