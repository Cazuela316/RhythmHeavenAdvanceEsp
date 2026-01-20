#ifndef CONS_BUFFER_H
#define CONS_BUFFER_H

#include "type.h"

typedef struct ConsBuffer {
    union {
        s8* data_s8;
        u8* data_u8;
        void* data_void;
    };
    u64 size;
} ConsBuffer;
_Static_assert(
    sizeof(ConsBuffer) <= 16,
    "sizeof ConsBuffer must be 16 bytes or less to be passed "
    "through a register on modern systems"
);

// Creates a zero-initialized buffer of the given size.
void BufferInit(ConsBuffer* buffer, u64 size);
// Creates a buffer by copying data from a raw pointer.
void BufferInitCopy(ConsBuffer* buffer, const void* data, u64 size);

// Destroy a buffer.
void BufferDestroy(ConsBuffer* buffer);

// Resize a buffer.
void BufferResize(ConsBuffer* buffer, u64 newSize);

static inline bool BufferIsValid(ConsBuffer* buffer) {
    if (buffer == (ConsBuffer*)0)
        return false;
    return buffer->data_void != ((void*)0) && buffer->size > 0;
}

typedef union ConsBufferView {
    ConsBuffer as_buffer;
    struct {
        union {
            s8* data_s8;
            u8* data_u8;
            void* data_void;
        };
        u64 size;
    };
} ConsBufferView;
_Static_assert(
    sizeof(ConsBufferView) == sizeof(ConsBuffer),
    "ConsBufferView & ConsBuffer must share the same structure"
);

static inline bool BufferViewIsValid(ConsBufferView* view) {
    return BufferIsValid(&view->as_buffer);
}

#endif // CONS_BUFFER_H
