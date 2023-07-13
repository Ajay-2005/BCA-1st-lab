
#include <stdio.h>
#include<math.h>

void main() {
    int n,i;
    double sum=0.0,ser;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ser=1/pow(i,i);
        sum+=ser;
    }
    printf("the sum of series is %f",sum);
}
