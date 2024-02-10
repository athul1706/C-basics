/*
 ============================================================================
 Name        : array.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,l;
	int a[100];			/* max limit of array set to 100*/
	setbuf(stdout,NULL);
	printf("Enter Array Limit");
	scanf("%d",&l);
	printf("Enter values"); /* prints array */
	for(i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered values are: \n");
	for(i=0;i<l;i++){
		printf("%d\n", a[i]);
	}

	return EXIT_SUCCESS;
}
