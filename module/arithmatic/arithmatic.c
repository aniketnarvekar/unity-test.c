#include "arithmatic.h"

int add(int x, int y) {
  return x + y;
}

int add10(int x) {
  return add(x, 10);
}

int substract(int x, int y) {
  return x - y;
}

int substract_by_10(int x) {
  return substract(x, 10);
}

int multiply(int x, int y) {
  return x * y;
}

int multiply_by_10(int x) {
  return multiply(x, 10);
}

int divide(int dividend, int divisor) {
  return dividend/divisor;
}

int divide_by_10(int dividend) {
  return divide(dividend, 10);
}
