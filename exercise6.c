/* Problem Statement:
 * Verify that the expression getchar() != EOF is 0 or 1
 *
 * Author: Kshitij Kumar
 */

#include <stdio.h>

int main(){
	int val;
	while (val = (getchar() != EOF)){
		printf("getchar() != EOF is %d\n" ,val);
	}
	return 0;
}

//It's always 1 in above code
