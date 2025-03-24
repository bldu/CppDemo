#include <iostream>
#include "my_class.h"

int main(int argc, char const *argv[])
{
    int a{1};
    // a = 2;
    std::cout << a << std::endl;
    MyClass mc1{1, 2, 2000};
    MyClass mc2{10000};
    return 0;
}
