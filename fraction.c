#include <stdio.h>
struct fraction
{
  int numerator;
  int denominator;
};
struct fraction get_fraction_by_ret()
{
  struct fraction f;
  printf(
