#include <stdio.h>
#include "calc/calc.h"

// Function to read double type number
int read_double(double *value) {
    if (scanf("%lf", value) != 1) {
        printf("Error: expected a number!\n");
        return 0;
    }
    return 1;
}

// Function to read int type number
int read_int(int *value) {
    if (scanf("%d", value) != 1) {
        printf("Error: expected an integer!\n");
        return 0;
    }
    return 1;
}

int main() {
    int choice = 7;
    double a, b;

    while (choice != 0) {
        printf("\n=== Calculator Menu ===\n");
        printf("1 - Add\n");
        printf("2 - Subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("5 - Factorial\n");
        printf("6 - Square root\n");
        printf("0 - Exit\n");
        printf("Choose option: ");

        if (!read_int(&choice)) continue;

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                if (!read_double(&a) || !read_double(&b)) break;
                    printf("Result: %.2lf\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                if (!read_double(&a) || !read_double(&b)) break;
                    printf("Result: %.2lf\n", sub(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                if (!read_double(&a) || !read_double(&b)) break;
                printf("Result: %.2lf\n", mul(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                if (!read_double(&a) || !read_double(&b)) break;
                printf("Result: %.2lf\n", divide(a, b));
                break;

            case 5: {
                int n;
                printf("Enter integer: ");
                if (!read_int(&n)) break;
                printf("Result: %lld\n", factorial(n));
                break;
            }

            case 6:
                printf("Enter number: ");
                if (!read_double(&a)) break;
                printf("Result: %.2lf\n", sqrt(a));
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Unknown option\n");
        }
    }

    return 0;
}
