#include "stdio.h" 
#include "variadic_functions.h" 
  
 /** 
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number of parameters
 * 
 * Return: void
 */ 
  
 void print_strings(const char *separator, const unsigned int n, ...)
 { 
         unsigned int i;
         char *str;
         va_list strs;
  
         va_start(strs, n);
         i = 0;
         while (i < n)
         {
                 str = va_arg(strs, char *);
                 if (str)
                 {
                         printf("%s", str);
                 }
                 else 
                 {
                         printf("(nil)");
                 }
                 if (i != (n - 1) && separator != NULL)
                 {
                         printf("%s", separator);
                 } 
                 i++;
         }
         printf("\n");
         va_end(strs);
}
