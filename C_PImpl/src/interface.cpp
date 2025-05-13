#include "interface.h"
#include <vector>
#include <cstdio>

struct S{
    S() : a(0) {}
    int a;
};

struct MyClassImpl{
    MyClassImpl() : a(0), list(), s() {}
    int a;
    std::vector<int> list;
    S s;
};


MyClassHandle myclass_create(){
    MyClassHandle handle = new MyClassImpl;
    if (handle){
        printf("created handle!\n");
    }
    handle->a = 1;
    handle->list = {1,2,3};
    handle->s.a = 2;
    return handle;
}

void myclass_do_something(MyClassHandle handle){
    handle->a += 1;
    handle->list.push_back(4);
    handle->s.a += 1;
    printf("did something!\n");
}


void myclass_destroy(MyClassHandle handle){
    delete handle;
    handle = nullptr;
    printf("destroyed handle!\n");
}
