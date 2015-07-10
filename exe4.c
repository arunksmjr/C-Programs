/*
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>
/* print Celsius-Fahrenheit table
for celsius = -17, -6, 4, ..., 150; floating-point version */

main()
{
	float fahr, celsius;
	float lower, upper, step;
	printf("\nCelsius-Fahrenheit Table\n\n");
	lower = -18;	/* lower limit of temperatuire scale */
	upper = 148;	/* upper limit */
	step = 11;	/* step size */
	celsius = lower;
	while (celsius <= upper) {
		fahr = ((celsius*9)/5)+32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
