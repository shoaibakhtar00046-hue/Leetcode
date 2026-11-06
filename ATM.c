#include<stdio.h> 

int main() { 
    int pin, enteredPin = 1234; 
    int choice; 
    float balance = 10000.0, amount; 

    printf("================================\n"); 
    printf("       WELCOME TO ATM\n"); 
    printf("================================\n"); 

    printf("Enter your ATM PIN: "); 
    scanf("%d", &pin); 

    if (pin != enteredPin) { 
        printf("Invalid PIN! Access denied.\n"); 
        return 0; 
    } 

    do { 
        printf("\n========= ATM MENU =========\n"); 
        printf("1. Check Balance\n"); 
        printf("2. Withdraw Money\n"); 
        printf("3. Deposit Money\n"); 
        printf("4. Exit\n"); 
        printf("============================\n"); 

        printf("Enter your choice: "); 
        scanf("%d", &choice); 
    

        switch (choice) { 
            case 1: 
                printf("Available Balance: Rs. %.2f\n", 
                       balance); 
                break; 

            case 2: 
                printf("Enter withdrawal amount: Rs. "); 
                scanf("%f", &amount); 

                if (amount <= 0) { 
                    printf("Enter a valid amount!\n"); 
                } else if (amount > balance) { 
                    printf("Insufficient balance!\n"); 
                } else { 
                    balance -= amount; 
                    printf("Please collect your cash.\n"); 
                    printf("Remaining Balance: Rs. %.2f\n", 
                           balance); 
                } 
                break; 

            case 3: 
                printf("Enter deposit amount: Rs. "); 
                scanf("%f", &amount); 

                if (amount <= 0) { 
                    printf("Enter a valid amount!\n"); 
                } else { 
                    balance += amount; 
                    printf("Money deposited successfully!\n"); 
                    printf("Updated Balance: Rs. %.2f\n", 
                           balance); 
                } 
                break; 

            case 4: 
                printf("Thank you for using our ATM!\n"); 
                break; 

            default: 
                printf("Invalid choice! Try again.\n"); 
        } 

    } while (choice != 4); 

    return 0; 
}