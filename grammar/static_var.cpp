#include <iostream>

class A {
  public:
    inline static int a;
    static constexpr int b = 1;
    int getA() {
        // static int a = 1;
        a = 1;
        return a;
    }
};

int main() {
    A a;
    std::cout << a.getA() << std::endl;
    a.a = 2;
    std::cout << a.getA() << std::endl;
    // a.b ++;
    return 0;
}