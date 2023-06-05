#include<stdio.h>
int main(){
	int num,sum=0,rev=0,d;
	printf("enter a number");
	scanf("%d",&num);
	while(num > 0){
		d=num % 10;
		sum=sum+d;
		num=num/10;
		rev=(rev*10)+d;
		
	}
	printf("%d \n", sum);
	
	printf("%d" ,rev);

	return 0;
}
