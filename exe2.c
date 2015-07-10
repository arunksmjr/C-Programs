/*
Experiment to find out what happens when prints's argument string contains \c. It shows error when use \c so I have used \\c to print
"\c" along with world.
*/


#include <stdio.h>
main()
{
printf("Using \" \\c \" \n");
printf("hello, \\c");
printf("world");
printf("\n \n");

}
