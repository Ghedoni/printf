#include "main.h"
/**
 * _printf - Function that produce output
 * @format: Parameter
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(arg, int));
			i++;
		}
	}
	return (0);
	va_end(arg);
}
