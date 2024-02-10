/*
 ============================================================================
 Name        : nestedifproject.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("please enter 3 numbers"); /* prints !!!Hello World!!! */
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("Greatest number is %d",a);
	if(b>a&&b>c)
		printf("Greatest number is %d", b);
	if(c>a&&c>b)
		printf("Greatest number is %d", c);

	return EXIT_SUCCESS;
}
