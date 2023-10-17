
#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
    char rev[10];
    printf("Enter a string: ");
    gets(str);
    rev=strrev(str);
    if(strcmp(str,rev)==0){
      printf("The given string is a palindrome.\n");
    }
    else{
      printf(" the given string is not a palindrome");
    return 0;
}
