#include "acshell.h"
/**
 * ac_print - Print a string to the standard output.
 * @show: The string to be printed.
 *
 * This function writes the given 'show' string to the standard output
 *
 * Return: This function does not return a value.
 */

void ac_print(const char *show)
{
	write(STDOUT_FILENO, show, strlen(show));
}
