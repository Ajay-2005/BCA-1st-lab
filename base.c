#include <stdio.h>
void binary(int num) {
    int i = 0;
    int binary[20];
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    int size = i;
    printf("Binary: ");
    int j;
    for ( j = size - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void octal(int num) {
    int i = 0;
    int octal[20];
    while (num > 0) {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }
    int size = i;
    printf("Octal: ");
    int j;
    for ( j = size - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void hexadecimal(int num) {
    char hexDigits[] = "0123456789ABCDEF";
    char hexResult[100];
    int i = 0;
    while (num > 0) {
        int remainder = num % 16;
        hexResult[i] = hexDigits[remainder];
        i++;
        num /= 16;
    }
    printf("Hexadecimal: ");
    int j;
    for ( j = i - 1; j >= 0; j--) {
        printf("%c", hexResult[j]);
    }
    printf("\n");
}

int main() {
    int number, base;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
   	binary(number);
   	octal(number);
   	hexadecimal(number);
}

