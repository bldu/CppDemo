#include "interface.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Interface interface;
    std::cout << "Please input a float number" << std::endl;
    float x;
    std::cin >> x;
    std::cout << "result: " << interface.ComplicatedCalc(x) << std::endl;
    return 0;
}
