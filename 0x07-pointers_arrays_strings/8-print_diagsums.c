#include "main.h"
/**
  * print_diagsums - description
  * @a: 2d array of int types
  * @size: size of the array9square)
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i];
		a += size;
	}
}

int main(void)
{

}
