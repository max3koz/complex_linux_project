#include <stdio.h>
#include "calc.h"

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    }
    return a / b;
}