/*
Write a program to print a histogram of the frequencies of different characters
in its input.
*/


#include<stdio.h>

main()
{	
	printf("\nPrint Histogram\n");
	int array[128];	// Max number is of words 20
	int i,c,j;
	
  	for(i=0;i<128;i++)
		array[i]=0;
	
  	while( (c=getchar()) != EOF) {
		array[c]+=1;
	}

  	for( i = 0; i<128; i++) {
		for(j=0;j <= array[i];j++) {
      			putchar('*');
      			
      		}
  		putchar('\n');
  	}
}
