#include <stdio.h>

int main(int argc, char const *argv[])
{


    int rows; //7
     
    // for capital 65 A
    // for small 97 a

    printf("enter the number of rows");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {

        int ch=97;
        for (int a = 0; a <= i; a++)
        {
            printf("%c",ch++);   
        }

        printf("\n");
        
    }
    
    return 0;
}
