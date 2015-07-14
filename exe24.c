
/*
Write a program to check a C program for rudimentary syntax errors like
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and
double, escape sequences, and comments. 
*/
#include<stdio.h>

main()
{

	int c,c2,flag0=0,flag1=0,flag2=0,flag3=0,flag4=0;
	printf("\nEnter the program.\n\tPress Cntl+D after finishing program\n");
	while((c=getchar())!=EOF){
		if(c=='"' || c=='\''){
			while((c2=getchar())!=c)
        			if(c2 == '\\')
            				getchar();
		}
		if(c=='/'){
			c2=getchar();
			if(c2=='*')
				flag1=1;
		}
		else if(c=='*'){
			c2=getchar();
			if(c2=='/')
				flag1=0;
		}
		else if(c=='{'){
			flag2+=1; 
		}
		else if(c=='}')
			flag2-=1;
		else if(c=='[')
			flag3+=1;
		else if(c==']')
			flag3-=1;
		else if(c=='(')
			flag4+=1;
		else if(c==')')
			flag4-=1;
	}
	if(flag1==0 && flag2==0 && flag3==0 && flag4==0)
		printf("\nCorrect\n");
	else
		printf("\nIncorrect\n");
	
}

