find_package(Boost REQUIRED COMPONENTS unit_test_framework )
ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK)

add_executable(test_header test_header.cpp)

target_link_libraries( test_header
    ${Boost_LIBRARIES}
)

