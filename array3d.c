#include<stdio.h>

int main()
{

    int arr[3][4][2];
    int i = 0, j= 0, k = 0;

    printf("Enter elemntes of array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            for(k = 0; k < 2; k++)
            {
                scanf("\n%d",&arr[i][j][k]);

            }
        }
    }

// Printing values in a proper index

 for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            for(k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d] = %d\n",i, j, k,arr[i][j][k]);

            }
        }
    }

    return 0;

}