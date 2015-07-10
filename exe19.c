/*
Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include<stdio.h>

int getline1(char array[], int lim);
void reverse(char array[]);

main()
{
	printf("\nPrints Reverse\n");
	int c,i=0,len=0;
	char array[500];
	while((len=getline1(array,500))>0){
		reverse(array);
    		printf("%s\n",array);
  	}
}

void reverse(char s[])
{
	char temp[500];
	int i,count=0,j;
	for (i=0; s[i]!='\0';i++)
		count++;
	j=count;
	for (i=0;i<count;i++){
		temp[i]=s[i];
	}
	for (i=0;i<count;i++){
		s[i]=temp[j-1];
		j--;
	}
}

int getline1(char s[], int lim)
{
	int c, i;
	printf("\n");
	for (i=0; i<lim-1 &&(c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	return i;
}
