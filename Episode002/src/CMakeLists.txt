cmake_minimum_required(VERSION 3.5)
project(
    HelloCMake
    VERSION 0.0.1
    DESCRIPTION "The first CMake Project"
    LANGUAGES CXX
)
add_executable(HelloCMakeBinary main.cpp)
target_compile_features(HelloCMakeBinary PRIVATE cxx_std_23)
