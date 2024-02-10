/*
 ============================================================================
 Name        : else.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice,result;
	setbuf(stdout,NULL);
	printf("Please enter 2 numbers"); /* prints Else if ladder project */
	scanf("%d%d",&a,&b);
	printf("option1: Addition\nOption2: Subtraction\nOption3: Multiplication\nOption4: Division\nPlease enter your choice");
	scanf("%d",&choice);
	if(choice==1){
		result=a+b;
		printf("result: %d",result);

	}else if(choice==2){
		result=a-b;
		printf("result: %d",result);

	}else if(choice==3){
		result=a*b;
		printf("result: %d",result);

	}else if(choice==4){
		result=a/b;
		printf("result: %d",result);

	}else{
		printf("Read the options again!!");
	}


	return EXIT_SUCCESS;
}
