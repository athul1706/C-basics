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

void sum();
int main(void) {
	sum();
	sum();
	return EXIT_SUCCESS;
}

void sum(){
	int a,b,c;
	setbuf(stdout, NULL);
	printf("Enter 2 numbers");
	scanf("%d%d", &a,&b);
	c=a+b;
	printf("Sum is %d", c);

}
