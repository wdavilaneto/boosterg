cmake_minimum_required(VERSION 2.8.4)
project(boosterg)
set (boosterg_VERSION_MAJOR 1)
set (boosterg_VERSION_MINOR 0)

enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

## pthread find block
find_package (Threads)

## Checking BOOST dependency block
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
#find_package(Boost REQUIRED COMPONENTS system thread exception filesystem locale log log_setup coroutine context)
find_package(Boost 1.57 REQUIRED thread system)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

message("Boost include dir: ${Boost_INCLUDE_DIR}")
message("Boost libraries: ${Boost_LIBRARIES}")
message("Boost lib dir: ${Boost_LIBRARY_DIR} ")

include_directories ("${PROJECT_SOURCE_DIR}")

include_directories(${Boost_INCLUDE_DIR})
#link_directories(${Boost_LIBRARY_DIR})

add_subdirectory (server)
add_subdirectory (test)

#set(SOURCE_FILES main.cpp)

add_executable(boosterg main.cpp)

target_link_libraries( boosterg
    pthread
    mime_types
    server
    ${Boost_LIBRARIES}
)

