/*
Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/


#include<stdio.h>
main()
{
	printf("\nUse Function call\n");
	fun_FtoC();
	fun_CtoF();
}

fun_FtoC()
{
	float fahr, celsius;
	float lower, upper, step;
	printf("\nFahrenheit-Celsius Table\n");
	lower = 0;	/* lower limit of temperatuire scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

fun_CtoF()
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
