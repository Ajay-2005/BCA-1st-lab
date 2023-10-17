
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[10];
    int length, fi, la;
    printf("Enter a string: ");
    gets(str);
    length = strlen(str);
    fi = tolower(str[0]);
    la = tolower(str[length - 1]);
    int isPalindrome = (fi == la);   
    printf("The given string is %s palindrome.\n", isPalindrome ? "a" : "not a");
    return 0;
}
