/*
 ============================================================================
 Name        : sample.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("PLEASE ENTER YOUR NUMBER"); /* prints !!!Hello World!!! */
	scanf("%d",&num);
	printf("you entered number: %d",num);

	return EXIT_SUCCESS;
}
