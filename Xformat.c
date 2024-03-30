#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * Xformat - %X format of printf
 * @arg: arguments
 * @c: var
 *
 * Return: Void
 */
void Xformat(va_list arg, int *c)
{
unsigned int num = va_arg(arg, unsigned int);
char buffer[12];
int len = 0;

	if (num == 0)
	{
		putchar('0');
		(*c)++;
		return;
	}

	while (num > 0)
	{
	int rem = num % 16;
		buffer[len++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';
		num /= 16;
	}
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
	char temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}

	for (int i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(*c)++;
	}
}
