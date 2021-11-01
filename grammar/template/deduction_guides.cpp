#include <iostream>

template <typename T> struct C1 {
  C1(const T &) { std::cout << typeid(T).name() << std::endl; }
};

C1(int)->C1<long>;

C1 x1{41};
C1 x2{'x'};

int main() { return 0; }