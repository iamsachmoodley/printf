#include "main.h"

/**
 * is_printable - Determine if the char can be printed
 * @c: Char to be checked
 * Return: 1 if c can be  printed, otherwise 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
/**
 * append_hexa_code - Append ascci code in the hexadecimal code to the buffer
 * @buffer: Array of characters
 * @i: Index where to start appending
 * @ascii_code: The ASSCI code
 * Return: Success 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit - Checks if the char is a digit
 * @c: Char to be checked
 * Return: 1 if c is  digit, otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
/**
 * convert_size_number - Cast the number to the specific size
 * @num: The number
 * @size: The number indicating the type it is casted
 * Return: num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd - Cast the number to the specific size
 * @num: The number
 * @size: The number indicating the type it is casted
 * Return: num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
