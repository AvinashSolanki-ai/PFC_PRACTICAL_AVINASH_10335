#include <stdio.h>
//  Avinash Singh Solanki
// erp-10335

int main() {
    int a, b, i;

    printf("Enter value of A: ");
    scanf("%d", &a);

    printf("Enter value of B: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}

/*
Sample Input:

Enter value of A: 3
Enter value of B: 8

Output:
3 4 5 6 7 8
*/
