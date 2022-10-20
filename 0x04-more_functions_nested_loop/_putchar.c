#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c into stdout
 * @c: the character to be printed
 * Return: On Success 1 else -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
