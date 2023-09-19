#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_char(char c, int *count);
void print_string(const char *str, int *count);
void print_integer(int num, int *count);
void print_percent(int *count);
int _printf(const char *format, ...);


#endif
