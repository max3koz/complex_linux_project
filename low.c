#include <stdio.h>
#include "convert/convert.h"

char text[256];

int main() {
    printf("Enter text: ");
    fgets(text, 256, stdin);

    to_lower(text);

    printf("Lower: %s", text);
    return 0;
}