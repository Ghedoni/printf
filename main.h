#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct f_identifier - structure to pair format id to function
 * @f_id: The format identifies e.g %d, %c
 * @func: The functions for the id
 *
 * Description: strut that stores pointers to a printer functions
 */
struct f_identifier
{
	char *f_id;
	int (*func)(va_list);
};

typedef struct f_id format_id;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(va_list arg);
char *rev_str(char *str);
int _printchar(va_list arg);
char *_copymemory(char *dest, char *src, unsigned int n);
int _printPercent(__attribute__((unused))va_list arg);
int _identifier(const char *format, format_id f_list[], va_list arg);

#endif
