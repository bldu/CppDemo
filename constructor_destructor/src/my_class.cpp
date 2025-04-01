#include "my_class.h"
#include <iostream>
#include <algorithm>

MyClass::MyClass(int x, int y, int size) : x_(x), y_(y), size_(size){
    p_ = new int[size];
    for (int i=0; i<size; i++){
        p_[i] = i;
    }
    std::cout << "constructor1" << std::endl;
}


MyClass::MyClass(int size): x_(0), y_(0), size_(size){
    p_ = new int[size];
    for (int i=0; i<size; i++){
        p_[i] = i;
    }
    std::cout << "constructor2" << std::endl;
}


MyClass::MyClass(const MyClass& mc): x_(mc.x_), y_(mc.y_) {
    p_ = new int[mc.size_];
    // memcpy(p_, mc.p_, mc.size_*sizeof(int));
    std::copy(mc.p_, mc.p_+mc.size_, p_);
    std::cout << "constructor3" << std::endl;
}

MyClass::~MyClass(){
    delete[] p_;
    p_ = nullptr;
    std::cout << "destructor" << std::endl;
}