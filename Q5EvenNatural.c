/*Write a recursive function to print first N even natural numbers*/

#include<stdio.h>

void Even(int n)
{
    if(n==-1)
    return;
    Even(n-1);
    if(n%2==0)
    {
        printf("%d\t",n);
    }

}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    Even(num);
    return 0;
}