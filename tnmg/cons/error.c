#include "error.h"

#include <stdlib.h>
#include <stdio.h>

#include <stdarg.h>

#include <string.h>

void Warn(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    char buffer[1024];
    vsnprintf(buffer, sizeof(buffer), fmt, args);

    printf("\nWARN: %s\n\n", buffer);

    va_end(args);
}

void Error(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    char buffer[1024];
    vsnprintf(buffer, sizeof(buffer), fmt, args);

    printf("\nERROR: %s\n\n", buffer);

    va_end(args);
}

void Panic(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    char buffer[1024];
    vsnprintf(buffer, sizeof(buffer), fmt, args);

    printf("\nPANIC: %s\n\n", buffer);

    va_end(args);

    exit(1);

    __builtin_unreachable();
}
