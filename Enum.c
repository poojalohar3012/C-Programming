#include<stdio.h>

enum days {Monday, Tuesday, Wednesday,Thursday};

int main()
{
    enum days obj;
    printf("Size of enum:%d\n",sizeof(obj));


    return 0;
}