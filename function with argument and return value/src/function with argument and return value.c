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

int sum(int,int);
int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum is %d",c);

	return EXIT_SUCCESS;
}

int sum(int a, int b){
	int c;
	c=a+b;
	return c;

}
