/*
 ============================================================================
 Name        : conditions.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	setbuf(stdout,NULL);
	printf("Please enter a number"); /* prints !!!Hello World!!! */
	scanf("%d", &a);
	if(a<0){
		printf("The number is negative");
	}else{
		printf("The number is Positive");
	}

	return EXIT_SUCCESS;
}
