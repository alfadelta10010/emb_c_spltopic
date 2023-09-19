/*
Date: 18th Sept, 2023
Question: Write a program to print biggest value among the three varibkes. 
Print error message if any of the numbers are ngative
*/

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three values: ");
	scanf("%d %d %d", &a, &b, &c);
	if((a > 0) && (b > 0) && (c > 0))
	{
		if (a >= b) 
		{
			if (a >= c)
				printf("%d is the largest number\n", a);
			else
				printf("%d is the largest number\n", c);
		}
		else 
		{
			if (b >= c)
				printf("%d is the largest number\n", b);
			else
				printf("%d is the largest number\n", c);
		}
	}
	else
		printf("Error\n");
	return 0;
}