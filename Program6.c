// Print the sum of this series 1-2+3-4+5-6+7...n ?

#include <stdio.h>
int main()
{
    int n, sum, i;
    printf("Enter the number till which you want the sum of series to be printed:");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}