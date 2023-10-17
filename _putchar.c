#include "main.h"

/**
 *_putchar - writes the char c to the stdout
 *@c: The characteer to print
 *Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
