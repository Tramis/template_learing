#include <iostream>

using pf = const int * (*)(const int *, int n);

const int * f1(const int arr[], int n){
    return arr;
}

const int * f2(const int arr[], int n){
    return arr+1;
}

const int * f3(const int *arr, int n){
    return arr+2;
}

int main(){
    int a[3] = {1, 2, 3};

    pf p = f1;

    std::cout
        << p(a, 3) << ':' << *(p(a, 3)) << std::endl
        << (*p)(a, 3) << ':' << *((*p)(a, 3)) << std::endl;
    
    pf pa[3] = {f1, f2, f3};

    std::cout
        << pa[2](a, 3) << ':' << *(pa[2](a, 3)) << std::endl
        << (*pa[2])(a, 3) << ':' << *((*pa[2])(a, 3)) << std::endl;

    /* output:
        0x7ffdeee3d460:1
        0x7ffdeee3d460:1
        0x7ffdeee3d468:3
        0x7ffdeee3d468:3
    */

    return 0;
}