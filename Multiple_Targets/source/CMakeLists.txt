cmake_minimum_required(VERSION 3.5)
project(ExampleApp
        VERSION 0.0.1
        DESCRIPTION "Sample Example"
        LANGUAGES CXX)


# Setting Configuration
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)  # now no need to define compiler explicitely later in CMAKE file 

#Targets

#Target 1 - static library
add_library(operation STATIC src/operation.cxx)
target_include_directories(operation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# target_compile_features(operation PUBLIC cxx_std_20)

#Target 2 - main executable
add_executable(app example.cxx src/dog.cxx)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(app PUBLIC operation)
# target_compile_features(app PUBLIC cxx_std_20)