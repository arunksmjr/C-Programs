/*
Write a program to print a histogram of the lengths of words in its input.
Horizontal
*/

#include<stdio.h>

main()
{
	int c;
	printf("\nPrint Horizontal Histogram\n");
	while((c = getchar()) != EOF) {
		if( c == ' ' || c == '\n' || c == '\t')
      			putchar('\n');
    		else
      			putchar('*');
			
  		}
}
