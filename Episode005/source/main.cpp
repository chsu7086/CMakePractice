#include <iostream>
#include "timer.hpp"

int main() {
    Timer* tim = new Timer(10);

    tim->turn_on();

    return 0;
}
