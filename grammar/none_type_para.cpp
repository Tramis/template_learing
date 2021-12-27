#include <iostream>

template <auto ind> int f(const int * arr){
    return arr[ind];
}

template <typename T, T b>
T add(const T & a){
    return a+b;
}

/// \b clang(auto_not_allowed) 'auto' not allowed in function prototype
// template <auto value>
// auto add(const auto & a){
//     return a+value;
// }

/// 这 auto 太离谱了
template<auto value>
auto add (const decltype(value) & a){
    return a + value;
}

int main(){
    int a[3] = {1, 2, 3};
    std::cout 
        << f<2>(a) << std::endl
        << add<int, 2>(12) << std::endl
        << add<2>(3) << std::endl;

    /* output
        3
        14
        5
    */

    return 0;
}