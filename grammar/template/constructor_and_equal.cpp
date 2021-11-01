/// \b 显式推导指引

#include <iostream>

template <typename T> struct S {
    T val;
    template <typename U> T &operator=(const U &s) {
        std::cout << typeid(T).name() << std::endl;
    }

    // S(T){
    //     std::cout << typeid(T).name() << std::endl;
    // }

    template<typename U>
    S(U){
        std::cout << "T   " << typeid(T).name() << std::endl;
        std::cout << "U   " << typeid(U).name() << std::endl;
    }
};
S(const char *)->S<std::string>;

S a1{"hello"};
S a2 = {"hello"};
S a3({"hello"});

int main() { return 0; }