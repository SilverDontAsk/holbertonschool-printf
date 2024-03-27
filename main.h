#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
void diformat(va_list arg, int *count);
void sformat(va_list arg, int *count);
void percentformat(va_list arg, int *count);
void cformat(va_list arg, int *count);
#endif
