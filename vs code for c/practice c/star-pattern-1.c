#include <stdio.h>

int main(int argc, char const *argv[])
{


    int rows; //7
    printf("enter the number of rows");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int a = 0; a <= i; a++)
        {
            printf("%c",'*');
        }

        printf("\n");
        
    }
    
    return 0;
}
