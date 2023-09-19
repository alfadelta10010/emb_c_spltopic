/*
Date: 15th Sept, 2023
Question: Write a program to print bigger value among the two variables. 
Get input from user for the values and return the bigger one. 
Print error message and stop if any of the numbers are negative
*/

#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two values: ");
	scanf("%d %d", &a, &b);
	if((a > 0) && (b > 0))
	{
		if(a > b)
			printf("%d > %d\n", a, b);
		else
			printf("%d < %d\n", a, b);
	}
	else
		printf("Error\n");
	return 0;
}