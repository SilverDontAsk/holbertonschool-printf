#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * percentform - handles the percent in printf
 * @arg: list of inputs
 * @count: number of characters printed
 * Return: nothing
 */
void percentformat(va_list arg, int *count)
{
	(void)arg;
	putchar('%');
	(*count)++;
}
