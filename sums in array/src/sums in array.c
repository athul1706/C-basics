/*
 ============================================================================
 Name        : sums.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n, sum=0;
	int a[100];
	setbuf(stdout,NULL);
	printf("Set the number of arrays");
	scanf("%d",&n);
	printf("Enter the values");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);

	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("Sum of arrays is %d", sum); /* prints array */

	return EXIT_SUCCESS;
}
