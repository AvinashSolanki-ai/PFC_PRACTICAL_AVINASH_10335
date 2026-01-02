// Conditional Statements in C
#include <stdio.h>
//Avinash Singh SOlanki
// ERp=10335
int main()
{
    /* -------- Odd or Even using if-else -------- */
    int n = 7;
    if(n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    // Output:
    // 7 is Odd
     /* -------- Maximum of Three Numbers using Ternary Operator -------- */
    int a = 10, b = 25, c = 15;
    int max;
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number = %d\n", max);

    // Output:
    // Maximum number = 25
     /* -------- Switch Case -------- */
    int x = 10, y = 20;
    int choice = 1;

    switch(choice)
    {
        case 1:
            printf("Sum = %d\n", x + y);
            break;
            case 2:
            printf("Difference = %d\n", x - y);
            break;
            case 3:
            printf("Product = %d\n", x * y);
            break;
            case 4:
            printf("Division = %d\n", x / y);
            break;
             default:
            printf("Invalid choice\n");
    }

    // Output:
    // Sum = 30

    return 0;
}
