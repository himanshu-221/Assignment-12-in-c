/*Write a recursive function to print first N odd natural numbers
*/

#include<stdio.h>
void odd(int n)
{
    if(n==0)
    return;
    odd(n-1);
    if(n%2!=0)
    {
        printf("%d\t",n);
    }
    // else{
    //     printf("%d\t",n);
    // }
}

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    odd(num);
    return 0;
}