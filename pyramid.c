#include<stdio.h>
int main(){
	int row,k,i,j;
	printf("enter the number of rows");
	scanf("%d",&row);
	for (i=0;i<=row;i++){
		for (j=1;j<=row-i;j++){
			printf(" ");
		}
		for(k=0;k<2*i-1;k++){
		
			printf("*");
				
		}
		printf("\n");
			
		}
		
	
	return 0;
}
