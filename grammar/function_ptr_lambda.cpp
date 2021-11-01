/// \b 函数指针指向lambda函数

#include <iostream>

int main(){
    // initial_list {}
    int(*ptr)(int,int){
        [](int a,int b){return a + b;}
    };

    std::cout << ptr(1, 2) << std::endl;

    return 0;
}