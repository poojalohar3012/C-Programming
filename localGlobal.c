#include<stdio.h>

int x=10;   //Global variable(data)
 
void Demo()
 {
   int b=30;  //Local Variable(stack)
  
   printf("Value of b:%d\n",b);
  
   printf("value of x:%d\n",x);

   //printf("%d",a);  //not allowed
 }

int main()
 {
  int a=20;   //Local Variable(stack)
 
  printf("value of a:%d\n",a);
  printf("value of x:%d\n",x);

  //printf("%d",a);  //not allowed

   Demo(); //Function call

return 0;
}