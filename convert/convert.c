#include <ctype.h>
#include "convert.h"

void to_upper(char *s) {
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

void to_lower(char *s) {
    while (*s) {
        *s = tolower(*s);
        s++;
    }
}