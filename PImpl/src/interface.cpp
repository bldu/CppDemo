#include "interface.h"
#include <cmath>
#include <memory>

class Impl{
    public:
    float Square(float x){
        return x*x;
    }
    float SquareRoot(float x){
        return std::sqrt(x);
    }

};

Interface::Interface(): impl_(new Impl){}

Interface::~Interface(){} // 必须在Impl有完整定义后实现析构函数

float Interface::ComplicatedCalc(float x){
    return impl_->Square(x) + impl_->SquareRoot(x);
}
