#include <stdio.h>


int factorial(int no){
    int fact=1;
    for (int i = 1; i <= no; i++)
    {
        fact=fact*i;

    }
    return fact;
    
}



int main(int argc, char const *argv[])

{

    int a;
    printf("enter any value for a");
    scanf("%d", &a);

    printf("the factorial of the entered number is %d", factorial(a));



    return 0;
}
