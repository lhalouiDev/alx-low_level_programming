#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format
 * @format: A format string containing types of arguments
 * @...: The variable number of arguments to print
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *str;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                break;
            default:
                i++;
                continue;
        }

        if (format[i + 1] != '\0')
            printf(", ");

        i++;
    }

    va_end(args);
    printf("\n");
}

