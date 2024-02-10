/*
 ============================================================================
 Name        : function.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int,int);
int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers"); /* prints  */
	scanf("%d%d", &a,&b);
	sum(a,b);

	return EXIT_SUCCESS;
}

void sum(int n1, int n2){
	int result=n1+n2;
	printf(" Sum is %d",result);
}
