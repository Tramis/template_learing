#include <iostream>

// 继 承 所 有 基 类 里 的 函 数 调 用 运 算 符
template <typename... Ts> struct overload : Ts... { using Ts::operator()...; };

// 基 类 的 类 型 从 传 入 的 参 数 中 推 导
template <typename... Ts> overload(Ts...) -> overload<Ts...>;

int main() {
    auto twice =
        overload{
            [](std::string &s) { s += s; }, 
            [](auto &v) { v *= 2; }
        };
}