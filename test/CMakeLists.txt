add_executable(test_arithmatic
  test_arithmatic.c
)

add_executable(test_fibonacci
  test_fibonacci.c
)

target_link_libraries(test_arithmatic
  arithmatic
  Unity)

target_link_libraries(test_fibonacci
  fibonacci
  Unity
)

add_test(arithmatic_test
  test_arithmatic)
add_test(fibonacci_test
  test_fibonacci)
