project(factorial)

add_executable(test_fact test_fact.cc)
target_link_libraries(test_fact ${CMAKE_SOURCE_DIR}/lib/liblib_fact.a)

include_directories(test_fact PRIVATE ../src/main)
