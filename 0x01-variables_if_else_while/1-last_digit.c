#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)

	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);

if (n == 0)

	printf("Last digit of %d is %d and is 0\n", n, n % 10);

if (n < 6 && n != 0)

	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

printf("\n");

return (0);
}
