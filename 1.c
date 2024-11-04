#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    int factorial = 1;
    for (int a = 1; a <= i; a++)
    {
        factorial = factorial * a;
    }
    printf("The factorial is : %d\n", factorial);
    return 0;
}