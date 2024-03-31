#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * xformat - %x format for printf
 * @arg: arguments
 * @c:variable of number of chars printed
 * Return: Void
 */
void xformat(va_list arg, int *c)
{
unsigned int num = va_arg(arg, unsigned int);
char buffer[12], temp;
int len = 0, i, rem, j;

	if (num == 0)
	{
		putchar('0');
		(*c)++;
		return;
	}
	while (num > 0)
	{
		rem = num % 16;

		buffer[len++] = (rem < 10) ? rem + '0' : rem - 10 + 'a';
		num /= 16;
	}
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = buffer[i];

		buffer[i] = buffer[j];
		buffer[j] = temp;
	}
	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(*c)++;
	}
}
