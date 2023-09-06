/*Write a program that takes an integer as input and returns whether it is prime or not using a function.*/
/*i am including a new line By sam sunny*/
#include<stdio.h>
#include<math.h>
int prime(int);
int main()
//nink oru pani theram ,inna pidicho...
{
    //hello sam sunny 
   int input;
   printf("Enter the number to check: ");
   scanf("%d",&input);
   if(prime(input)==1)
   {
    printf("The number is not prime number");
   }
   else
    printf("Hi jeremiyaa.....");
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

/*conflict*/
}   