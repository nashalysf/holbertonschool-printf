#include "main.h"
/**
 * _printf - function that prints
 * @format: argument vector array
 * Return: character count
 */
int _printf(const char *format, ...)
{
	char c;
	int i;
	char *s;
	float d;
	//unsigned int b; converts to binary
	int counter = 0;
	va_list output;

	va_start(output, format);

	while (format && format[counter] != '\0')
	{
		if (format[counter] == '%')
	{
		switch (format[counter++])
		{
			case 'c':
				c = (char) va_arg(output, char);
				write(c);
				break;
			case 's':
				s = va_arg(output, char*);
				write(s);
				break;
			case 'i':
				i = va_arg(output, int);
				write(i);
				break;
			case 'd':
				d = va_arg(output, double);
				write(d);
				break;
			case '%':
				mod = '%';
				write(mod);
			default:
				write(current letter);
				continue;
		}
	}
	}
	va_end(output);
	return (counter + '\n');
}
