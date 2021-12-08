#include <stdio.h>
int main(int argc, char const *argv[])
{

    // continue statement example
    // int a;
    // for (a = 0; a < 8; a++)
    // {

    //     if (a == 4)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         printf("a=%d\n", a);
    //     }
    // }

    // break statement example

    // int i;

    // for (i = 0; i < 40; i++)
    // {

    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     printf("the value of i is %d\n", i);
    // }

    // break statement throws you out of the existing loop so in case of a nested loop you will be thrown out of the loop in which you have used that break;

    int i = 0;
    while (i < 10)
    {
        while (i < 7)
        {
            if (i == 2)
            {
                break;
            }
            else
            {
                printf("hey! inner loop speaking and the value of i is %d\n", i);
                i++;
            }
        }
        i++;
    }

    return 0;
}
