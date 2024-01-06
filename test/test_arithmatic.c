#include "unity.h"
#include "arithmatic.h"

void setUp(void) {}

void tearDown(void) {}

void test_add(void) {
  TEST_ASSERT_EQUAL_INT(10, add(6, 4));
  TEST_ASSERT_EQUAL_INT(10, add(5, 5));
  TEST_ASSERT_EQUAL_INT(10, add(9, 1));
  TEST_ASSERT_EQUAL_INT(100, add(100, 0));
  TEST_ASSERT_EQUAL_INT(0, add(0, 0));
  TEST_ASSERT_EQUAL_INT(0, add(1, -1));
}

void test_add10(void) {
  TEST_ASSERT_EQUAL_INT(10, add10(0));
  TEST_ASSERT_EQUAL_INT(9, add10(-1));
  TEST_ASSERT_EQUAL_INT(11, add10(1));
}

void test_substract(void) {
  TEST_ASSERT_EQUAL_INT(0, substract(0, 0));
  TEST_ASSERT_EQUAL_INT(2, substract(1, -1));
  TEST_ASSERT_EQUAL_INT(0, substract(-1, -1));
  TEST_ASSERT_EQUAL_INT(9, substract(10, 1));
  TEST_ASSERT_EQUAL_INT(-9, substract(1, 10));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_add);
  RUN_TEST(test_add10);
  RUN_TEST(test_substract);
  return UNITY_END();
}
