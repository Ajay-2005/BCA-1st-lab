#include<stdio.h>

int main() {
    int n, r, t, sum, i;
    printf("Enter a range: ");
    scanf("%d", &n);
  
    for(i = 0; i <= n; i++) {
        t = i;
        sum = 0; 
        while(t > 0) {
            r = t % 10;
            sum = sum + (r * r * r);
            t /= 10;
        }
        
        if(i == sum) {
            printf("%d, ", i);
        }
    }

    return 0;
}
