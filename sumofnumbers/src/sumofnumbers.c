/*
 ============================================================================
 Name        : sumofnumbers.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum;
	setbuf(stdout,NULL);
	printf("PLEASE ENTER TWO NUMBERS FOR THEIR SUM"); /* prints !!!Hello World!!! */
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum: %d",sum);

	return EXIT_SUCCESS;
}
