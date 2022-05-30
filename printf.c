#include "main.h"
/**
 * _printf - Function that produce output
 * @format: Parameter
 * Return: int
 */
int _printf(const char *format, ...)
{
	int length = 0;
	format_id f_list[] = {
		{"c", _printchar},
		{"s", _print_str},
		{"%", _printPercent},
		{NULL, NULL}
	};
	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	len = _identifier(format, f_list, arg);
	va_end(arg);
	return (length);
}

/**
 * _identifier - matches id to functions
 * @format: Parameter
 * @f_list: Parameter
 * @args: Parameter
 * Return: int
 */
int _identifier(const char *format, format_id f_list[], va_list arg)
{
	int i, j, k, length = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].f_id != NULL; j++)
			{
				if (format[i + 1] == f_list[j].f_id[0])
				{
					k = f_list[j].func(arg);
					if (k == -1)
						return (-1);
					length += k;
					break;
				}
			}
			if (f_list[j].f_id == NULL && format[i + 1] != ' ')
			{
				if (format[i + 10] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					length += 2;
				}
				else
				{
					return (-1);
				}
				i++;
			}
			else
			{
				_putchar(format[i]);
				length++;
			}
		}
		return (length);
	}
