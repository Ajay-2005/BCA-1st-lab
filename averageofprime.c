#include <stdio.h>

void averageofprime(int number[], int limit, int prime[]) {
    int j = 0, sum = 0;
    float avg;
    int i;

    for (i = 0; i < limit; i++) {
        if (number[i] % 2 == 1) {
            prime[j] = number[i];
            j++;
        }
    }

    for (i = 0; i < j; i++) {
        sum += prime[i];
    }

    avg = (float)sum / j;
    printf("The average of prime numbers is %.2f\n", avg);
}

int main() {
    int number[100], limit, prime[100];
    int i;
    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("Enter %d numbers:\n", limit);
    for (i = 0; i < limit; i++) {
        scanf("%d", &number[i]);
    }

    averageofprime(number, limit, prime);

    return 0;
}

