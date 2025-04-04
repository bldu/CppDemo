#include "arithmetic.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    ArithmeticFunc armt{Arithmetic::add, Arithmetic::sub, Arithmetic::mul, Arithmetic::div};
    std::cout << "Please input two integer" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std ::cout << armt.add_ptr(a, b)
               << " "
               << armt.sub_ptr(a, b)
               << " "
               << armt.mul_ptr(a ,b)
               << " "
               << armt.div_ptr(a, b)
               << std::endl;
    return 0;
}
