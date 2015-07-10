/* Vertical Histogram of words in a Sentence */

#include<stdio.h>

main()
{	
	printf("\nPrint Vertical Histogram\n");
	int array[20];	// Max number is of words 20
	int i,c,j,nc,nw;
	
  	for(i=0;i<20;i++)
		array[i]=0;
	nc = nw = 0;

  	while( (c=getchar()) != EOF) {
		nc+=1;
		if( c ==' ' || c =='\n' || c =='\t') {
			array[nw] = nc -1;
			nw+=1;
      			nc = 0;
    		}
	}

  	for( i = 15; i >= 1; i--) {
		for(j=0;j <= nw;j++) {
      			if( i <= array[j])
        			putchar('*');
      			else  
        			putchar(' ');
			putchar(' ');
      		}
  		putchar('\n');
  	}
}
