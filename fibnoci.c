#include<stdio.h>
int fibnocci(int n);
int main(){
	int n,i;
	printf("enter a fibnocci number");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d",fibnocci(i));
		
	}
	return 0;
}

int fibnocci(int n){
	if(n==0||n==1){
		return n;
	}
	else {
		return fibnocci(n-1)+fibnocci(n-2);
	}
	return 0;
}

