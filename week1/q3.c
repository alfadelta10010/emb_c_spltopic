/*
Date: 18th Sept, 2023
Question: Write a program to print the biggest value among the three variables, without if-else logic
*/

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three values: ");
	scanf("%d %d %d", &a, &b, &c);
	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    printf("Max: %d\n", max);
    return 0;
}