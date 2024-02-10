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
	printf("Enter values"); /* prints array */
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&n[i][j]);
		}
	}
	printf("Entered values are:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",n[i][j]);
		}
		ptintf("\n");
	}
	return EXIT_SUCCESS;
}
