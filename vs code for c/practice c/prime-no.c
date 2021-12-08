#include<stdio.h>


void prime_checker(int a){
    int b;
    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            printf("not a prime number getting fully divided by %d\n",i);
            break;
        }
        else{
            b=i;
            continue;
        }
    }

    printf("b=%d",b);

    if(b==a-1){
        printf("prime number congratulations!");

    }
    

}

int main(int argc, char const *argv[])
{
    int a;
    printf("enter any number\n");
    scanf("%d", &a);
    prime_checker(a);
    return 0;
}
