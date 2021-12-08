#include <stdio.h>
int main(int argc, char const *argv[])
{
    // mohit:
    //     printf("so we are in the label code\n");
    // printf("hello world\n");

    // goto mohit;



    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int a = 0; a < 8; a++)
        {
            printf("enter any number and enter 0 to exit");
            scanf("%d", &num);
            if (num == 0){
                goto end;
            }
        }
        
    }


    end:
        printf("so in order to leave the parent loops as well we can use the goto but programmers usually avoid the use of goto statement.\n");
    


    return 0;
}
