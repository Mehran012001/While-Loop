// WAP to print the sum of odd digits of a given number?

#include <stdio.h>
int main()
{
    int n, ld, sum;
    printf("Enter the number:");
    scanf("%d", &n);
    sum = 0;
    ld = 0;
    while (n != 0)
    {
        ld = n % 10;
        if (ld % 2 != 0)
        {
            sum = sum + ld;
        }
        n = n / 10;
    }
    printf("The sum of odd digits of given number is : %d", sum);
    return 0;
}