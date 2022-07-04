#include "main.h"

/**
 * _printfunction - produces output to fromat
 * @format: charater string
 * Return: number of characters printed excluding null byte
 */

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j, flag;
	unsigned int len = 0;

	print_t print[] = {
		{"c", p_char}, {"s", p_str}, {"d", p_dec}, {"i", p_int},
		{NULL, NULL}
	};
