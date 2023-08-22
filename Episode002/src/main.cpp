#include <iostream>

template <typename T>
void add(T x, T y) {
    std::cout << x+y << std::endl;
}

int main() {
    int a = 5;
    int b = 2;

    std::cout << "Hello from C++ 23 with CMake on Windows/Linux." << std::endl;

    add(a, b);

    return 0;
}
