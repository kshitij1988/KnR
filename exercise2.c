/* Problem Statement:
 * Experiment to find out what happens when printf's argument string contains \c,
 * where c is some character not listed above
 *
 * Author: Kshitij Kumar
 */

/*
 * #include <stdio.h>
 *
 *int main(){
 *	printf("hello,\c world\n");
 *	return 0;
 *}
 *
 *gcc exercise2.c -o ex2_working
 *exercise2.c: In function ‘main’:
 *exercise2.c:11:9: warning: unknown escape sequence: '\c'
 *   11 |  printf("hello,\c world\n");
 *      |         ^~~~~~~~~~~~~~~~~~
 */
