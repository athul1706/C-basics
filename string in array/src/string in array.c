/*
 ============================================================================
 Name        : string.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout,NULL);
	printf("please enter your name");
	scanf("%s",name);
	printf("Entered name is %s",name);

    return EXIT_SUCCESS;
}

