#include <stdio.h>
#include <math.h>

int counter(int n)
{
    int count = 0;

    // iterate at least once, then until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    do
    {
        n /= 10;
        ++count;
    } while (n != 0);

    return count;
}

void checker(int a)
{
    int actuala = a;
    int mum = 1;
    int sum = 0;
    int rem;

    while (a > 0)
    {
        int length = counter(a);

        rem = a % 10; //reminder after dividing by 10;

        mum = pow(10, length - 1) * rem; //creating the 10th power.

        sum = sum + mum; // getting the reversed by adding it to the sum.

        a = (int)a / 10; //quotient
    }

    if (actuala == sum)
    {
        printf("congratualations your enter number is a palindrome\n");
        printf("entered number =%d and reversed number=%d", actuala, sum);
    }

    else
    {
        printf("something went wrong never loose hope bcoz it's one among the only thing that is not dependent on anyone else");
    }
}

int main()
{
    int num;

    printf("enter any no.\n");
    scanf("%d", &num);

    // % gives reminder

    checker(num);

    return 0;
}
