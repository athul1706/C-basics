/*
 ============================================================================
 Name        : selection.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,temp,a[100];
	setbuf(stdout,NULL);
	printf("Enter value of array"); /* prints array */
	scanf("%d", &n);
	printf("set values of arrays");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted values are:\n");

	for(i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
	return EXIT_SUCCESS;
}
