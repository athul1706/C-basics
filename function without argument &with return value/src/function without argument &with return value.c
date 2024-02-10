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

int sum();
int main(void) {
	int k;
	setbuf(stdout,NULL);
	k=sum();
	printf("Sum is %d",k); /* prints  */
	return EXIT_SUCCESS;
}

int sum(){
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
