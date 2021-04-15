/* Problem Statement:
 * Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program, 
 * to see what error messages you get.
 *
 * Author: Kshitij Kumar
 */

/* Working Code 
#include <stdio.h>

int main(){
	printf("hello, world\n");
	return 0;
}*/

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

/* Exercise 1 error 2
 *#include <stdio.h>
 *
 *int main(){
 *	printf("hello, world\n
 *			");
 *	return 0;
 *}
 *exercise1.c: In function ‘main’:
 *exercise1.c:33:9: warning: missing terminating " character
 *   33 |  printf("hello, world\n
 *      |         ^
 *exercise1.c:33:9: error: missing terminating " character
 *   33 |  printf("hello, world\n
 *      |         ^~~~~~~~~~~~~~~
 *exercise1.c:34:4: warning: missing terminating " character
 *   34 |    ");
 *      |    ^
 *exercise1.c:34:4: error: missing terminating " character
 *   34 |    ");
 *      |    ^~~
 *exercise1.c:35:2: error: expected expression before ‘return’
 *   35 |  return 0;
 *      |  ^~~~~~
 *exercise1.c:35:11: error: expected ‘;’ before ‘}’ token
 *   35 |  return 0;
 *      |           ^
 *      |           ;
 *   36 | }
 *      | ~
 */

/* Exercise 1 error 3
 *#include <stdio.h>
 *
 *int pain(){
 *	printf("hello, world\n");
 *	return 0;
 *}
 *
 *gcc exercise1.c -o ex1_error1
 * /usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
 *(.text+0x24): undefined reference to `main'
 *collect2: error: ld returned 1 exit status
 */

/* Exercise 1 error 4
 * int main(){
 *	printf("hello, world\n");
 *	return 0;
 *}
 *
 *gcc exercise1.c -o ex1_error1
 *exercise1.c: In function ‘main’:
 *exercise1.c:77:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
 *   77 |  printf("hello, world\n");
 *      |  ^~~~~~
 *exercise1.c:77:2: warning: incompatible implicit declaration of built-in function ‘printf’
 *exercise1.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
 *  +++ |+#include <stdio.h>
 *    1 | / * Problem Statement:
 */

