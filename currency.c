#include <stdio.h>

int main() {
    int curr[] = {2000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int amount, i;
    printf("Enter an amount: ");
    scanf("%d", &amount);
    printf("Denomination:");
    for (i = 0; i < 10; i++) {
        printf("Rs %d\tNotes: %d\n", curr[i], amount / curr[i]);
        amount = amount % curr[i];
    }
    return 0;
}

