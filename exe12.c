/*
Write a program that prints its input one word per line.
*/


#include<stdio.h>

main()
{
	int c;
        while ((c = getchar()) != EOF) {
		putchar(c);
        	if (c == ' ' || c == '\t'){
			putchar('\n');
		}
    	}
}
   
