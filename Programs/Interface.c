#include <stdio.h>
#include <math.h>
typedef struct {
    double (*area)(void *self);
    double (*perimeter)(void *self);
} Shape;
