/*
 ============================================================================
 Name        : star.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;
	setbuf(stdout,NULL);
	printf("Howmany rows required to print?"); /* prints star */
	scanf("%d", &n);

	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
	printf("\n");
	}
	return EXIT_SUCCESS;
}
