/*
 ============================================================================
 Name        : comparisons.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("Please enter two numbers"); /* prints !!!Hello World!!! */
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("Greatest value is %d",num1);
	}else{
		printf("Greatest value is %d",num2);
	}

	return EXIT_SUCCESS;
}
