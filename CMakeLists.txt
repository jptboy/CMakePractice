# this should be in every cmake file
cmake_minimum_required(VERSION 3.5)
# name of the project
project(cppAI)

# making sure CMAKE finds boost
find_package(Boost 1.58 REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

# Adds the given directories to those the compiler uses to search for include files. 
# Relative paths are interpreted as relative to the current source directory.
include_directories(include)




# we want to set the output directory to bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# c++ 14
set(CMAKE_CXX_STANDARD 14)

# adding warnings
add_compile_options(-Wall -Wextra -Wpedantic)


# we want to get a list of all the files in the src folder
file(GLOB SOURCES_CC "src/*.cc")
file(GLOB SOURCES_CPP "src/*.cpp")

# we compile all of those executables together
add_executable(NNdemo ${SOURCES_CC} ${SOURCES_CPP})
