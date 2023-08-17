#include <iostream>

template <typename T>
void add(T x, T y) {
    std::cout << x+y << std::endl;
}

int main() {
    int a = 3;
    int b = 8;

    std::cout << "Hello from C++ 23 with CMake on Windows/Linux." << std::endl;

    add(a, b);

    return 0;
}
