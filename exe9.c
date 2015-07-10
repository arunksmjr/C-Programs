/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

#include<stdio.h>

main()
{
	int c;
	printf("\nPress Ctrl+D for EOF\n");
    	while ((c = getchar()) != EOF) {
		if (c != '\t'){
			putchar(c);
        		if (c == ' ') {
            			while ((c = getchar()) == ' ');
            			if (c == EOF) break;
			}
		}
		else {
			putchar(' ');
        	}
        }
}
