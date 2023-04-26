#include "main.h"
/**
 * _printf - prints formarted text
 * @format: format to process
 * Return: total printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;
	const char *cpy;

	va_start(args, format);
	if (args == NULL || format == NULL)
		return (-1);
	for (cpy = format; *cpy != '\0'; cpy++)
	{
		if (*cpy == '%')
		{
			cpy++;
			switch (*cpy)
			{
				case 'c':
					printer(args, &counter);;
					break;
				case 's':
					printer_s(args, &counter);
					break;
				case '%':
					printer_percent(&counter);
					break;
				case 'd': case 'i':
					printer_i(args, &counter);
					break;
				default:
					_write('%');
					_write(*cpy);
					counter += 2;
			}
		}
		else
		{
			_write(*cpy);
			counter++;
		}
	}

	va_end(args);
	return (counter);
}
