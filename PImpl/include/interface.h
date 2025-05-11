#ifndef PIMPL_INCLUDE_INTERFACE_H_
#define PIMPL_INCLUDE_INTERFACE_H_

#include <memory>

class Impl;

class Interface{
    public:
    Interface();
    ~Interface();
    float ComplicatedCalc(float x);

    private:
    std::unique_ptr<Impl> impl_;
};



#endif  // PIMPL_INCLUDE_INTERFACE_H_
