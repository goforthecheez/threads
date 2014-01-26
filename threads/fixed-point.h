#include <stdint.h>

int int_to_fixed_point (int);
int fixed_point_to_int (int);
int round_fixed_point_to_int (int);

int fixed_point_add (int, int);
int fixed_point_subtract (int, int);
int fixed_point_multiply (int, int);
int fixed_point_divide (int, int);

int mixed_type_add (int, int);
int mixed_type_subtract (int, int);
int mixed_type_multiply (int, int);
int mixed_type_divide (int, int);
