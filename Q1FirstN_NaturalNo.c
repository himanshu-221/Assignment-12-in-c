/*Write a recursive function to print first N natural numbers*/

#include<stdio.h>

void natural(int n)
{
    if(n==0)
    {
        return;
    }
    natural(n-1);
    printf("%d\t",n);
    
}

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    natural(num);
    return 0;
}