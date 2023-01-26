// WAP to count digits of a given number?

#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    int i = 0;
    while (a != 0)
    {
        a = a / 10;
        i++;
    }
    printf("Number of digits in the given number are: %d", i);

    return 0;
}