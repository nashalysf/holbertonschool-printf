#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int printer(va_list args, int *counter);
int printer_s(va_list args, int *counter);
int printer_percent(int *counter);
int printer_i(va_list args, int *counter);
int _write(char c);
#endif
