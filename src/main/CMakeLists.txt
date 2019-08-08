project(factorial)

add_library(lib_fact STATIC fact.cc)
set_target_properties(lib_fact
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib/"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib/"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
)

add_executable(fact main.cc)
target_link_libraries(fact PRIVATE ${CMAKE_SOURCE_DIR}/lib/liblib_fact.a)
