#include <stdio.h>
//Avinash singh solanki
// erp-10335    

int main() {
    int i, j, n = 4;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
A
AB
ABC
ABCD
*/
