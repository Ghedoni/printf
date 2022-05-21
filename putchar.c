#include "main.h"
/**
 * _putchar - Sends one char to the stdo
 * @c: Parameter
 * Return: 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
