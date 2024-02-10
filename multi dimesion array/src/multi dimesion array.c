/*
 ============================================================================
 Name        : multi.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n[3][3];
	setbuf(stdout,NULL);
	puts("Enter values"); /* prints  */
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&n[i][j]);
		}
	}
	printf("entered values are: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
