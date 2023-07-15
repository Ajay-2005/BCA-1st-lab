
#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
    int length, fi, la;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    fi = str[0];
    la = str[length - 1];
    int isPalindrome = (fi == la);   
    printf("The given string is %s palindrome.\n", isPalindrome ? "a" : "not a");
    return 0;
}
