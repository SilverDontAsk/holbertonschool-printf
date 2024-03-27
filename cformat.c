#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * cformat - handles the characters in printf
 * @arg: list of inputs
 * @count: number of characters printed
 * Return: nothing
 */
void cformat(va_list arg, int *count)
{
char chara = (char)va_arg(arg, int);
putchar(chara++);
(*count)++;
}
