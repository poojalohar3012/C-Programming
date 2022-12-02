#include<stdio.h>

struct Demo{
     int i;
     float f;
     char ch;
     char ch1;
     float d;

};

int main()
{
     struct Demo dobj;

     printf("Size of structure of is: %d",sizeof(dobj));
     
}