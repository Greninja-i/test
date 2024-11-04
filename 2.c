#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    int sum = 0;
    printf("sfnjasbfahbf\n");
    
    for (int a = i; a >0; a=a/10)
    {
        sum = sum + a%10;
    }
    printf("The sum is : %d\n", sum);
    return 0;
}