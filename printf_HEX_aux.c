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

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
=======
<<<<<<< HEAD
gvv
=======
#include main.h
>>>>>>> dc9732e9dcaabd265533a3c5ea9fb7684548b62c
>>>>>>> 32ef96c2bc9d1e2bcb283f4d49e139478109b0d3
