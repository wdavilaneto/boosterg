ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK)

add_executable(test_mime_types test_mime_types.cpp)

target_link_libraries( test_mime_types
    ${Boost_LIBRARIES}
    mime_types
)