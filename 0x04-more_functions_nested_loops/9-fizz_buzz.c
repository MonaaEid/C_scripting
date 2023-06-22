#include <stdio.h>
/**
 * main - Entry point
 * Description: Fizz-Buzz function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums;

	for (nums = 1; nums <= 100; nums++)
	{
		if ((nums % 3) == 0)
			printf("Fizz ");
		else if ((nums % 5) == 0)
			printf("Buzz ");
		else if ((nums % 15) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", nums);
	}
	return (0);
}
