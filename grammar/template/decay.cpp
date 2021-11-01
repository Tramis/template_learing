/// \b 类型推导退化

#include <iostream>

template<typename T>
struct C{
    C(const T&){
        std::cout << typeid(T).name() <<std::endl;
    }
};

template<typename T> C(T) -> C<T>;

template<typename T>
struct D{
    D(const T&){
        std::cout << typeid(T).name() <<std::endl;
    }
};

C x{"hello"};
D y{"hello"};

int main(){
    return 0;
}