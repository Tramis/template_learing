# template learing
学习 `c++` 模板元编程（以及 `c++17`）

## 吐了
  
```c++
typeid(a).name()
```

输出看编译器，`clang` 处理过，好像叫 `mangle`，为了 `demangle` 需要用 `c++filt`

```bash
./a.out | c++filt --types
```

[参考 stackoverflow: why-does-typeid-name-return-weird-characters](https://stackoverflow.com/questions/4465872/why-does-typeid-name-return-weird-characters-using-gcc-and-how-to-make-it-prin)

