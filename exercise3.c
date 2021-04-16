/* Problem Statement:
 * Modify the temperature conversion program to  print a heading above the table
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

	fahr=lower;
	printchar('*', 40);
	printf("Fahrenheit to Celsius Conversion\n");
	printchar('*', 40);
	printchar('-', 40);
	printf("Fahrenheit\tCelsius\n");
	printchar('-', 40);
	while (fahr <= upper){
		celc = 5 * (fahr-32) / 9;
		printf("%d\t\t%d\n", fahr,celc);
		fahr = fahr + step;
	}
	return 0;
}

