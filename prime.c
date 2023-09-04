/*Write a program that takes an integer as input and returns whether it is prime or not using a function.*/
#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
   int input;
   printf("Enter the number to check: ");
   scanf("%d",&input);
   if(prime(input)==1)
   {
    printf("The number is not prime number");
   }
   else
    printf("The number is a prime number");
}

int prime(int input)
{ 
    for(int i=2;i<=sqrt(input);i++)
   {
    if(input%i == 0)
    {
        return 1;
        continue;
    }
    else 
    return 0;
   }
}   