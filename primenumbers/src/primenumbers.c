/*
 ============================================================================
 Name        : primenumbers.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,flag=0;
	setbuf(stdout,NULL);
	printf("Enter a number"); /* prints for loop */
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}

	if(flag==0){

		printf("prime number");

	}else{
		printf("not a prime number");
	}

	return EXIT_SUCCESS;
}
