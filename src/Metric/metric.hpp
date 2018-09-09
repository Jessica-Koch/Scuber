#ifndef metric_hpp

class Metric
{
  int depth_to_pressure(int depth);
  int pressure_to_depth(int pressure);
  int ata_to_bar(int ata);
  double get_partial_pressure(double mix, int depth);
  double get_ideal_mix(int depth, double partial_pressure);
};

#define metric_hpp
#include <stdio.h>
#endif /* metric_hpp */
