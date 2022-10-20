<<<<<<< HEAD
<<<<<<< HEAD
#include "main.h"

/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;
=======
#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;
>>>>>>> 80e6a8b049b05cd229d3bfee5b05e7b67aae2b49

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
<<<<<<< HEAD
	array = malloc(counter * sizeof(long int));
=======
	array = malloc(counter * sizeof(int));
>>>>>>> 80e6a8b049b05cd229d3bfee5b05e7b67aae2b49

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
<<<<<<< HEAD
			array[i] = array[i] + 39;
=======
			array[i] = array[i] + 7;
>>>>>>> 80e6a8b049b05cd229d3bfee5b05e7b67aae2b49
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
<<<<<<< HEAD
=======
<<<<<<< HEAD
gvv
=======
#include main.h
>>>>>>> dc9732e9dcaabd265533a3c5ea9fb7684548b62c
>>>>>>> 32ef96c2bc9d1e2bcb283f4d49e139478109b0d3
=======
>>>>>>> 80e6a8b049b05cd229d3bfee5b05e7b67aae2b49
