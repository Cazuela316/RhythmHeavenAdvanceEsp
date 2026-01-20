#include "file.h"

#include <stdlib.h>

#include <stdio.h>

ConsBuffer LoadWholeFile(const char* path) {
    ConsBuffer buffer = {0};

    if (path == NULL)
        return buffer;

    FILE* fp = fopen(path, "rb");
    if (fp == NULL)
        return buffer;

    if (fseek(fp, 0, SEEK_END) != 0) {
        fclose(fp);
        return buffer;
    }

    u64 fileSize = ftell(fp);
    if (fileSize == (u64)-1L) {
        fclose(fp);
        return buffer;
    }

    BufferInit(&buffer, fileSize);

    rewind(fp);
    u64 bytesCopied = fread(buffer.data_void, 1, buffer.size, fp);
    if (bytesCopied < fileSize && ferror(fp)) {
        fclose(fp);
        BufferDestroy(&buffer);
        return buffer;
    }

    fclose(fp);
    return buffer;
}

int WriteWholeFile(ConsBuffer* buffer, const char* path) {
    if (path == NULL)
        return 1;

    if (buffer->size > 0 && buffer->data_void == NULL)
        return 1;

    FILE* fp = fopen(path, "wb");
    if (fp == NULL)
        return 1;

    if (buffer->size > 0) {
        u64 bytesCopied = fwrite(buffer->data_void, 1, buffer->size, fp);
        if (bytesCopied < buffer->size && ferror(fp)) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}
