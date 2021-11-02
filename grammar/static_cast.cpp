/// \b static_cast and \b (void*)

#include <iostream>

int main(){
    float f = 12.3;
    float *pf = &f;
    
    void *pv = static_cast<void*>(pf);

    /// \c not_allowed Static_cast from 'float *' to 'int *' is not allowed
    // int *pn1 = static_cast<int*>(pf);

    int *pn = static_cast<int*>(pv);
    float *pf2 = static_cast<float*>(pv);

    /// \c not_allowed Static_cast from 'int *' to 'float *' is not allowed
    // float *pf3 = static_cast<float*>(pn);

    int n = static_cast<int>(f);


    std::cout << *pn << ' ' << *pf2 << std::endl;
    std::cout << n << std::endl;

    /// ====================== decay =========================

    char s[] = "hello";
    char *ps = s;
    char *ps1 = static_cast<char*>(s);
    std::cout << s << ' ' << *ps << ' ' << *ps1 << std::endl;
    std::cout << "s:  " << typeid(s).name() << ' ' << "ps: " << typeid(ps).name() << ' ' << "ps1:" << typeid(ps1).name() <<  std::endl;

    /// ====================== ptr =========================

    /// \c clang(init_conversion_failed) Cannot initialize a variable of type 'float *' with an rvalue of type 'int *'
    // float *pf3 = &n;
    // float *pf3 = pn;

    return 0;
}