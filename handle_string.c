#include "main.h"
/**
 * _print_str - prints string to stdout
 * @arg: list of agument
 * Return: int
 */

int _print_str(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}


/**
 * rev_str - reverses a str
 * @str: str to reverse
 * Return: char pointer
 */
char *rev_str(char *str)
{
	int length, top;
	char tmp, *dest;

	for (length = 1; str[length] != '\0'; length++)
		;

	dest = malloc(sizeof(char) * length + 1);
	if (!dest)
		return (NULL);
	_copymemory(dest, str, length);

	for (top = 0; top < length; top++, length--)
	{
		tmp = dest[length - 1];
		dest[length - 1] = dest[top];
		dest[top] = tmp;
	}
	return (dest);
}

#include "main.h"
/**
 * _printchar - This prints 1 character like putchar
 * @arg: list of arguments
 * Return: int
 */
int _printchar(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * _copymemory - copy memory
 * @dest: parm pointer
 * @src: param poiter
 * @n: param
 * Return: poiter
 */
char *_copymemory(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
