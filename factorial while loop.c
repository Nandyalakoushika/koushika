// write a c program to find the factorial of given number by using while loop//
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1,i=1;
    printf("enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("\n factorial of %d = %d",n,f);
    getch();
}
