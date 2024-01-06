#include "unity.h"
#include "fibonacci.h"

void setUp(void) {}

void tearDown(void) {}

void test_fibonacci (void) {
  TEST_ASSERT_EQUAL(1, fib(1));
  TEST_ASSERT_EQUAL(1, fib(2));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_fibonacci);
  return UNITY_END();
}
