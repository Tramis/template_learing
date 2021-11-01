// 重载下标运算符 和 函数返回左值


#include <iostream>
#include <vector>

#include <hash_map>

class A{
private:
    std::vector<int> mp;
public:
    int & operator[](int key){
        key = key>0? key : 0;
        if(key >= mp.size()){
            mp.resize(key+1);
        }
        return mp.at(key);
    }

    void print(){
        for(auto i: mp){
            std::cout << i << ' ';
            std::cout << std::endl;
        }
    }
};

int main(){
    A a;
    a[3] = 3;
    a[2] = 1;
    a.print();

    return 0;
}