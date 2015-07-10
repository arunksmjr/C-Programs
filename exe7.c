/*
Write a program to print the value of EOF.
*/

#include<stdio.h>

main()
{
	int c;
	printf("\nPress Ctrl+D for EOF\n");
	if((c = getchar()) == EOF)
		printf("%d",c);
}
