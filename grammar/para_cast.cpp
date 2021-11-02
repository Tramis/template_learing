#include <iostream>

void f(int a){
}

int main(){
    std::cout << typeid(f).name() << std::endl;
    return 0;
}



