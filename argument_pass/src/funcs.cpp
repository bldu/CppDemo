#include "funcs.h"
#include <iostream>

void swap_by_value(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}


void swap_by_pointer(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


void swap_by_reference(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

