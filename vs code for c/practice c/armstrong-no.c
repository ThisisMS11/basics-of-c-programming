#include <stdio.h>
#include <math.h>

int checker(int a)
{
    int sum = 0;
    int actuala = a;
    while (a > 0)
    {
        int rem = a % 10;
        sum = pow(rem, 3) + sum;
        a = (int)a / 10;
    }
    if (sum == actuala)
    {
        printf("congratulations the entered number is a armstrong number");
    }

    else
    {
        printf("the entered number was not a armstrong number");
    }
}

int main()
{
    int num;
    printf("enter any no.\n");
    scanf("%d", &num);

    checker(num);

    return 0;
}
