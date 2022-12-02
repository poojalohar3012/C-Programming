#include<stdio.h>


  void fun(int l)
  {
    auto int i;
     auto int j=10;
     int k=30;
   printf("Scope of auto variable starts from here in function fun\n");
   printf("\nDefault value of unutilised auto variable is %d",i);
 printf("\nScope of auto variable ends here in function fun\n");
 }

  int main()
  {
    fun(10);
     return 0;
    }
