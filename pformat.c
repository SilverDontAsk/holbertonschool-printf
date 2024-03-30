#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *pformat - %p format for printf
 *@arg: arguments
 *@c: var for count
 *
 *Return: void
 */
void pformat(va_list arg, int *c)
{
void *ptr = va_arg(arg, void *);
unsigned long int num = (unsigned long int)ptr;
char buffer[20];
int len = 0;

	do {
	int rem = num % 16;
		buffer[len++] = (rem < 10) ? rem + '0' : rem - 10 + 'a';
		num /= 16;
	} while (num > 0);

	buffer[len++] = 'x';
	buffer[len++] = '0';

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
