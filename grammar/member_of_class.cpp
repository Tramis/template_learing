/// \b a.A::b

#include <iostream>

class A{
public:
    int a, b;
};

int main(){
    A a = {1, 2};
    std::cout << a.a << ' ' << a.A::b << std::endl;
    return 0;
}