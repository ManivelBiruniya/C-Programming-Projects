#include <stdio.h>

int main() {
    int pin , enteredPin, option;
    float balance = 10000.00 , withdraw, deposit;
    char userName[20];

    printf("Enter Your Name    :");
    scanf("%s",&userName);

    printf("Set Your Pin       : ");
    scanf("%d",&pin);

    printf("\n Welcome to Simple ATM ");
    printf("%s \n",userName);
    printf("    Enter your PIN  : ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Invalid PIN. Access denied.\n");
        return 0;
    }

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your balance is: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: Rs. ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposit successful. New balance: Rs. %.2f\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: Rs. ");
                scanf("%f", &withdraw);
                if (withdraw <= balance) {
                    balance -= withdraw;
                    printf("Please collect your cash.\n");
                    printf("New balance: Rs. %.2f\n", balance);
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (option != 4);

    return 0;
}
