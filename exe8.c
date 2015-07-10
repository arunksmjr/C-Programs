/*Write a program to count blanks, tabs, and newlines.*/

#include<stdio.h>

main()
{
	int blank, tab, newline, c;
	printf("\nPress Ctrl+D for EOF\n");
	blank=0;
	tab=0;
	newline=0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			newline+=1;
		else if(c == '\t')
			tab+=1;
		else if(c == ' ')
			blank+=1;
	printf("\n blank = %d \n tab = %d \n newline = %d \n", blank, tab, newline);
}
