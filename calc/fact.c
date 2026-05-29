#include <stdio.h>
#include "calc.h"

long long factorial(int n) {
    if (n < 0) {
        printf("Error: factorial of negative number\n");
        return 0;
    }

    long long result = 1;   // long long — велике число
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}