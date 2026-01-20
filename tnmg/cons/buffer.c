#include "buffer.h"

#include <stdlib.h>

#include <string.h>

void BufferInit(ConsBuffer* buffer, u64 size) {
    if (buffer == NULL)
        return;

    if (size == 0)
        buffer->data_void = 0x00;
    else {
        buffer->data_void = malloc(size);
        memset(buffer->data_void, 0x00, size);
    }

    buffer->size = size;
}

void BufferInitCopy(ConsBuffer* buffer, const void* data, u64 size) {
    if (buffer == NULL)
        return;

    if (size == 0)
        buffer->data_void = 0x00;
    else {
        buffer->data_void = malloc(size);
        memcpy(buffer->data_void, data, size);
    }

    buffer->size = size;
}

void BufferDestroy(ConsBuffer* buffer) {
    if (buffer == NULL)
        return;

    if (buffer->data_void)
        free(buffer->data_void);

    buffer->data_void = NULL;
    buffer->size = 0;
}

void BufferResize(ConsBuffer* buffer, u64 newSize) {
    if (buffer == NULL)
        return;

    if (buffer->data_void == NULL) {
        BufferInit(buffer, newSize);
        return;
    }

    if (buffer->size == newSize)
        return;
    if (newSize == 0) {
        BufferDestroy(buffer);
        return;
    }

    buffer->data_void = realloc(buffer->data_void, newSize);
    if (newSize > buffer->size) {
        memset(buffer->data_u8 + buffer->size, 0, newSize - buffer->size);
    }

    buffer->size = newSize;
}
