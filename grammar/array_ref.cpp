/// \b 并不能编译通过...

#include <iostream>

auto getArray() -> int(&)[2];

int main(){
    auto [x, y] = getArray();

    x = 1;
    y = 2;

    std::cout << x << ' ' << y << std::endl;

    return 0;
}