#include <stdio.h>

int main() {
    int balance = 10000;
    int choice, amount;

    while (1) {
        printf("\n=== ATM Menu ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: %d\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposited successfully!\n");
                break;

            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdraw successful!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
