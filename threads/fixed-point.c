#include <stddef.h>
#include <stdint.h>
#include "threads/fixed-point.h"

#define F 16384     // 2**14

/* Converts an integer to a fixed-point number. */
int
int_to_fixed_point (int n)
{
  return n * F;
}

/* Converts a fixed-point number to an integer. */
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

/* Adds two fixed-point numbers. */
int
fixed_point_add (int x, int y)
{
  return x + y;
}

/* Subtract a fixed-point number y from fixed-point number x. */
int
fixed_point_subtract (int x, int y)
{
  return x - y;
}

/* Adds a fixed-point number x to an integer n. */
int
mixed_type_add (int x, int n)
{
  return x + n * F;
}

/* Subtract an int n from a fixed-point number x. */
int
mixed_type_subtract (int x, int n)
{
  return x - n * F;
}

/* Multiplies to fixed-point numbers. */
int
fixed_point_multiply (int x, int y)
{
  return ((int64_t) x) * y / F;
}

/* Multiplies a fixed-point number x with an integer n. */
int
mixed_type_multiply (int x, int n)
{
  return x * n;
}

/* Divides two fixed-point numbers x by y. */
int
fixed_point_divide (int x, int y)
{
  return ((int64_t) x) * F / y;
}

/* Divide a fixed-point number x by an integer n. */
int
mixed_type_divide (int x, int n)
{
  return x / n;
}
