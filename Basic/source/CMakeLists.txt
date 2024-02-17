cmake_minimum_required(VERSION 3.5)
project(ExampleApp
        VERSION 0.0.1
        DESCRIPTION "Sample Example"
        LANGUAGES CXX)
add_executable(app example.cxx)   
target_compile_features(app PRIVATE cxx_std_20)