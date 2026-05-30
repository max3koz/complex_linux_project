#include <stdio.h>
#include <math.h>
#include "calc.h"

double sqrt_local(double x) {
    if (x < 0) {
        printf("Error: negative number for sqrt\n");
        return 0;
    }
    return sqrt(x);
}