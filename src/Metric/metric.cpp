#include "metric.hpp"

int Metric::depth_to_pressure(int depth)
{
  return depth / 10 + 1;
};

int Metric::pressure_to_depth(int pressure)
{
  return (pressure - 1) * 10;
};

int Metric::ata_to_bar(int ata)
{
  return ata;
};

double Metric::get_partial_pressure(double mix, int depth)
{
  int ata = depth_to_pressure(depth);

  return ata * mix;
};

double Metric::get_ideal_mix(int depth, double partial_pressure)
{
  int ata = depth_to_pressure(depth);
  return partial_pressure / ata;
};