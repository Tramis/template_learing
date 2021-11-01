#include <iostream>

template <typename T> struct S { T val; };
explicit S(const char *)->S<std::string>;

// S s1 = {"hello"};
S s2{"hello"};

int main() { return 0; }