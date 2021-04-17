/* Problem Statement:
 * Modify the temperature conversion program to print the table is reverse order,
 * that is, from 300 degrees to 0.
 *
 * Author: Kshitij Kumar
 */

#include <stdio.h>

void printchar(char c, int n){
	int i;

	for(i=0;i<n;i++){
		printf("%c" ,c);
	}
	printf("\n");
}
 
int main(){
	int fahr,celc,step;
	int lower,upper;

	lower=0;
	upper=300;
	step=20;

	celc=upper;
	printchar('*', 40);
	printf("Celsius to Fahrenheit conversion\n");
	printchar('*', 40);
	printchar('-', 40);
	printf("Celsius\t\tFahrenheit\n");
	printchar('-', 40);
	while (celc >= lower){
		fahr = (celc * 9/5) + 32;
		printf("%d\t\t%d\n", celc,fahr);
		celc = celc - step;
	}
	return 0;
}

