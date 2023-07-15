#include <stdio.h>

int main() {
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%400==0){
        printf("The given year is leap");
    }else if(year%100==0){
        printf("The given year is not a leap");
    }
    else if(year%4==0){
        printf("The given year is leap");
    }
    else{
        printf("The given year is not a leap");
    }

    return 0;
}
