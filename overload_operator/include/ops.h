#ifndef OVERLOAD_OPERATOR_INCLUDE_OPS_H_
#define OVERLOAD_OPERATOR_INCLUDE_OPS_H_

#include<iostream>
#include<vector>

class OPS{

    private:
    std::vector<int> v_;

    public:
    OPS& operator<<(int i);
    int& operator[](int i);

    friend std::ostream& operator<<(std::ostream& os, OPS ops);

};





#endif  // OVERLOAD_OPERATOR_INCLUDE_OPS_H_
