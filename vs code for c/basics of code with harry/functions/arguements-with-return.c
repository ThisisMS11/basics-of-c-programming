#include<stdio.h>
// we need to declare all of your functions outside the int main 
int sum(int a,int b){
    return a + b;

}


int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    c=sum(a,b);
    printf("the value of our c is %d\n",c);
    return 0;
}
