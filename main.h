#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char *s);
void pformat(va_list arg, int *c);
void oformat(va_list arg, int *c);
void Xformat(va_list arg, int *c);
void xformat(va_list arg, int *c);
void uformat(va_list arg, int *c);
#endif
