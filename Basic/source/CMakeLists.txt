cmake_minimum_required(VERSION 3.5)
project(ExampleApp
        VERSION 0.0.1
        DESCRIPTION "Sample Example"
        LANGUAGES CXX)

#Targets
add_executable(app example.cxx)   
add_executable(app1 example.cxx)   
add_executable(app2 example.cxx)   
target_compile_features(app PRIVATE cxx_std_20)
target_compile_features(app1 PRIVATE cxx_std_20)
target_compile_features(app2 PRIVATE cxx_std_20)