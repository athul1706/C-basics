/*
 ============================================================================
 Name        : loop.c
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
	printf("choose the loop number"); /* prints break example */
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("hi\n");
		if(i==5){
			break;
		}
		printf("hello\n");
	}
	printf("finished");

	return EXIT_SUCCESS;
}
