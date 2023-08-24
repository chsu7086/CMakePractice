#include "timer.hpp"

Timer::Timer(int s) {
    start = s;
}

void Timer::get_start() {
    std::cout << std::endl << "The timer starts count-down " << start << " seconds before the event." << std::endl;
}

void Timer::set_start() {
    std::cout << std::endl << "How many seconds before the timer starts count-down? ";
    std::cin >> start;
}

void Timer::count_down() {
    for (int s = start; s > 0; --s) {
        std::cout << s << "..." << std::endl;
    }

    std::cout << "Happy New Year!!" << std::endl;
}

void Timer::turn_on() {
    int ans = 0;

    while(true) {
        std::cout << std::endl << "Would you start the countdown? ";
        std::cout << "(0: proceed to the countdown / 1: check the starting time / 2: set the time) ";
        std::cin >> ans;

        if (ans == 0) {
            count_down();
            break;
        } else if (ans == 1) {
            get_start();
        } else if (ans == 2) {
            set_start();
        } else {
            std::cout << std::endl << "It's invalid input. Try again." << std::endl;
        }
    }
}