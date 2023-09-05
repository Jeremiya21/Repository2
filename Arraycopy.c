/*Write a program that takes an integer as input and returns whether it is prime or not using a function.*/
#include<stdio.h>
int main()
{
    int *array1[10][10],*array2[10][10],i,j,n;
    printf("Enter the array dimension: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the first array elements: ");
            scanf("%d",& *(*(array1+i)+j));
        }
    
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(array2+i)+j)= *(*(array1+i)+j);
        }
    
    }
}
