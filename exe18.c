/*
Write a program to remove trailing blanks and tabs from each line of input, and
to delete entirely blank lines.
*/


#include<stdio.h>
#define MAXLINE 1000

int getline1(char line[],int lim);
int remove1(char line[]);

main()
{
  	int len;
  	char line[MAXLINE];
  
  	while((len=getline1(line,MAXLINE))>0)
    		if(remove1(line)>0)
      			printf("%s",line);
}

int getline1(char s[],int lim)
{
  	int i,c;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    		s[i] = c;
  	if( c == '\n'){
    		s[i]=c;
    		i++;
	}
  	s[i]='\0';
  
  	return i;
}


int remove1(char s[])
{
  	int i;
	for(i=0; s[i]!='\n'; ++i)
    	;
  	--i;
	if(i>0){
		while(s[i]==' ' || s[i] =='\t'){
			i-=1;
		}
	}
  	if( i >= 0){
    		++i;
    		s[i] = '\n';
    		++i;
    		s[i] = '\0';
  	}
  	return i;
}
