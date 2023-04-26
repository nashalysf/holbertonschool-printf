#include "main.h"
/**
 * printer - prints a char
 * @args: argument list with character
 * @counter: pointer to character counter
 * Return: amount of characters printed
 */

int printer(va_list args, int *counter)
{
	char c;

	c = (char)va_arg(args, int);
	_write(c);
	(*counter)++;
	return (1);
}

/**
 * printer_s - prints a string
 * @args: argument list with string
 * @counter: pointer to character counter
 * Return: string length
 */

int printer_s(va_list args, int *counter)
{
	const char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (; *s != '\0'; s++)
	{
		_write(*s);
		(*counter)++;
	}

	return (strlen(s));
}

/**
 * printer_percent - prints %
 * @counter: pointer to character counter
 * Return: 1
 */

int printer_percent(int *counter)
{
	char p = '%';

	_write(p);
	(*counter)++;
	return (1);
}

/**
 * printer_i - prints int
 * @args: list of arguments
 * @counter: pointer to arguments
 * Return: amount of numbers printed
 */

int printer_i(va_list args, int *counter)
{
	int n = va_arg(args, int);
	int i = 0;
	int div;

	int d = 1;
	char digits;

	if (n < 0)
	{
		_write('-');
		i++;
		n = -n;
	}

	div = n;
	d = 1;

	while (div >= 10)
	{
		div /= 10;
		d *= 10;
	}

	while (d > 0)
	{
		digits = (n / d) % 10 + '0';
		_write(digits);
		i++;
		d /= 10;
	}
	*counter += i;

	return (i);
}
