#include <iostream>
#include <vector>
#include <numeric>

void countdown(int start) {
    for (int count = start; count > 0; --count) {
        std::cout << count << std::endl;
    }
}

int main() {
    countdown(5);

    std::cout << "Happy birthday!" << std::endl;

    return 0;
}
