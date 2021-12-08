#include <stdio.h>
int main(int argc, char const *argv[])
{
    char sub[10];


    printf("enter the subjects you have passed giving space ex:- maths science");
    scanf("%c", &sub);
    printf("the value of subjects is: %c\n",&sub);

    
    // now applying the if else statements
    if(sub=="science maths"){
        printf("you have won of prize worth points 45");
    }
    else if (sub=="science")
    {
        printf("you have won of prize worth points 15");
    }
    else if (sub=="maths")
    {
        printf("you have won of prize worth points 15");
    }
    else
    {
        printf("something is wrong in the process");
    }
    
    
    
}
