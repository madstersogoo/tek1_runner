/*
 * Epitech project
 * error handling
 * File description:
 * argument error
 */

#include "../lib/include/my.h"

void argument(void)
{
	my_putstr("./my_runner: bad arguments; 0 given 1 required\n");
	my_putstr("retry with -h\n");
}
