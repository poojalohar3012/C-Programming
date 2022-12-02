#include<stdio.h>  //for printf and scanf
#include<stdlib.h>  //for malloc and free

/////////////////////////////////////////////////////////////////////
//
//  Application Namae : Addition of N numbers
//  Input :     N number
//  Output : Addition
//  Author : Pooja Bhagavan Lohar
//  Date : 18 September 2022
//
////////////////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL; // Pointer to hold the address of array
    int iSize = 0;    //Variable to hoid size of array
    int i = 0;
    int iSum = 0;

    printf("Please enter hoe many elements you want?\n");
    scanf("%d",&iSize);

    // Allocate the memory
    Arr =(int *)malloc(iSize * sizeof(int));

    printf("Memory is allocated\n");

    printf("Please enter the elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);

    }

    //Perform addition
    for(i = 0;i<iSize; i++)
    {
        iSum =iSum + Arr[i];

    }

    printf("Addition is : %d\n",iSum);
    free(Arr);
    printf("Memory is deallocated");

    return 0;

}