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

Interface::~Interface(){}

float Interface::ComplicatedCalc(float x){
    return impl_->Square(x) + impl_->SquareRoot(x);
}
