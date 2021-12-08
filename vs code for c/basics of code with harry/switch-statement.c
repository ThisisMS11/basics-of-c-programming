#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=5;
    switch (a)
    {
    case 4:
        printf("yes you were correct the value of a is %d",a);

        break;

    case 5:
        printf("yes you were correct the value of a is %d",a);
        break;
    
    default:
        printf("no you were wrong");
        break;
    }
    
    return 0;
}
