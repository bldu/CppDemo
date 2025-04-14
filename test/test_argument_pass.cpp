#include "funcs.h"
#include <iostream>


int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap_by_value(a, b);
    std::cout << "swap_by_value: " << "a = " << a << ", b = " << b << std::endl;

    a = 1;
    b = 2;
    swap_by_pointer(&a, &b);
    std::cout << "swap_by_pointer: " << "a = " << a << ", b = " << b << std::endl;

    a = 1;
    b = 2;
    swap_by_reference(a, b);
    std::cout << "swap_by_reference: " << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
