
/* 
Program to check whether a number is odd or even
*/
#include<stdio.h>
void oddeven(int a);
int main ()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    oddeven(x);
    return 0;
}
void oddeven(int a)
{
    if(a%2==0)
    printf("%d is an even number",a);
    else
    printf("%d is a odd number",a);

}