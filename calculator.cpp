#include "calculator.hpp"

int Calc::add(int a, int b)
{
  return a + b;
};

int Calc::subtract(int a, int b)
{
  return a - b;
};

int Calc::multiply(int a, int b)
{
  return a * b;
};

int Calc::divide(int a, int b)
{
  return a / b;
};

int Calc::pow(int num, int power)
{
  if (power <= 0)
  {
    return 1;
  }

  return num * pow(num, power - 1);
};