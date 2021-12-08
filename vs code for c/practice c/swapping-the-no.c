#include<stdio.h>

int a,b;  //if we declare these variable outside any function then they are called global variables and can be used anywhere inside the code.

int swapper(int n1 ,int n2){

    // time consuming but samaj mai aa jayaega.
    int i,j;
    i=n1;
    n1=n2;
    a=n1;
    n2=i;
    b=n2;

    return 0;
}
int main(int argc, char const *argv[])
{
    
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" before swapping a: %d b: %d\n",a,b);
    swapper(a,b);
    printf(" after swapping a: %d b: %d\n",a,b);



    return 0;
}
