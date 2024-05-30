#include <stdarg.h>
#include <stdio.h>

void debug(int rank, char *format, ...)
{

    va_list args; // Variable argument list

    va_start(args, format); // Initialize variable argument list
                            //  format is the last argument before ...
                            //  tells stac how to find unknown number of arguments

    printf("%12.6f|%2d|", get_timer(), rank);
    vprintf(format, args);

    va_end(args);
}