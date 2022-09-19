#include "main.h"

/**
<<<<<<< HEAD
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */
=======
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
>>>>>>> 9d0c927a21ca15e2ebd7d582e11d0ce1144cca1b
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
