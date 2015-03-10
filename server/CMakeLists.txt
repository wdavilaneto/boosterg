add_subdirectory (mime_types)

add_library(server server.cpp connection.cpp reply.cpp request_handler.cpp request_parser.cpp )

target_link_libraries( server
    mime_types
    ${Boost_LIBRARIES}
)
