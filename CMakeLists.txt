cmake_minimum_required(VERSION 2.8.4)
project(boosterg)

set(Boost_INCLUDE_DIR "/usr/local/boost")
set(boost_library_dir "${BOOST_ROOT}/stage/lib")
set(Boost_THREADAPI pthread)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_LIBS ON)

find_package (Threads)
find_package(Boost REQUIRED COMPONENTS system thread exception filesystem locale log log_setup test_exec_monitor unit_test_framework )

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

include_directories ("${PROJECT_SOURCE_DIR}/server")
add_subdirectory (server)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)

add_executable(boosterg main.cpp)

target_link_libraries( boosterg
    ${Boost_LIBRARIES}
    pthread
    server
)