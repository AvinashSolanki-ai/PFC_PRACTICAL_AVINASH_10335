#include <stdio.h>
//Avinash singh solanki
//erp=10335
void printTriangle(int n) {
    int i, j;
     for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height of triangle: ");
    scanf("%d", &n);
    printTriangle(n);   
     return 0;
}

/*
Sample Input:
Enter height of triangle: 4

Output:
*
**
***
****
*/
