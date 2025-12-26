#include <stdio.h>
//  Avinash Singh Solanki
// erp-10335

int main() {
    int n, i, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            continue;   
        }
        sum = sum + i;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}

/*
Sample Input:
Enter the limit: 10

Output:
Sum of even numbers = 30
*/
