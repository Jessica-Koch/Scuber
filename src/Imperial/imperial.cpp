#include "imperial.hpp"

int Imperial::depth_to_pressure(int depth)
{
  return depth / 33 + 1;
};

int Imperial::pressure_to_depth(int pressure)
{
  return (pressure - 1) * 33;
};

double Imperial::bar_to_psi(double bar)
{
  return bar * 14.7;
};

double Imperial::psi_to_bar(double psi)
{
  return psi / 14.7;
};

double Imperial::get_partial_pressure(double mix, int depth)
{
  int ata = depth_to_pressure(depth);
  return ata * mix;
};

double Imperial::get_ideal_mix(int depth, double partial_pressure)
{
  int ata = depth_to_pressure(depth);
  return partial_pressure / ata;
};