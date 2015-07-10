/*
Revise the main routine of the longest-line program so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text
*/

#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line length */

int getline1(char line[]);
void copy(char to[], char from[]);
// print the longest input
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline1(line)) > 0)
		if (len > max) {
			
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* there was a line */
		printf("%s", longest);
	return 0;
}

int getline1(char s[])
{
	int c, i;
	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	++i;
}
