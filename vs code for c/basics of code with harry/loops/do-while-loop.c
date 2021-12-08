#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 1;
    do
    {
        a += 1;
        printf("6 * %d = %d\n", a, 6 * a);

    } while (a < 10);

    return 0;
}
