#ifndef CONS_FILE_H
#define CONS_FILE_H

#include "buffer.h"

// Load a whole file into a buffer.
ConsBuffer LoadWholeFile(const char* path);

// Returns 0 on success, 1 on failure.
int WriteWholeFile(ConsBuffer* buffer, const char* path);

#endif // CONS_FILE_H
