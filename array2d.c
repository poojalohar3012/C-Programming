#include<stdio.h>

int main()
{

    int arr[3][4];
    int i = 0, j= 0;

    printf("Enter elemntes of array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
           
            
                scanf("\n%d",&arr[i][j]);

            
        }
    }

// Printing values in a proper index

 for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            
            
                printf("arr[%d][%d] = %d\n",i, j,arr[i][j]);

            
        }
    }

    return 0;

}