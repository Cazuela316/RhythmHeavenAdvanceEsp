#ifndef CONS_ERROR_H
#define CONS_ERROR_H

void Warn(const char* fmt, ...);
void Error(const char* fmt, ...);

void Panic(const char* fmt, ...) __attribute__((noreturn));

#endif // CONS_ERROR_H
