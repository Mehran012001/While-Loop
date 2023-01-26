// WAP to reverse  given number?

#include <stdio.h>
int main()
{
    int n, ld;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The reversed number is:");
    while (n != 0)
    {
        ld = n % 10;
        printf("%d", ld);
        n = n / 10;
    }
    return 0;
}