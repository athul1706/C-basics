/*
 ============================================================================
 Name        : forloop.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d", &number);
	for(i=1;i<number;i++){
		sum=sum+i;
	}
	printf("Sum: %d",sum);

	return EXIT_SUCCESS;
}
