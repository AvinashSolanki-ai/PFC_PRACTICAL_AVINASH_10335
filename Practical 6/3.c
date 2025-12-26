#include <stdio.h>
//  Avinash Singh Solanki
// erp-10335

int main() {
    int pin = 1234;   
    int epin;
    int attempts = 3;

    while(attempts > 0) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &epin);

        if(epin == pin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts--;
            printf("Wrong PIN. Attempts left: %d\n", attempts);
        }
    }

    if(attempts == 0) {
        printf("Card blocked. Try again later.\n");
    }

    return 0;
}

/*
Sample Input:
Enter your ATM PIN: 1111
Wrong PIN. Attempts left: 2
Enter your ATM PIN: 2222
Wrong PIN. Attempts left: 1
Enter your ATM PIN: 1234

Output:
PIN correct. Access granted.
*/
