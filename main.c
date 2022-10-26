#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int j;
	/*
	for (i=1; i<7; i++) {
		
		for (j=1; j<7; j++) {
			
			if( (6-j) >= i  ) { 
				printf("*");	
			}
			
			else {
				printf("%d", j);
			}
				
		}
		
		
		printf("\n");
	}
	 */
	 
	 for (i=0; i<6; i++) {
		
		for (j=i-4; j<=i-4+5; j++) {
			
			if(j<1) { 
				printf("*");	
			}
			
			else {
				printf("%d", j);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
