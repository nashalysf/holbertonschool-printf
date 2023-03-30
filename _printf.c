#include "main.h"
/**
 * _printf - function that prints
 * @format: argument vector array
 * Return: character count
 */
int _printf(const char *format, ...)
{
	char c, mod;
	int i;
	char *s;
	float d;
	int counter = 0;

	va_list output;

	va_start(output, format);
	if (output == NULL || format[counter] == '\0')
		return (-1);
	while (format && format[counter] != '\0')
	{
		if ((format[counter] == '%') && (format != '\0'))
	{
		switch (format[counter++])
		{
			case 'c':
				c = (char) va_arg(output, int);
				_write(c);
				(*counter)++;
				break;
			case 's':
				s = va_arg(output, char *);
				if (s == NULL)
					s ="(nil)";
				for (; s[counter] != '\0'; s++)
				{
					_write(s);
					(*counter)++;
					return (strlen(s));
				}
				break;
			case 'i':
				i = va_arg(output, int);
				_write(i);
				break;
			case 'd':
				d = va_arg(output, double);
				_write(d);
				break;
			case '%':
				mod = '%';
				_write(mod);
				(*counter)++;
			default:
				continue;
		}
	}
	}
	va_end(output);
	_putchar('\n');
	return (counter);
}
