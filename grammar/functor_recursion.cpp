/// \b 仿函数

#include <iostream>

void foo(int n){
    struct _fibo{
        int operator() (int _n){
            if(_n <= 2){
                std::cout << 1 << std::endl;
                return 1;
            }
            int ans = (*this)(_n-1) + (*this)(_n-2);
            std::cout << ans << std::endl;
            return ans;
        }
    }fibo;

    fibo(n);
}

int main(){
    foo(4);
    return 0;
}

