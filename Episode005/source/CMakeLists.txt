cmake_minimum_required(VERSION 3.5)
project(
    NewYearCountDown
    VERSION 1.0.0
    DESCRIPTION "Happy New Year Count-down Application"
    LANGUAGES CXX
)

# List sources here
add_executable(
    NewYearBinary
    main.cpp
    src/timer.cpp
)

target_compile_features(NewYearBinary PRIVATE cxx_std_23)
target_include_directories(NewYearBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
