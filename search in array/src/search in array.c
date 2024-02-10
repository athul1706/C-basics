/*
 ============================================================================
 Name        : search.c
 Author      : Athul
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[100],skey,flag=0;
	setbuf(stdout,NULL);
	printf("ENTER LIMIT OF ARRAYS"); /* prints array */
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("please enter your search key");
	scanf("%d", &skey);
	for(i=0;i<n;i++){
		if(skey==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Value found on position %d", i+1);
	}else{
		printf("value not found");
	}


	return EXIT_SUCCESS;
}
