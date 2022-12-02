#include<stdio.h>


//structure declaration
struct Demo
{
     
     int i;
     
     double d;
     char ch;
     float f;
     
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;



    obj1.d=11.0;
    obj2.i=21;
    obj3.f=51;

    printf("Size of obj1 is :%d\n",sizeof(obj1));
    printf("Size of obj2 is :%d\n",sizeof(obj2));
    printf("i of obj2 is : %d\n",obj2.i);
    printf("c of obj3 is:%f\n",obj3.f);



    return 0;
}