#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
/**
 * dformat - handles the integers in printf
 * @arg: list of inputs
 * @count: number of characters printed
 * Return: nothing
 */
void diformat(va_list arg, int *count)
{
	int num = va_arg(arg, int);
	int divisor = 1;
	if (num == INT_MIN)
	{
		putchar('-');
		putchar('2');
		num = 147483648;
		*count += 2;
	}
	else if (num < 0)
	{
		putchar('-');
		num = -num;
		(*count)++;
	}
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
		(*count)++;
	}
}
