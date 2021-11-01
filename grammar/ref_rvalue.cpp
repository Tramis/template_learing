#include <iostream>

struct A{
    int a;
    char b;
};

A factory(){
    return {10, 'c'};
}

int main(){
    auto && [a, b] = factory();
    std::cout<< a<< ' ' <<  b<< std::endl;
    a = 2;
    std::cout<< a<< ' ' <<  b<< std::endl;
    return 0;
}