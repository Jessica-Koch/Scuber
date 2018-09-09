#ifndef imperial_hpp

class Imperial
{
  int depth_to_pressure(int depth);
  int pressure_to_depth(int pressure);
  double bar_to_psi(double bar);
  double psi_to_bar(double psi);
  double get_partial_pressure(double mix, int depth);
  double get_ideal_mix(int depth, double partial_pressure);
};

#define imperial_hpp
#include <stdio.h>
#endif /* imperial_hpp */