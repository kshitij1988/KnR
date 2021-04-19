/* Problem Statement:
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank. 
 *
 * Author: Kshitij Kumar
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
	int c;
	bool flag=0;

	while((c = getchar()) != EOF){
		/* Detects first space and prints it out */
		if((c == ' ') && (flag == 0)){
			putchar(c);
			flag = 1;
		/* Detects non-space character and prints it out */
		}else if(c != ' '){
			putchar(c);
			flag = 0;
		}
		/* If repeated space character above conditions are not satisfied
		 * and loop proceeds to next iteration */
	}
	return 0;
}
