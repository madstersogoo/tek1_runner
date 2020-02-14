/*
** Epitech project, 2019
** error handling
** File description:
** argument error
*/

#include "../lib/include/my.h"

int argument(void)
{
    my_putstr("./my_runner: bad arguments; 0 given 1 required\n");
    my_putstr("retry with -h\n");
    return(84);
}

int help(void)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n");
    my_putstr("./my_runner map.txt\n \n \n");
    my_putstr("OPTIONS\n");
    my_putstr("-i       launch the gae in infinity mode.\n");
    my_putstr("-h       print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("SPACE_KEY    jump\n");
    return(84);
}
