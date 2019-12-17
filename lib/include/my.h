/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_sokoban_include_warning
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strligne(char const *str);
int up(char *str, int x, int i);
int down(char *str, int x, int i);
int left(char *str, int x, int i);
int right(char *str, int x, int i);
int my_sokoban(char const *gilepath);
int keystroke(char *str);
int zero_up(char *str, int x, int i);
int zero_down(char *str, int x, int i);
int zero_left(char *str, int x, int i);
int zero_right(char *str, int x, int i);
int compteur(char *str);
int check_zero(char *str, int one, int two);


#endif
