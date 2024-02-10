/*
 ============================================================================
 Name        : for.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	setbuf(stdout,NULL);
	printf("Enter a number"); /* prints for loop */
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return EXIT_SUCCESS;
}
