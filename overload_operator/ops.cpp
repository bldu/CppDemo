#include "ops.h"
#include<iostream>

OPS& OPS::operator<<(int i){
    v.push_back(i);
    return *this;
}

std::ostream& operator<<(std::ostream& os, OPS ops){
    os << "This is OPS class";
    return os;
}