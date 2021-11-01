/// \b 推导类型才能用的万能引用

#include <iostream>

int ad(const int &a, const int &b) { return a + b; }

int e_ad(int &&a, int &&b) { return a + b; }

template <typename T> int t_ad(T &&a, T &&b) { return a + b; }

/// \a t_add(1, b);
template <typename T, typename U> int t_ad(T &&a, U &&b) { return a + b; }

int main() {
  int a = 1, b = 2;
  std::cout << ad(a, b) << std::endl;
  std::cout << ad(3, b) << std::endl;

  std::cout << t_ad(a, b) << std::endl;
  std::cout << t_ad(1, 2) << std::endl;
  std::cout << t_ad(1, b) << std::endl;

  std::cout << e_ad(1, 2) << std::endl;
  // std::cout << e_ad(a, b) << std:: endl;

  return 0;
}