/* Problem Statement:
 * Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program, 
 * to see what error messages you get.
 *
 * Author: Kshitij Kumar
 */

/* Working Code */
#include <stdio.h>

int main(){
	printf("hello, world\n");
	return 0;
}

/* Exercise 1 error 1
 * exercise1.c:9:20: warning: extra tokens at end of #include directive
 *   9 | #include <stdio.h> int main(){printf("hello, world\n");return 0;}
 *     |                    ^~~
 * /usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
 * (.text+0x24): undefined reference to `main'
 * collect2: error: ld returned 1 exit status
 *
 *
 * #include <stdio.h> int main(){printf("hello, world\n");return 0;}
 */

