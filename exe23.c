/*
Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest.
*/

#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE]; /*current input line*/

int getline1(void);  /* taken from the KnR book. */

main()
{
  int flag,len,f;
  int c;
  
  flag = f = c = 0;
  while ((len = getline1()) > 0 )
    {
      c=0;
      while(c < len)
        {
	  if( line[c] == '"')
		f = 1;

	  if( !f )
	  {
          	if( line[c] == '/' && line[c+1] == '*')
            	{
              		c+=2;
              		flag = 1;
            	}
          	if( line[c] == '*' && line[c+1] == '/')
            	{
              		c+=2;
              		flag = 0;
            	}
          	if(flag == 1)
           	 {
              		c++;
            	}
          	else
            	{
              		printf ("%c", line[c]);
              		c++;
            	}
	  } 
	  else
	  {
              printf ("%c", line[c]);
              c++;
	  }
        }
    }
}


int getline1(void)
{
	int c, i;
	for (i=0; i<MAXLINE-1 &&(c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
		if (c == '\n') {
			line[i] = c;
			++i;
		}
		line[i] = '\0';
	return i;
}


