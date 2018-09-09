#include <iostream>
#include "calculator.hpp"
#include "./src/Imperial/imperial.hpp"
#include "./src/Metric/metric.hpp"

int main(int argc, const char *argv[])
{
  Imperial imperial;
  Imperial pImperial = &imperial;

  Metric metric;
  Metric pMetric = &metric;

  Calc calc;
  Calc pCalc = &calc;
  std::count pCalc->add(3, 9) return 0;
}