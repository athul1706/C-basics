/*
 ============================================================================
 Name        : switchcases.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("Please choose the menu;\n1.Biriyani\n2.Porotta\n3.Fired Rice\n4.Mandi Rice"); /* prints switch */
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected Biriyani");
		break;
	case 2:
		printf("You have selected Porotta");
		break;
	case 3:
		printf("you have selected Fried Rice");
		break;
	case 4:
		printf("you have selected Mandi Rice");
		break;
	default:
		printf("Sorry you have selected the wrong menu");

	}


	return EXIT_SUCCESS;
}
