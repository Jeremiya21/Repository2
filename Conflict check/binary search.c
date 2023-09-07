//ME? !!!
#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int a[100],i,n,s;
    int min=0,max,mid=0;
    int k,l,m;
    printf("Enter no. of elements of the array to be created: ");
    scanf("%d",&n);
    max=n-1;
    mid = (max + min)/2 ;
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    printf("Enter the no. to search: ");
    scanf("%d",&s);
    if(s>a[n-1])
    {
        printf("The last number in the sorted array:%d",a[n-1]);
    }
    else if(s<a[0])
    {
        printf("-1");
    } 
    else {
    while(min<=max)
      {
        if(a[mid]==s)
        {
            printf("Element found at %d",mid);
            break;
        }
        else if (a[mid]<s)
        {
            min=mid+1;
        }
        else 
        {
            max=mid-1;
        }
        mid = (max + min)/2 ;
      }
      k=(abs(s-a[mid-1]));
      l=(abs(s-a[mid+1]));
      m=(abs(s-a[mid]));

    if((m < k ) && (m < l))
    {
        printf("Nearest term: %d",mid);
    } 
    else if(k>l)
    {
        printf("Nearest term: %d",mid+1);
    }
    else 
    {
        printf("Nearest term: %d",mid-1);
    }

    }
    
} 

