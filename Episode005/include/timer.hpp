#pragma once

#include <iostream>

class Timer {
    int start;

    public:
        Timer(int s);
        void get_start();
        void set_start();
        void count_down();
        void turn_on();
};
