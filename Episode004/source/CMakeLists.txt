cmake_minimum_required(VERSION 3.5)
project(
    Birthday
    VERSION 0.0.1
    DESCRIPTION "Birthday Party Countdown App"
    LANGUAGES CXX
)
# Target
add_executable(BirthdayBinary main.cpp)
target_compile_features(BirthdayBinary PRIVATE cxx_std_23)
