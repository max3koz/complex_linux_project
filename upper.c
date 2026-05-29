#include <stdio.h>
#include "convert/convert.h"

int main() {
    char text[256];     // масив символів

    printf("Enter text: ");
    fgets(text, 256, stdin);

    to_upper(text);

    printf("Upper: %s", text);
    return 0;
}