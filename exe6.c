/*
Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>
main()
{
	int c;
	printf("\nPress Ctrl+D for EOF\n");
    	while ((c = getchar()) != EOF) {
        	printf("%d ", c != EOF);
        	putchar(c);
    	}
    	printf("\n%d\n", c != EOF);
}


