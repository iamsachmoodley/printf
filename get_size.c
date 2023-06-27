#include "main.h"

/**
 * calculate_cast_size - Determines the size for casting the argument
 * @format: Formatted string containing the printing specifications
 * @i: List of arguments to be printed
 *
 * Returns: The calculated size for casting
 * */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}

