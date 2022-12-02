#include<stdio.h>

float Addition(float iValue1,float iValue2)
{
  float iOutput=0;
  iOutput=iValue1+iValue2;
  return iOutput;
}

int main()
{
   float iNo1=10;
   float iNo2=11;
   float iAns=0;
   
   iAns=Addition(iNo1,iNo2);

  printf("Addition is:%f\n",iAns);
 
}
    