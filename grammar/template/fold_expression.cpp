/// \b 折叠表达式（右）

#include <iostream>

template<typename T1, typename... T>
auto my_max(T1 arg1, T... args){
    T1 ans = arg1;
    auto _my_max = [&](auto & a, const auto & b){
        a = a>b?a:b;
    };
    (..., _my_max(ans, args));
    return ans;
}

int main(){
    std::cout << my_max(2, 3, 4, 54, 123, 3213, 1, 5, 6, 7, 9) << std::endl;
    return 0;
}