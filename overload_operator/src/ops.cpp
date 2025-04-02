#include "ops.h"
#include<iostream>

OPS& OPS::operator<<(int i){
    v_.push_back(i);
    return *this;
}

int& OPS::operator[](int i){
    return v_[i];
}

std::ostream& operator<<(std::ostream& os, OPS ops){
    for (const auto& e : ops.v_){
        os << e << " ";
    }
    return os;
}