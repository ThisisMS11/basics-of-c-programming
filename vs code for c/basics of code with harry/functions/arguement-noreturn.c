#include <stdio.h>
void star(int count){
    for (int i = 0; i < count; i++)
    {
        printf("%c ", '*');
    }
    
}
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the no of stars you want");
    scanf("%d", &a);

    star(a);

    return 0;
}
