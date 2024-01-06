add_library(fibonacci STATIC fibonacci.c)

target_include_directories(fibonacci PUBLIC ${CMAKE_CURRENT_LIST_DIR})
