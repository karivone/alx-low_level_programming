#include "stdio.h"
#include "variadic_functions.h"
  
 /**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: number of parameters
 * 
 * Return: void
 */
  
 void print_numbers(const char *separator, const unsigned int n, ...)
 {
         unsigned int i;
         int num;
         va_list str;
  
         va_start(str, n);
         i = 0;
         while (i < n)
         {
                 num = va_arg(str, int);
                 printf("%d, num");
  
                 if (separator != NULL && i != (n - 1))
                 {
                         printf("%s", separator);
                 }
                 i++;
         }
         va_end(str);
         printf("\n");
 }
