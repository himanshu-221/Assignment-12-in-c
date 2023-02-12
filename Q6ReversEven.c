/*Write a recursive function to print first N even natural numbers in reverse order*/
#include<stdio.h>
void reversEven(int n)
{
    if(n==-1)
    return;
    else if(n%2==0)
    printf("%d\t",n);
    reversEven(n-1);
}

int main()
{
    reversEven(8);
    return 0;
}