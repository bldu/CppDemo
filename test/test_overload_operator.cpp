#include <iostream>
#include "ops.h"


int main(int argc, char const *argv[])
{
    OPS ops;
    ops << 1 << 2 << 3 << 4;
    std::cout << ops << std::endl;
    ops << 7;
    std::cout << ops << std::endl;
    std::cout << ops[1] << std::endl;
    ops[1] = 100;
    std::cout << ops[1] << std::endl;
    return 0;
}