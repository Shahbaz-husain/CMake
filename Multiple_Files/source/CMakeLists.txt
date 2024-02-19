cmake_minimum_required(VERSION 3.5)
project(ExampleApp
        VERSION 0.0.1
        DESCRIPTION "Sample Example"
        LANGUAGES CXX)

#Targets
add_executable(app example.cxx
                src/dog.cxx
                src/operation.cxx)
# can alse use below mentioned method to fetch the source files
# file(GLOB_RECURSE SRC_FILES src/*.cxx)    -> will create a list of source files in src_files variable which can be used during add_executable command but this method is discuraged to use
# add_executable(app example.cxx ${SRC_FILES})

#Adding compiler information
target_compile_features(app PRIVATE cxx_std_20)

#Adding additional libraries details which are required from project execution
target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)