#include<stdio.h>

 int No1=11;
 int No2;
 static int A=10;
 static int B;

 void Demo()
{
  int X = 10;
  static int Y = 20;
  printf("inside demo\n");
  printf("Value of A:%d",A);
}