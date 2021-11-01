/// \b 函数不能偏特化
/// \c 限定模板类的实现

#include <cstdio>
#include <iostream>

#include <vector>

class A{
public:
    void bar(){
        std::cout << "bar\n";
    }
};

class B{

};

template<typename T>
void foo(T a){
    a.bar();
}

/// \a Function template partial specialization is not allowedclang(function_template_partial_spec)
// template<typename T>
// void foo<T>(){}


int main(){
    foo(A());

    /// \a No member named 'bar' in 'B'clang(no_member)
    // foo(B());

    return 0;
}