#include <stdio.h>
//Avinash singh solanki
// erp-10335

int main() {
    int n, i, j;

    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
Sample Input:
Enter value of n: 3

Output:
  *
 ***
*****
 ***
  *

Total length = 2n - 1 = 5 lines
*/
