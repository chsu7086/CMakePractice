cmake_minimum_required(VERSION 3.5)
project(
    HelloCMake
    VERSION 1.0.0
    DESCRIPTION "The first CMake Project"
    LANGUAGES CXX
)
add_executable(HelloCMakeBinary main.cpp)
target_compile_features(HelloCMakeBinary PRIVATE cxx_std_23)
