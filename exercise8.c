/* Problem Statement:
 * Write a program to count blanks, tabs, and newlines.
 *
 * Author: Kshitij Kumar
 */

#include <stdio.h>

int main(){
	int c;
	long nb=0,nt=0,nnl=0;

	while((c = getchar()) != EOF){
		if(c == ' ')
			++nb;
		else if(c == '\t')
			++nt;
		else if(c == '\n')
			++nnl;
	}
	printf("number of blanks %ld tabs %ld and newlines %ld\n" ,nb,nt,nnl);
	return 0;
}
