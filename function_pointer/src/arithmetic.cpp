#include "arithmetic.h"
#include <iostream>

int Arithmetic::add(int x, int y){
    return x + y;
}

int Arithmetic::sub(int x, int y){
    return x - y;
}

int Arithmetic::mul(int x, int y){
    return x*y;
}

int Arithmetic::div(int x, int y){
    if (y==0){
        std::cout << "divisor cannot be zero" << std::endl;
        return 0;
    }
    return x/y;
}
