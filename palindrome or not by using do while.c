#include<stdio.h>
#include<conio.h>
void main(){
int num,rev=0,rem,original;
printf("\n enter a number :");
scanf("%d",&num);
original = num;
do{
    rem = num % 10;
    rev = rev*10+rem;
    num = num/10;
}
while(num>0);
if(rev == original)
    printf("the given number %d is a palindrome",original);
else
    printf("the given number %d is not a palindrome",original);
getch();
}
