#include "threads/fixed-point.h"
#include <stddef.h>
#include <stdint.h>

#define F 16384     // 2**14

int
int_to_fixed_point (int n)
{
  return n * F;
}

int fixed_point_to_int (int x)
{
  return x / F;
}

/* Convert fixed-point number to int, rounding to the nearest int. */
int
round_fixed_point_to_int (int x)
{
  if (x >= 0)
    {
      return (x + F / 2) / F;
    }
  else
    {
      return (x - F / 2) / F;
    }
}

int
fixed_point_add (int x, int y)
{
  return x + y;
}

/* Subtract y from x. */
int
fixed_point_subtract (int x, int y)
{
  return x - y;
}

int
mixed_type_add (int x, int n)
{
  return x + n * F;
}

/* Subtract an int from a fixed-point number. */
int
mixed_type_subtract (int x, int n)
{
  return x - n * F;
}

int
fixed_point_multiply (int x, int y)
{
  return ((int64_t) x) * y / F;
}

int
mixed_type_multiply (int x, int n)
{
  return x * n;
}

/* Divide x by y. */
int
fixed_point_divide (int x, int y)
{
  return ((int64_t) x) * F / y;
}

/* Divide x by n. */
int
mixed_type_divide (int x, int n)
{
  return x / n;
}
