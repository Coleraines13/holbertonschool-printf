#include "main.h"

/**
 * p_char - prints character c
 * @arg: character to print
 * Return: number of characters printed
 */
int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	_putchar(c);

	return (1);
}
