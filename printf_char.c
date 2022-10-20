<<<<<<< HEAD
<<<<<<< HEAD
bxfb
=======
#include main.h
>>>>>>> dc9732e9dcaabd265533a3c5ea9fb7684548b62c
=======
#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
>>>>>>> 80e6a8b049b05cd229d3bfee5b05e7b67aae2b49
