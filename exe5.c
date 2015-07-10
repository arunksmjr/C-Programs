/*
Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.
*/

#include <stdio.h>

main()
{
	int fahr,celsius;
	printf("Fahrenheit-Celsius Table\n\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	printf("\nCelsius-Fahrenheit Table\n\n");
	for (celsius = 147; celsius >= -18; celsius = celsius - 11)
		printf("%3d %6.1f \n", celsius, ((celsius*9.0)/5.0)+32);
}
