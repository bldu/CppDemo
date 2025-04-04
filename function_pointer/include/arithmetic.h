#ifndef FUNCTION_POINTER_INCLUDE_ARITHMETIC_H_
#define FUNCTION_POINTER_INCLUDE_ARITHMETIC_H_

class Arithmetic{
    public:
    static int add(int x, int y);
    static int sub(int x, int y);
    static int mul(int x, int y);
    static int div(int x, int y);
};

// typedef int (*FuncPtr)(int, int);
using FuncPtr = int (*)(int, int);

struct ArithmeticFunc
{
    FuncPtr add_ptr;
    FuncPtr sub_ptr;
    FuncPtr mul_ptr;
    FuncPtr div_ptr;
};



#endif  // FUNCTION_POINTER_INCLUDE_ARITHMETIC_H_
