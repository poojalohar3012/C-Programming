#include<stdio.h>

int main()
{
    int no1=0,no2=0;

    printf("Enter two numbers:\n");
    scanf("%d %d",&no1,&no2);

    if(no1>no2)
    {
        printf("no1 is a greater \n");
    }
    else
    {
       printf("no2 is a greater \n"); 
    }

    return 0;
}