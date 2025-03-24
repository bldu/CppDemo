#include "my_class.h"
#include <iostream>

MyClass::MyClass(int x, int y, int size) : x_(x), y_(y){
    p_ = new int[size];
    std::cout << "constructor1" << std::endl;
}


MyClass::MyClass(int size){
    p_ = new int[size];
    std::cout << "constructor2" << std::endl;
}


MyClass::~MyClass(){
    delete[] p_;
    p_ = nullptr;
    std::cout << "destructor" << std::endl;
}