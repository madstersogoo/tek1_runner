/*
 * Epitech project
 * my_runner
 * File description:
 * runner game
 */

#include"../lib/include/my.h"

int main(int argc, char **argv)
{
	if (argc < 2) {
		argument();
		return(84);
	}
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		help();
		return(84);
	}
}
